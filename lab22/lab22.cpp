//Hannah Hillis
//Lab2.2
//Random number generator including a  function
#include <iostream>
#include <time.h> //allows to use srand
using namespace std;


void Random(){ //function name
    cout<<"Random number: "; //ouputs the words Random number:
    srand (time(NULL)); //makes the number random
    int number = rand() % 100 + 1; //makes it a number between 0 and 100
    cout<<number; //outputs the random number
}
int main(){
Random(); //runs the void Random function once
}