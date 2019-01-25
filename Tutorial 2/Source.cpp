//Tutorial 2 in class asignment
//Cole Lamothe 100711084

#include<iostream>
#include<cmath>

using namespace std;

int main() {
	const double Pi = 3.14; 

	//Part one variables
	double circleRadius; // for user input
	double area; // for fanal output

	//Part two variables
	double sphereRadius; // for user input
	double volume; // for final output
	double fraction = 4.0/3.0; //Approximate value for 4/3

	//Part three variables
	int m1 = 100; //mass 1 in kg
	int m2 = 50; //mass 2 in kg
	double gravity = 9.81; //acceleration due to gravity 9.81m/s^2
	double tension;

	//Assignment part one
	cout << "This program will calculate the area of a circle. Please enter the radius of a circle you wish to find the area of: " << endl;
	cin >> circleRadius;
	area = Pi * pow(circleRadius, 2);
	cout << "The area of a circle with a radius of " << circleRadius << " is: " << area << endl;
	cout << "\n \n" << endl;

	//Assignment part two 
	cout << "This program will calculate the volume of a sphere. Please enter the radius of a sphere you wish to find the volume of: " << endl;
	cin >> sphereRadius;
	volume = fraction * Pi*pow(sphereRadius, 3);
	cout << "The volume of a sphere with a radius of " << sphereRadius << " is: " << volume << endl;
	cout << "\n \n" << endl;

	//Assignment part 3
	cout << "This program will calculate the tension in a cord where mass 1 = " << m1 << " and mass 2 = " << m2 << endl;
	tension = ((2 * (m1*m2))*gravity / (m1 + m2)); 
	cout << "The tension in the cord is " << tension << endl;
	
	system("pause");
	return 0;
}