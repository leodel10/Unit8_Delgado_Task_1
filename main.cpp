//a program to practice passing a struct by pointer (*)
#include <iostream>
#include <string>
using namespace std;
//declaration of the struct 

struct car
{
string make;
string model;
int year;
string Color;
};
//function definition declared above int main()
void printCar(car *c)
{
  cout << "\nCar details: " << endl;
  cout << "Make - " << c->make << endl;
  cout << "Model - " << c->model << endl;
  cout << "Year - " << c->year << endl;
  //set the color variable based upon the year, and print it 
if (c->year <= 2010)
{
  c->Color = "RED";
}  
else if (c->year > 2010)
{
  c->Color = "GREEN";
}
//print color to the screen 
cout << "Color: " << c->Color << endl;



}


int main() 
{
 //dclare an instance of the structure 
 car car1;
 car1.make = "Hyundai";
 car1.model = "Genesis";
 car1.year = 2016;

 car car2 = {"GMC", "Yukon", 1975}; 
 
 car car3 = {"Toyota", "Avalon", 2003};

 //print each car 
 printCar(&car1);
 printCar(&car2);
 printCar(&car3);
 return 0;
}