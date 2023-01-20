#include<iostream>
using namespace std;

class Vehicle
{
	protected:
		int engine_capacity;
		int seat_capacity;
	public:
		Vehicle()
		{
			cout << "Default Constructor of Vehicle" << endl << endl; 
		}
		
		Vehicle(int engine_capacity, int seat_capacity)
		{
			this->engine_capacity = engine_capacity;
			this->seat_capacity = seat_capacity;
			cout << "Parametrized Constructor of Vehicle" << endl << endl;
		}
		
		void Display()
		{
			cout << "Engine Capacity = " << engine_capacity << endl << endl;
			cout << "Seat Capacity = " << seat_capacity << endl << endl;
		}
		
		void changeEngCap(int x)
		{
			if(x<0)
			{
				cout << "Invalid" << endl << endl;
			}
			
			else
			{
				engine_capacity = x;
			}
		}
		
		void changeSeatCap(int y)
		{
			if(y<0)
			{
				cout << "Invalid" << endl << endl;
			}
			
			else
			{
				engine_capacity = y;
			}
		}
		
		~Vehicle()
		{
			cout << "Destructor of Vehicle" << endl << endl;
		}
};

class Car : public Vehicle
{
	private:
		int WindScreenSize;
		int SteeringSize;
		
	public:
		Car()
		{
			cout << "Default Constructor of Car" << endl << endl; 
		}
		
		Car(int engine_capacity, int seat_capacity, int WindScreenSize, int SteeringSize)
		{
			this->engine_capacity = engine_capacity;
			this->seat_capacity = seat_capacity;
			this->WindScreenSize = WindScreenSize;
			this->SteeringSize = SteeringSize;
			cout << "Parametrized Constructor of Vehicle" << endl << endl;
		}
		
		void Display()
		{
			cout << "Car Engine Capacity = " << engine_capacity << endl << endl;
			cout << "Car Seat Capacity = " << seat_capacity << endl << endl;
			cout << "Car Wind Screen Size = " << WindScreenSize << endl << endl;
			cout << "Car Steering Size = " << SteeringSize << endl << endl;
		}
		
		~Car()
		{
			cout << "Destructor of Car" << endl << endl;
		}
};

class Bike : public Vehicle
{
	private:
		int HandleSize;
		
	public:
		Bike()
		{
			cout << "Default Constructor of Bike" << endl << endl; 
		}
		
		Bike(int engine_capacity, int seat_capacity, int HandleSize)
		{
			this->engine_capacity = engine_capacity;
			this->seat_capacity = seat_capacity;
			this->HandleSize = HandleSize;
			cout << "Parametrized Constructor of Bike" << endl << endl;
			
		}
		
		void Display()
		{
			cout << "Bike Engine Capacity = " << engine_capacity << endl << endl;
			cout << "Bike Seat Capacity = " << seat_capacity << endl << endl;
			cout << "Bike Handle Size = " << HandleSize << endl << endl;
		}
		
		~Bike()
		{
			cout << "Destructor of Bike" << endl << endl;
		}
};



int main()
{
	Car c(1300, 4, 20, 10);
	c.Display();
	Bike b(125, 2, 6);
	b.Display();
	
	int x;
	cout << "Enter New Engine Capacity of Car: ";
	cin >> x;
	c.changeEngCap(x);
	
	int y;
	cout << "Enter New Engine Capacity of Bike: ";
	cin >> y;
	b.changeEngCap(y);
	cout << endl;
	c.Display();
	b.Display();
}
