/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on January 11, 2016, 11:00 AM
    Purpose: Jackpot
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here

int main()
{
unsigned int Jackpot;
double LumpSum=0.62 *Jackpot;
double AftrTax=0.52* LumpSum;
double Mrrige=0.5 *AftrTax;

cout<<"the Marriage is $"<<Mrrige<<endl;

return 0;
}
