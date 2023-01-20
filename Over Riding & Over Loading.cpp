#include <iostream>
using namespace std;

class one{
	private:
		int a;
		int b;
	public:
		one (int a , int b)
		{
			this->a = a;
			this->b = b;
			cout<<a<<endl;
			cout<<b<<endl;
		}
		one (one &o)
		{
			a = o.a;
			b = o.b;
			cout<<a<<endl;
			cout<<b<<endl;
			}	
};

int main()
{
	one o1(10 , 20);
	one o2 = o1;
	return 0;
}