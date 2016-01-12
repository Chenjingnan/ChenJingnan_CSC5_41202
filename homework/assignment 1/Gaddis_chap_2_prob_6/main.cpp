/* 
 * File:   main.cpp
 * Author: Jingnan Chen
 * Created on January 10, 2016, 6:53 PM
 * Purpose:Annual Pay
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant
int main()
{
    int payAmount=2200;
    int payPeriods=26;
    
    double annualPay=payAmount*payPeriods;
     
    cout<<"annualPay = $ "<<annualPay<<endl;

    return 0;
}

