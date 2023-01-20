#include <iostream>
using namespace std;

class parent{
	public:
		virtual void fun()
		{
			cout<<"Parent";
		}
};

class child : public parent{
	public: 
		void fun()
		{
			cout<<"Child";
		}
};

int main()
{
	parent* c = new child();
	c->fun();
	
	return 0;
}
