/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on January 13, 2016, 08:30 PM
    Purpose: Property Tax 
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
    float actVal;
    float assVal;
    float tax;
    
    
    cout<<" How much is the actual value of a piece of property ?"<<endl;
    cin>>actVal;
    
    assVal=0.6*actVal;
    tax=0.01*0.01*assVal*75;
    
    cout<<"The assessment value is $ "<<assVal<<endl;
    cout<<"The property tax is $ "<<tax<<endl;
    
    
    return 0;
}
