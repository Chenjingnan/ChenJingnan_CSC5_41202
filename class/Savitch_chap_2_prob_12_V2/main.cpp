/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on January 14, 2016, 10:50 AM
    Purpose:Calculate the Square Root
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    float n;//input the variables to obtain it's square root
    float r, guess;//intermediate values which asymptotically approach sqrt(n)
    float tol=0.001f;
    
    cout<<"Input the value to computer the sqrt of?"<<endl;
    cin>>n;
    
    guess=n/2;
    r=n/guess;
    guess=(guess+r)/2;
    
    cout<<"The input value= "<<n<<endl;
    cout<<"sqrt("<<n<<")= "<<sqrt(n)<<endl;

    do {
        r=n/guess;
        guess=(guess+r)/2;
    } while (abs((r-guess)/guess)*100>tol);//end the loop when close enough
    
    cout<<"The r= "<<r<<endl;
    cout<<"The guess= "<<guess<<endl;
    
    return 0;
}
