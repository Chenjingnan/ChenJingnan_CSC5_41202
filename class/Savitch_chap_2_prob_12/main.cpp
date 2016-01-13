/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on January 13, 2016, 10:50 AM
    Purpose:Calculate the Square Root
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    float n;//input the variables to obtain it's square root
    float r, guess;//intermediate values which asymptotically approach sqrt(n)
    
    cout<<"Input the value to computer the sqrt of?"<<endl;
    cin>>n;
    
    guess=n/2;
    r=n/guess;
    guess=(guess+r)/2;
    
    cout<<"The input value= "<<n<<endl;
    cout<<"sqrt("<<n<<")= "<<sqrt(n)<<endl;
    cout<<"The first pass r= "<<r<<endl;
    cout<<"The first pass guess= "<<guess<<endl;
    
    
    r=n/guess;
    guess=(guess+r)/2;
    
    cout<<"The second pass r= "<<r<<endl;
    cout<<"The second pass guess= "<<guess<<endl;
    
    
    r=n/guess;
    guess=(guess+r)/2;
    
    cout<<"The third pass r= "<<r<<endl;
    cout<<"The third pass guess= "<<guess<<endl;
    
   
    return 0;
}
