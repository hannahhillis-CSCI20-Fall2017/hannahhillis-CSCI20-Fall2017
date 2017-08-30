#include <iostream>
using namespace std;

int main() 
{
    int currentPopulation = 325770048;
    
    float birthSeconds = 8;
    float deathSeconds = -12;
    float migrantSeconds = 33;
    int years;
    int newPopulation;
    
    float birthPerMinute = 60/birthSeconds;
    float deathPerMinute = 60/deathSeconds;
    float migrantPerMinute = 60/migrantSeconds;
    
    int birthPerYear = 525600 * birthPerMinute;
    int deathPerYear = 525600 * deathPerMinute;
    int migrantPerYear = 525600 * migrantPerMinute;
    
    cout<<"What year do you want to know the population of?"<<endl;
    cin>>years;
    
    years = years - 2017;
    newPopulation = currentPopulation + (years * (birthPerYear + deathPerYear + migrantPerYear));
    cout<<"The population of the US in "<<years<<" years is "<<newPopulation<<endl;
}

    
    