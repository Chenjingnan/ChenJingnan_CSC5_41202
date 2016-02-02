/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on February 2nd, 2016, 08:20 AM
    Purpose: develop a sorting routine called Mark Sort
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

//User Libraries

//Global Constants


//Function prototypes
    void fillAry(int [],int);
    void prntAry(int [],int,int);
    void swap(int&,int&);
    void lstSml(int [],int,int);
    void markSrt(int[],int);
    
    
//Execution Begins Here
int main(int argc, char** argv) {
    srand (static_cast<unsigned int>(time(0)));
    
    const int SIZE=100;
    int array[SIZE];
    
    fillAry(array,SIZE);
    
    prntAry(array,SIZE,10);
    
    //test the swap
    markSrt(array,SIZE);// lstSml(array,SIZE,0)  lstSml(array,SIZE,1);
    
    prntAry(array,SIZE,10);
    
    
    

    return 0;
}



/******************************************************************************/
/*******************************Fill Array***********************************/
/******************************************************************************/
//Inputs:
//a->List
//n->Size of the array
//Outputs:
//a->List initialized with random 2 digit numbers
/******************************************************************************/
void fillAry(int a[],int n){
    //loop and fill the array with random numbers
    for(int i=0;i<n;i++)
        a[i]=rand()%90+10;//[10,99]
    
}


/******************************************************************************/
/*******************************Print Array***********************************/
/******************************************************************************/
//Inputs:
//a->List
//n->Size of the array
//Outputs:
//a->Printed List
/******************************************************************************/
void prntAry(int a[],int n,int perLine){
    //loop and fill the array with random numbers
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if (i%perLine==(perLine-1))
            cout<<endl;
    }
    cout<<endl;
    
    
    
}


/******************************************************************************/
/*******************************Swap Array***********************************/
/******************************************************************************/
//Inputs:
//a->first variable
//b->second variable
//Outputs:
//a->first variable with value of b
//b->second variable with value of a
/******************************************************************************/
void swap(int&a,int&b){
    //loop and fill the array with random numbers
    a=a^b;//exclusive or XOR
    b=a^b;
    a=a^b;
    
    
    
}


/******************************************************************************/
/*****************************Smallest in List*********************************/
/******************************************************************************/
//Inputs:
//a->Array or List
//b->Size of List
//pos->to place smallest in list that follows
//Outputs:
//a[pos]->smallest element in [a[pos],a[n-1]]
/******************************************************************************/

void lstSml(int a[],int n,int pos){
    //loop and compare
    for(int i=pos+1;i<n;i++){
        if (a[pos]>a[i])swap(a[pos],a[i]);
    }
}

/******************************************************************************/
/*****************************Mark Sort*********************************/
/******************************************************************************/
//Inputs:
//a->Array or List
//n->Size of List
//Outputs:
//a->sorted array
/******************************************************************************/

void markSrt(int a[],int n){
    //find smallest in each successive list
    for(int i=0;i<n-1;i++)
        lstSml(a,n,i);
}