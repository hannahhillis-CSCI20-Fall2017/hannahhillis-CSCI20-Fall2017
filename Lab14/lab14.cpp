#include <iostream>
using namespace std;

int main() 
{
    
    int userInput; //money put into machine

    
    cin>>userInput;
    
    int quarter = userInput/25; //amount of quarters
    int remainQ = userInput%25; //remaining cents
    int dime = remainQ/10;      //amount of dimes
    int remainD = remainQ%10;   //remaining cents
    int nickel = remainD/5;     //amount of nickels
    int remainN = remainD%5;    //remaining cents
    int penny = remainN/1;      //amount of pennies
    int machineOutput = userInput - (userInput*.109); //amount of money user gets back from machine
    
    
   
    cout<<"There are "<<quarter<<" quarters, "<<dime<<" dimes, "<<nickel<<" nickels, and "<<penny<<" pennies."<<endl;
    cout<<"The total is "<<userInput<<" cents."<<"You will recieve "<<machineOutput<<" cents in cash."<<endl;
}