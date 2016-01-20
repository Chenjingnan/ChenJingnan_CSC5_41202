/* 
 * File:   main.cpp
 * Author: Jingnan Chen
 * Created on January 20, 2016, 10:58 AM
 * purpose: display a temperature table
 */

//system Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv){
    
    cout<<endl<<"Display a Temperature Table"<<endl<<endl;
    
    //set the random number seed
    float slope=5.0f/9;//slope of the line for temperature conversion c/f
    char intrcpt=-32;//Scaled 9/5 deg c
    unsigned char c1=0,c2=100,f1=32,f2=212;//data pts of freezing and boiling
    
    
    //loop to generate the degree Celsius and output the table
    cout<<"Fahrenheit   Celsius   Celsius"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    for(int f=f1;f<=f2;f++){
        float ceq=slope*(f-intrcpt);
        float cintrp=c1+static_cast<float>(f-f1)/(f2-f1)*(c2-c1);
        cout<<setw(10)<<f<<setw(10)<<ceq<<setw(10)<<cintrp<<endl;
        
    }
    
   //Exit stage right
    return 0;

}
