/* 
 * File:   main.cpp
 * Author: Jingnan Chen
 * Created on January 10, 2016, 5.00 PM
 * Purpose:Restaurant Bills
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant
int main()
{
    double Meal=88.67;
    double Tax=0.0675*Meal;
    double Tip=0.2*(Meal+Tax);
    double Total=Meal+Tax+Tip;
     
    cout<<"The meal cost is $ "<<Meal<<endl;
    cout<<"The tax amount is $ "<<Tax<<endl;
    cout<<"The tip amount is $ "<<Tip<<endl;
    cout<<"The total bill is $ "<<Total<<endl;

    return 0;
}

