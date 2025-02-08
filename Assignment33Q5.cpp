#include<iostream>
//write a program which accept one number from user and on first 4 bits.Return modified number
using namespace std;
int firstfourBit(int iNo )
{
    int iMask=0x0f;
    int iResult=0;
   
    iResult=iNo | iMask;
    return iResult;
}
int main()
{
    int iValue=0,ilocation1=0,ilocation2=0;
    int iRet=0;

    cout<<"enter the number\n";
    cin>>iValue;


    iRet=firstfourBit(iValue);

    cout<<"Number after modify:"<<iRet<<"\n";
    
}