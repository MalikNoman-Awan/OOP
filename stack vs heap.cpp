#include <iostream>
using namespace std;

class one{
	public:
		one()
		{
			cout<<"cons one"<<endl;
		}
		~one()
		{
			cout<<"diss one"<<endl;
		}
};

class two : public one{
	public:
		two()
		{
			cout<<"cons two"<<endl;
		}
		~two()
		{
			cout<<"diss two"<<endl;
		}
};

int main()
{
	one* o = new one();
	two t;
	delete o;
	
	return 0;
}