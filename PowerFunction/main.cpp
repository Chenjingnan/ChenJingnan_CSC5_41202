/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on January 25, 2016, 08:30 AM
    Purpose:Room Capacity
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>//bringing time
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
int pow(int,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Variables to be using in timing
    unsigned int begi, endi,begd,endd;
    //beginning and ending of the integer and double function
    
    
    //Declare and initialize variables
    int x;//Base of the problem
    int y;//Exponent of the problem
    int z;//the result of a^b
    
    cout<<"Input a and b i.e. for a^b? "<<endl;
    cin>>x>>y;
    
    begi=static_cast<unsigned int>(time(0));
    z=pow(x,y);
    endi=static_cast<unsigned int>(time(0));
    
    
    cout<<"Our function result "<<x<<"^"<<y<<" = "<<z<<endl;
    cout<<"Beginning is "<<begi<<" s"<<" and ending is "<<endi<<" s "<<endl;
    
    //compare our function with the cmath library
    double dx=x;//copy into a double
    double dy=y;//copy into a double
    double dz;
    
    begd=static_cast<unsigned int>(time(0));
    dz=pow(dx,dy);
    endd=static_cast<unsigned int>(time(0));
    
    cout<<"Library function result  "<<dx<<"^"<<dy<<" = "<<dz<<endl;
    cout<<"Beginning is "<<begd<<" s"<<" and ending is "<<endd<<" s "<<endl;
    
    return 0;
}

/******************************************************************/
/*************************Power Function*****************************/
/******************************************************************/
int pow(int a,int b){
    if (b<=0) return 1;
    if (b==1) return a;
    int abd2 = pow(a, b/2);
    if (b%2) return abd2*abd2*a;//if even
    return abd2*abd2;       //else odd
    
}