/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on January 13, 2016, 08:30 PM
    Purpose: Currency   
 */

//System Libraries
#include <iostream>
#include <iomanip>


using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    const float  Yenpdo=98.93;
    const float  Eurpdo=0.74;
    float Dollar;
    float Jan;
    float Eur;
    
    
    cout<<" How many is the U.S. dollar amounts ?"<<endl;
    cin>>Dollar;
    
    Jan=Yenpdo*Dollar;
    Eur=Eurpdo*Dollar;
    

    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"The amounts of Japanese yen is "<<Jan<<endl;
    cout<<"The amounts of euros is "<<Eur<<endl;
    
    
    return 0;
}
