/* 
 * File:   main.cpp
 * Author: Jingnan Chen
 * Created on January 21, 2016, 08:28 AM
 * purpose: Roman Numeral conversion
 */

//system Libraries
#include <iostream>
#include <cstdlib>//rand function
#include <ctime>//time to set the random number seed
using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv){
    
    cout<<endl<<"The Roman Numeral Conversion Program "<<endl<<endl;
    
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    unsigned short number=rand()%2001+1000;//[1000,3000]
    unsigned char n1000s,n100s,n10s,n1s;//number of 10^x's
    cout<<"The number to convert= "<<number<<endl;
    
    n1000s=(number-number%1000)/1000;//number of 1000's
    number=(number-n1000s*1000);//subtract off 1000's
    n100s=(number-number%100)/100;//number of 100's
    number=(number-n100s*100);//subtract off 100's
    n10s=(number-number%10)/10;//number of 10's
    n1s=(number-n10s*10);//subtract off 10's to get 1's
    
    
    cout<<"The number of 1000's = "<<static_cast<int>(n1000s)<<endl;
    cout<<"The number of 100's = "<<static_cast<int>(n100s)<<endl;
    cout<<"The number of 10's = "<<static_cast<int>(n10s)<<endl;
    cout<<"The number of 1's = "<<static_cast<int>(n1s)<<endl;
    
    cout<<"The Roman Numeral equivalent = ";
    
    switch(n1000s){
        case 3: cout<<"M";
        case 2: cout<<"M";
        case 1: cout<<"M";
    }
    
    switch(n100s){
        case 9: cout<<"CM";break;
        case 8: cout<<"DCCC";break;
        case 7: cout<<"DCC";break;
        case 6: cout<<"DC";break;
        case 5: cout<<"D";break;
        case 4: cout<<"CD";break;
        case 3: cout<<"C";
        case 2: cout<<"C";
        case 1: cout<<"C";
    }
    
    switch(n10s){
        case 9: cout<<"XC";break;
        case 8: cout<<"LXXX";break;
        case 7: cout<<"LXX";break;
        case 6: cout<<"LX";break;
        case 5: cout<<"L";break;
        case 4: cout<<"XL";break;
        case 3: cout<<"X";
        case 2: cout<<"X";
        case 1: cout<<"X";
    }
        
    switch(n1s){
        case 9: cout<<"IX";break;
        case 8: cout<<"VIII";break;
        case 7: cout<<"VII";break;
        case 6: cout<<"VI";break;
        case 5: cout<<"V";break;
        case 4: cout<<"IV";break;
        case 3: cout<<"I";
        case 2: cout<<"I";
        case 1: cout<<"I";
    }
        
        
    
   
   //Exit stage right
    return 0;

}
