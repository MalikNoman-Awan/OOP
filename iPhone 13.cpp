#include<iostream>
using namespace std;

class iPhone_13
{
	protected:
		int weight;
		double camera;
		double display;
		
	public:
		iPhone_13()
		{
			cout << "Default Constructor of iPhone 13" << endl;
		}
		
		iPhone_13(int weight, double camera, double display)
		{
			this->weight = weight;
			this->camera = camera;
			this->display = display;
			cout << "Parametrized Constructor of iPhone 13" << endl;
		}
		
		~iPhone_13()
		{
			cout << "Destructor of iPhone 13" << endl;
		}
};

class iPhone_13_Pro : public iPhone_13
{
	public:
		iPhone_13_Pro()
		{
			cout << "Default Constructor of iPhone 13 Pro" << endl;
		}
		
		iPhone_13_Pro(int weight, double camera, double display)
		{
			this->weight = weight;
			this->camera = camera;
			this->display = display;
			cout << "Parametrized Constructor of iPhone 13 Pro" << endl;
		}
		
		~iPhone_13_Pro()
		{
			cout << "Destructor of iPhone 13 Pro" << endl;
		}
};

class iPhone_13_Pro_Max : public iPhone_13_Pro
{
	public:
		iPhone_13_Pro_Max()
		{
			cout << "Default Constructor of iPhone 13 Pro Max" << endl;
		}
		
		iPhone_13_Pro_Max(int weight, double camera, double display)
		{
			this->weight = weight;
			this->camera = camera;
			this->display = display;
			cout << "Parametrized Constructor of iPhone 13 Pro Max" << endl;
		}
		
		~iPhone_13_Pro_Max()
		{
			cout << "Destructor of iPhone 13 Pro Max" << endl;
		}
};


int main()
{
	iPhone_13 mob(174, 12, 6.1);
	iPhone_13_Pro mob2(204, 12, 6.1);
	iPhone_13_Pro_Max mob3(240, 12, 6.7);
}
