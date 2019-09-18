#include <iostream>
#include <cmath>
using namespace std;

//Program to find the 3 unknown sizes of a circle

//define the global variables
  float mrad, mdia, mcirc, marea;

int area()
{
  //input known measurement
  cout << "enter known measurement";
  cin >> marea;
  
  //work out the radius, diameter and circumference
  mrad = sqrt(marea/M_PI);
  mdia = mrad*2;
  mcirc = mdia*M_PI;
  return 0;
}

int radius()
{
 //input known measurement
 cout << "enter known measurement:";
 cin >> mrad;
 
//work out the diameter, circumference and area
mdia = mrad*2;
mcirc = mdia*M_PI;
marea = M_PI*(mrad*mrad);
return 0;
}
 
int diameter()
{
//input the known measurement
 cout << "enter known measurement:";
 cin >> mdia;

 //work out the radius, circumference and area
 mrad = mdia/2;
 mcirc = mdia*M_PI;
 marea = M_PI*(mrad*mrad);
 return 0;
}


int circumference()
{
//input the known measurement
 cout << "enter known measurement:";
 cin >> mcirc;

//work out the diameter, radius and area
 mdia = mcirc/M_PI;
 mrad = mdia/2;
 marea = M_PI*(mrad*mrad);
return 0;
}


int main() 

{
//declare variable char
 char input; 
 
 cout << "This program can work out the radius, diameter and circumference and area of a circle" << endl;
 cout << "which measurement do you know?" << endl;
 cout << "r=radius, c=circumference, d=diameter a=area" << endl;
 cout << "Please input:a, c, d or r:";
 cin >> input;

 if (input == 'r')
 {
    radius();
    //output all
    cout << "Diameter = " << mdia << endl << "Circumference = " << mcirc << endl << "Area = " << marea << endl; 
 }
 else if (input == 'd')
 {
    diameter();
    //output all
    cout << "Radius = " << mrad << endl << "Circumference = " << mcirc << endl << "Area = " << marea << endl;
 }
 else if (input == 'c')
 {
    circumference();
    //output all
    cout << "Diameter = " << mdia << endl << "Radius = " << mrad << endl <<   "Area = " << marea << endl;
 }
 else if (input == 'a')
 {
   area();
   //output all
   cout << "Radius = " << mrad << endl << "Diameter = " << mdia << endl << "Circumference = " << mcirc << endl;
 }
 else
 {
   cout << "USER IS A NOOB" << endl;
 }
   return 0;
}
