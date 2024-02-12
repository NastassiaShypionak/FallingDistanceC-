/******************************************************************************
Falling distance 

01/22/2024
*******************************************************************************/
#include <iostream>
#include <cmath>    // for pow() function
using namespace std;

const double g = 9.8; 

double fallingDistance(int);

int main()
{
	double d; //distance
    double t; //time

	for (int t = 1; t <= 10; t++)
    {
        d = fallingDistance(t);
        
        cout <<"For "<< t << " seconds the distance is "
             << d << " meters"
             << endl;
    }
	
  	return 0;
}

double fallingDistance(int t)
{
    return (0.5) * g * pow(t, 2);
}

