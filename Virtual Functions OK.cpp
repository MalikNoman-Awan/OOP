#include<iostream>
using namespace std;

class Shape
{
	public:
		virtual void calculateArea() = 0;
		
		void printArea()
		{
			cout << " Print Area of Shape" << endl;
		}
		
};


class TwoDim : public Shape
{
	public:
		virtual void calculateTwoDimArea() = 0;
};


class ThreeDim : public Shape
{
	public:
		virtual void calculateThreeDimArea() = 0;
};


class Circle : public TwoDim
{
	public:
		void printArea()
		{
			cout << " Print Area of Circle" << endl;
		}
};


class Triangle : public TwoDim
{
	public:
		void printArea()
		{
			cout << " Print Area of Triangle" << endl;
		}
};


class Rectangle : public TwoDim
{
	void printArea()
	{
		cout << " Print Area of Rectangle" << endl;
	}
};



class Cube : public ThreeDim
{
	public:
		void printArea()
		{
			cout << " Print Area of Cube" << endl;
		}
};


class Cone : public ThreeDim
{
	public:
		void printArea()
		{
			cout << " Print Area of Cone" << endl;
		}
};




int main()
{
	Shape* obj1 = new Shape();		// we cannot create direct object of Abstract Classes
	TwoDim* obj2 = new TwoDim();
	ThreeDim* obj3 = new ThreeDim();
	TwoDim* obj4 = new Circle();
	TwoDim* obj5 = new Triangle();
	Circle* obj6 = new Circle();
	Rectangle* obj7 = new Rectangle();
	Cube* obj8 = new Cube();
	Cone* obj9 = new Cone();
	obj7->printArea();
	obj8->printArea();
	obj9->printArea();
	obj8->calculateThreeDimArea();
	obj6->calculateTwoDimArea();
}

