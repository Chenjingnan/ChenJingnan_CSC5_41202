/* 
 * File:   main.cpp
 * Author: Jingnan Chen
 * Created on January 21, 2016, 11:28 AM
 * purpose: savings
 */

//system Libraries
#include <iostream>
#include <iomanip>//format

using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv){
    
    cout<<"Fun look at Savings and rule of 72"<<endl;
    cout<<endl<<"http://california.municipalbonds.com/bonds/recent/ "<<endl<<endl;
    
    //set the random number seed
    float balance=100.0f;       //initial balance
    float intRate=0.05f;       //Interest Rate/year
    float rule72=0.72f/intRate;//rule of 72, future value= 2 * Present Val
    
    cout<<"The interest rate = "<<intRate*100<<"%"<<endl;
    cout<<"At this interest Principle should double every";
    cout<<rule72<<"Years"<<endl;
    cout<<"Year Year Balance Interest"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"   0  2016  "<<setw(8)<<balance<<setw(9)<<balance*intRate<<endl;
    
    //calculate the savings
    balance*=(1+intRate);
    for(int y=1,year=2017;y<=50;y++,year++){
        cout<<setw(4)<<y<<" "<<year<<setw(9)<<balance<<setw(9);
        cout<<balance*intRate<<endl;
        balance*=(1+intRate);
    }
    
   
   //Exit stage right
    return 0;

}
