#include<iostream>
//write a program which accept one number from user and toggle 7th and 10thbit of that number .Return modified number
using namespace std;
int ToggleBit(int iNo,int ipos1,int ipos2 )
{
    int iMask=0x240;
    int iResult=0;
   
    iResult=iNo ^ iMask;
    return iResult;
}
int main()
{
    int iValue=0,ilocation1=0,ilocation2=0;
    int iRet=0;

    cout<<"enter the number\n";
    cin>>iValue;

    cout<<"enter first location\n";
    cin>>ilocation1;

    cout<<"enter second location\n";
    cin>>ilocation2;

    iRet=ToggleBit(iValue,ilocation1,ilocation2);

    cout<<"Number after toggle:"<<iRet<<"\n";
    
}