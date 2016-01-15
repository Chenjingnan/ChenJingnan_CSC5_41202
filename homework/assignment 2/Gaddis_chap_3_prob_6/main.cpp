/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on January 13, 2016, 08:30 PM
    Purpose: Ingredient adjusters  
 */

//System Libraries
#include <iostream>
#include <iomanip>


using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    float sugar=1.5;
    float butter=1;
    float flour=2.75;
    int number;
    float cup1;
    float cup2;
    float cup3;
    
    cout<<" How many cookies you want to make?"<<endl;
    cin>>number;
    
    cup1=number/48*1.5;
    cup2=number/48*1;
    cup3=number/48*2.75;
    
    
    cout<<"The number of cups of sugar needed is "<<cup1<<endl;
    cout<<"The number of cups of butter needed is "<<cup2<<endl;
    cout<<"The number of cups of flour needed is "<<cup3<<endl;
    
    
    return 0;
}
