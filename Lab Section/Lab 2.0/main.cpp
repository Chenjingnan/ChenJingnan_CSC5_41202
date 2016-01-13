/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on January 12, 2016, 10:30 PM
    Purpose: Give a grade 4 different ways
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    unsigned char A=90,B=80,C=70,D=60;
    unsigned short score;
    unsigned char grd1,grd2,grd3,grd4;
    
    cout<<"Input the score for a grade"<<endl;
    cin>>score;
    
    cout<<"The score is "<<static_cast<int>(score)<<"%"<<endl;
    
    grd1=(score>=A?'A':
         (score>=B?'B':
         (score>=C?'C':
         (score>=D?'D':'F'))));
    
    if     (score>=A) grd2='A';
    else if(score>=B) grd2='B';
    else if(score>=C) grd2='C';
    else if(score>=D) grd2='D';
    else              grd2='F';
    
    if(score>=A)            grd3='A';
    if(score>=B && score<A) grd3='B';
    if(score>=C && score<B) grd3='C';
    if(score>=D && score<C) grd3='D';
    if(score<D)             grd3='F';
    
	switch(score>=A){
		case true:grd4='A';break;
		default:
		   switch(score>=B){
		      case true:grd4='B';break;
		      default:
		         switch(score>=C){
		            case true:grd4='C';break;
		            default:
		               switch(score>=D){
		                  case true:grd4='D';break;
		                  default:  grd4='F';
	                   }
	             }
	       }
	}
    
	
	cout<<"Your grade with Ternary Operator = "<<grd1<<endl;
	cout<<"Your grade with Dependent if     = "<<grd2<<endl;
	cout<<"Your grade with Independent if   = "<<grd3<<endl;
        cout<<"Your grade with Switch/Case      = "<<grd4<<endl;
    
    return 0;
}
