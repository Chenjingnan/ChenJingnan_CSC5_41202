/* 
 * File:   main.cpp
 * Author: Jingnan Chen
 * Created on January 10, 2016, 7:11 PM
 * Purpose:Total purchase
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant
int main()
{
    double item1=15.95;
    double item2=24.95;
    double item3=6.95;
    double item4=12.95;
    double item5=3.95;
    double Subttl,Tax1,Tax2,Tax3,Tax4,Tax5,Tax,total;
    
    Subttl=item1+item2+item3+item4+item5;
    Tax1=0.07*item1;
    Tax2=0.07*item2;
    Tax3=0.07*item3;
    Tax4=0.07*item4;
    Tax5=0.07*item5;
    Tax=Tax1+Tax2+Tax3+Tax4+Tax5;
    total=Subttl+Tax;
    
    cout<<"The price of item 1 is $ "<<item1<<endl;
    cout<<"The price of item 2 is $ "<<item2<<endl;
    cout<<"The price of item 3 is $ "<<item3<<endl;
    cout<<"The price of item 4 is $ "<<item4<<endl;
    cout<<"The price of item 5 is $ "<<item5<<endl;
    cout<<"The subtotal of the sale is $ "<<Subttl<<endl;
    cout<<"The amount of sales tax is $ "<<Tax<<endl;
    cout<<"The total price is $ "<<total<<endl;
    
    return 0;
}

