//Hannah Hillis
//October 2
//CSCI20
//Lab 2.3
#include <iostream>
#include <time.h>
using namespace std;

//input: the low integer, a, and the high integer, b.  
//output: a now holds the value b held and b now holds the value a held
//what it does: swaps the values of a and b
void Swap(int& a, int& b){
    int c=a;
    a = b;
    b = c;
    return;
}
    //input: the two numbers that were swapped
    //output: a random number between those two numbers
    //gives a random number
void Random(int a, int b){ 
    srand (time(0)); 
    int number = rand()%(a-b)+1+b;
    cout<<number<<endl;
    return;
}

int main(){
    int a; //first value input
    int b; //second, larger, value input
    int number;
    cout<<"Enter a random number."<<endl; //user input
    cin>>a;
    cout<<"Enter another number larger than the previous one."<<endl;
    cin>>b;
    Swap(a, b); //swap function called
    cout<<"The first number should now be "<<a<<", and the second number should now be "<<b<<"."<<endl; //output swapped numbers
    cout<<"Random number between these two numbers: "; //output random number between the two numbers
    Random(a, b);
    cout<<number; //random number output
    return 0;
    
    
}
    

