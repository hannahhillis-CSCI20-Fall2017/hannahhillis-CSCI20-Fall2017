//Hannah Hillis
//September 20
//Lab21
#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
//declaration of variables    
double velocity;
double tempF;
double OldStyleWindChill; 
double NewStyleWindChill;

//user input
cout<<"Enter starting temperature in Farenheight"<<endl;
cin>>tempF;

cout<<"Enter starting wind speed"<<endl;
cin>>velocity;

//Formulas
OldStyleWindChill=0.081*(3.71*(sqrt(velocity))+5.81-0.25*velocity)*(tempF-91.4)+91.4;
NewStyleWindChill=35.74+0.6215*tempF-35.75*(pow(velocity,0.16))+0.4275*tempF*(pow(velocity,0.16));

//Output of wind speed, old formula, new formula, and the difference between the formulas
cout<<"Wind Speed "<<velocity<<", Old Formula "<<OldStyleWindChill<<", New Formula "<<NewStyleWindChill<<", Difference "<<OldStyleWindChill-NewStyleWindChill<<endl;

//Input temp:30 input windspeed:4
//Output: 4, 30.5753, 25.767, 4.8083
//Input temp:39.25 input windspeed:10
//Ouput: 10, 27.8601, 32.713, 4.85286
//Input temp:100 input windspeed:2
//Output: 2, 98.7538, 105.711, 6.95719
}

