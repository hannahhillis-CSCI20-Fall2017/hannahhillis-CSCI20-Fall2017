//Hannah Hillis
//Sept 11 2017
//Lab15
#include <iostream>
using namespace std;

int main() 
{
    //A madlib where a student is sick and the note says what they have and what they should do to get better with e the user inputting key words
    string wordName;
    string wordPartOfBody;
    string wordTypeOfFluid;
    string wordSubstance;
    string wordVerb;
    
    //Get users words
    cout<<"Type input without spaces."<<endl;
    
    cout<<"Enter a name."<<endl;
    cin>>wordName;
    
    cout<<"Enter a part of the body."<<endl;
    cin>>wordPartOfBody;
    
    cout<<"Enter a type of fluid."<<endl;
    cin>>wordTypeOfFluid;
    
    cout<<"Enter a plural edible substance."<<endl;
    cin>>wordSubstance;
    
    cout<<"Enter a verb."<<endl;
    cin>>wordVerb;
    
    //the paragraph produced
    cout<<endl;
    cout<<wordName<<" is sick with the "<<wordPartOfBody<<" flu. Drink more "<<wordTypeOfFluid<<" and take "<<wordSubstance<<" as needed. "<<wordVerb<<" as much as possible."<<endl;
    
    
}