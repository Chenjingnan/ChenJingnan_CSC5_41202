/* 
 * File:   main.cpp
 * Author: Jingnan Chen
 * Created on January 10, 2016, 6:00 PM
 * Purpose:Average of Values
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant
int main()
{
    double a=28;
    double b=32;
    double c=37;
    double d=24;
    double f=33;
    double Sum;
    float Average;
    double n=5;
    
    Sum=a+b+c+d+f;
    Average=Sum/n;
     
    cout<<"The average value is "<<Average<<endl;

    return 0;
}

