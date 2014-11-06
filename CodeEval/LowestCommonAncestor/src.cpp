#include<iostream>
#include<fstream>
#include<cstring>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

struct Node
{
	int info;
	Node* left;
	Node* right;
};

class Tree
{
private :
	Node* root;

public :
	Tree();
	~Tree();
	void insert(int);
	int lowestAncestor(int x,int y);
	//int depth();
};

Tree :: Tree()
{
	root = NULL;
}

Tree :: ~Tree()
{
	
}

void Tree :: insert(int num)
{
	Node *q,*temp,*parent;
	q=root;
	parent=NULL;
	if(root==NULL)//FIRST ELEMENT OF TREE
	{
		root=new Node;
		root->info=num;
		root->left=NULL;
		root->right=NULL;
		return;
	}
	else
	{
		temp=new Node; //New element created. However has not been linked so far
		temp->info=num;
		temp->left=NULL;
		temp->right=NULL;

		while(q!=NULL)
		{
			if(num < q->info)//for LEFT side of root
			{
				parent=q;//needed to know the root
				q=q->left;
				if(q==NULL)
					parent->left=temp;	

			}
			else//For RIGHT side of root
			{
				parent=q;
				q=q->right;
				if(q==NULL)
					parent->right=temp;	
				

			}
		}

	}
}

int Tree :: lowestAncestor(int x,int y)
{
	Node* ptr = root;
	int small = root->info;
	while(!( (x < ptr->info)&&(y > ptr->info)  ))
	{
		if(x < ptr->info)
			ptr = ptr->left;
		else
			ptr = ptr->right;
		small = ptr->info;

	}
	return small;
}

int depth(Tree ptr)
{
	if(ptr == NULL)
		return 0;
	else
		return 1 + max(depth(ptr->left),depth(ptr->right));
}

int main(void)
{
	Tree tr;
        tr.insert(30);
        tr.insert(8);
	tr.insert(52);
        tr.insert(3);
        tr.insert(20);
        tr.insert(10);
        tr.insert(29);
        cout << depth(tr) << endl;
	/*ifstream infile;
	string line;
	
	infile.open(argv[1]);
	while(getline(infile,line))
	{
		if(line.length()==0)
			continue;
		else
		{
			vector<int> vec;
			string delimiters = " ";
			size_t current;
			size_t next = -1;
			do
			{
				current = next + 1;
				next = line.find_first_of( delimiters, current );
				vec.push_back(atoi((line.substr( current, next - current )).c_str()));
			}while (next != string::npos);
						
			cout << tr.lowestAncestor(min(vec[0],vec[1]),max(vec[0],vec[1])) << endl;
		}
	}
	infile.close();
	*/return 0;
}

