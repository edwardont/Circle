#include <iostream>
#include <cmath>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();
	virtual ~Circle();
	
	int calc_area();

	int set_radius(int);
};

Circle::Circle()
{
        radius = 0; 
}
Circle::~Circle()
{

}

int Circle::calc_area()
{
	return ((radius*radius)*M_PI);
}


int Circle::set_radius(int r)
{
	if ((r > 0) && (r < 10000))
	{
		radius = r;
		return 0;
	}
	return 1;
}


int main()
{
        Circle Diner;
        int input = 0;

        cout << "Please choose lucky number";
        cin >> input;
        if (Diner.set_radius(input) == 0)
        {
        	cout << "Area " << Diner.calc_area() << endl;
        }
        else
        {
        	cout << "could not set radius" << endl;
        }
        return 0;
}

