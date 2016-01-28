/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on January 28, 2016, 10:00 AM
    Purpose: First Array
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants
const char PERCENT=100;

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    float pv=100;//present value in dollars $'s
    int iRate=6;//interest rate in percent %
    int nComp=12;//number of compounding periods in years
    float fv=pv;//future values
    
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Year Savings"<<endl;
    //Calculate and display the table of the result
    for(int year=0;year<=nComp;year++){
        int ifv=fv*PERCENT;
        fv=static_cast<float>(ifv)/PERCENT;
        cout<<setw(4)<<year<<setw(7)<<fv<<endl;
        fv*=(1+static_cast<float>(iRate)/PERCENT);
    }
    //The MVC concept separates the view from the model
    float balance[nComp+1];
    balance[0]=pv;
    
    //Calculate the array,i.e. model
    cout<<"Year Savings"<<endl;
    for(int year=0;year<=nComp;year++){
        int ifv=balance[year]*PERCENT;
        balance[year]=static_cast<float>(ifv)/PERCENT;
        cout<<setw(4)<<year<<setw(7)<<fv<<endl;
        balance[year+1]=balance[year]*(1+static_cast<float>(iRate)/PERCENT);
    }
    
    //Display or view of the model
    cout<<"Year Savings"<<endl;
    for(int year=0;year<=nComp;year++){
        cout<<setw(4)<<year<<setw(7)<<balance[year]<<endl;
    }
    
        
       
    
    
    

    return 0;
}



