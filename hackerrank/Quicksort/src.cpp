#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int partition(int *arr,int low,int high)
{
	int var = arr[low];			
	int j = low;
	vector<int> v1,v2;			

	for(int i=low+1;i<=high;i++)
	{
		if(arr[i] < var)
			v1.push_back(arr[i]);
		else if(arr[i] > var)
			v2.push_back(arr[i]);
	}

	for(int i=0;i<v1.size();j++,i++)
		arr[j] = v1[i];
	arr[j] = var;
	int k = j;				// Pivot 
	j++;
	for(int i=0;i<v2.size();j++,i++)
		arr[j] = v2[i];
	return k;
}

void quicksort(int *arr,int low,int high)
{
	if(low < high)
	{
		int pivot = partition(arr,low,high);
		quicksort(arr,low,pivot-1);
		quicksort(arr,pivot+1,high);
	}
}

int main(void)
{
	int SIZE;
	cout << "Enter the size of the array" << endl;
	cin >> SIZE;
	int arr[SIZE];
	for(int i=0,x;i<SIZE;i++)
	{
		cin >> x;
		arr[i] = x;
	}

	cout << "The array before sorting is : ";
	for(int i=0;i<SIZE;i++)
		cout << arr[i] << " ";
	cout << endl;

	quicksort(arr,0,SIZE-1);

	cout << "The array after quicksort is : ";
	for(int i=0;i<SIZE;i++)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}

