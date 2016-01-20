/* 
 * File:   main.cpp
 * Author: Jingnan Chen
 * Created on January 20, 2016, 11:15 AM
 * purpose: Table of Salary doubling starting at a penny
        Double is required because number of significant digits
        Anything larger than $99,999.99 requires a double
 */

//system Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv){
    
    cout<<"Solution to Gaddis 8thEd chap5 prob 7 "<<endl;
    cout<<endl<<"Display a Salary Table"<<endl<<endl;
    
   
    unsigned int salary=1;//Salary starting at a penny
    double totPay=salary;//Total Pay by summing the salary
    
    
    //loop to generate the degree Celsius and output the table
    cout<<"  Day           $Salary            $Total"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    for(int day=2;day<=31;day++){
        salary*=2;
        totPay+=salary;
        cout<<setw(4)<<day<<setw(18)<<salary/100.0f<<setw(18)
                <<totPay/100.0f<<endl;
        
    }
    
   //Exit stage right
    return 0;

}
