#include <iostream>

using namespace std;
int count = 0;

class Singleton
{
private:
	//static bool instanceFlag;
    	static Singleton* single;
    	Singleton()
  	{
		count++;
        }
public:
    	static Singleton* getInstance();
    	void method();
    	~Singleton()
    	{
		single = NULL;
        	//instanceFlag = false;
    	}
};

//bool Singleton::instanceFlag = false;
Singleton* Singleton::single = NULL;
Singleton* Singleton::getInstance()
{
	if(single == NULL)
    	{
        	single = new Singleton();
        	//instanceFlag = true;
        	return single;
    	}
    	else
    	       	return single;
}

void Singleton::method()
{
    	cout << "Method of the singleton class : " << count << endl;
}

int main()
{
	Singleton *sc1,*sc2;
    	sc1 = Singleton::getInstance();
    	sc1->method();
    	sc2 = Singleton::getInstance();
    	sc2->method();

    	return 0;
}
