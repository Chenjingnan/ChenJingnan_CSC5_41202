/* 
 * File:   main.cpp
 * Author: Jingnan Chen
 * Created on January 26, 2016, 08:44 AM
 * purpose: Savings Function
 */

//system Libraries
#include <iostream>
#include <iomanip>//format
#include <cmath>//power,exponential,log function
#include <cstdlib>//random
#include <ctime>//time function
using namespace std;

//User Libraries

//Global Constant
const char PERCENT=100;//Convert (Decimal to Percentage)

//Function Prototypes
float save1(float,float,int);
float save2(float,float,int);
float save3(float,float,int);
float save4(float,float,int);
float save5(float,float,int);
float save6(float,int,float=0.05f);//defaulted save function
float save7(float,float,int);

//Execution Begins Here

int main(int argc, char** argv){
    
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    float pv=rand()%9001+1000;//[1000,10000]
    float intRate=rand()%11+5;//[5,15]
    char nComp=rand()%16;//[0,15]
    
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The Present Value= $"<<pv<<endl;
    cout<<"The interest rate = "<<intRate<<"%"<<endl;
    cout<<"The number of years = "<<static_cast<int>(nComp)<<endl;
    
    
    cout<<"The Savings using Power Function= $"
            <<save1(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The Savings using exponential and log Function= $"
            <<save2(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The Savings using For Loops= $"
            <<save3(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The Savings using For Loops Banking Version= $"
            <<save4(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The Savings using recursion= $"
            <<save5(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The Savings with Exponential Defaulting Interest= $"
            <<save6(pv,nComp)<<endl;
    cout<<"The Savings using For Loops Function static variables= $"
            <<save7(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The Savings using For Loops Function static variables= $"
            <<save7(pv,intRate/PERCENT,nComp)<<endl;        
    
    
    
    
   //Exit stage right
    return 0;

}


/*****************************************************************************/
/**********************************SAVE1**************************************/
/*****************************************************************************/
//Inputs
//p->Present Value $'s
//i->Interest Rate %
//n->Number of compounding periods
//Output
//fv->Future Value $'s
//using the power function
float save1(float p,float i,int n){
    return p*pow((1+i),n);
}

/*****************************************************************************/
/**********************************SAVE2**************************************/
/*****************************************************************************/
//Inputs
//p->Present Value $'s
//i->Interest Rate %
//n->Number of compounding periods
//Output
//fv->Future Value $'s
//using the exponential function
float save2(float p,float i,int n){
    return p*exp(n*log(1+i));
}

/*****************************************************************************/
/**********************************SAVE3**************************************/
/*****************************************************************************/
//Inputs
//p->Present Value $'s
//i->Interest Rate %
//n->Number of compounding periods
//Output
//fv->Future Value $'s
//using the for loop function
float save3(float p,float i,int n){
    for (int years=1;years<=n;years++){
        p*=(1+i);
    }
    return p;
}


/*****************************************************************************/
/**********************************SAVE4**************************************/
/*****************************************************************************/
//Inputs
//p->Present Value $'s
//i->Interest Rate %
//n->Number of compounding periods
//Output
//fv->Future Value $'s
//using the for loop function Banking Implementation
float save4(float p,float i,int n){
    int ip=p*PERCENT;
    for (int years=1;years<=n;years++){
        ip*=(1+i);
    }
    p=static_cast<float>(ip/PERCENT);
    return p;
}


/*****************************************************************************/
/**********************************SAVE5**************************************/
/*****************************************************************************/
//Inputs
//p->Present Value $'s
//i->Interest Rate %
//n->Number of compounding periods
//Output
//fv->Future Value $'s
//Recursion
float save5(float p,float i,int n){
    if (n<=0) return p;//base condition
    return save5(p,i,n-1)*(1+i);
}


/*****************************************************************************/
/**********************************SAVE6**************************************/
/*****************************************************************************/
//Inputs
//p->Present Value $'s
//i->Interest Rate %
//n->Number of compounding periods
//Output
//fv->Future Value $'s
//Using the power function and defaulting the interest
float save6(float p,int n, float i){
    return p*pow((1+i),n);
}

/*****************************************************************************/
/**********************************SAVE3**************************************/
/*****************************************************************************/
//Inputs
//p->Present Value $'s
//i->Interest Rate %
//n->Number of compounding periods
//Output
//fv->Future Value $'s
//using the for loop function static Variable
float save7(float p,float i,int n){
    static int nCalls=0;
    for (int years=1;years<=n;years++){
        p*=(1+i);
    }
    nCalls++;
    cout<<"This function contains a static counter= "<<nCalls<<endl;
    return p;
}