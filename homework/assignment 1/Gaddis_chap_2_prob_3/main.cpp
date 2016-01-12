/* 
 * File:   main.cpp
 * Author: Jingnan Chen
 * Created on January 10, 2016, 5.00 PM
 * Purpose:Sales Tax
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant
int main()
{
    int Prchse=95;
    
    double SttTax=Prchse*0.04;
    double CntryTax=Prchse*0.02;
    double Total=SttTax+CntryTax;
     
    cout<<"The total sales tax is $ "<<Total<<endl;

    return 0;
}

