#include <iostream>
using namespace std;

class youtube{
	public:
		string name;
		int age;
	youtube(string n , int a)
	{
		name = n;
		age = a;
		}	
};

ostream& operator<< (ostream& cout , youtube& yt1)
{
	cout << "NAME: " << yt1.name << endl;
	cout << "AGE: " << yt1.age << endl;
	
	return cout; 
}
istream& operator>> (istream& cin , youtube& yt1)
{
	cout << "Enter Name: "; cin >> yt1.name;
	cout << "Enter Age: "; cin >> yt1.age;
	
	return cin;
}

int main()
{	
youtube yt1("COBRA" , 22) , yt2("REHAN" , 22);
cout << yt1 << yt2;
cin >> yt1 >> yt2;
cout << yt1 << yt2;

return 0;	
}
