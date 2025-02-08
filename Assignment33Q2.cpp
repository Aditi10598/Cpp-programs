//accept one number from user and off 7th and 10 th bit of that number
#include<iostream>

using namespace std;
int ToggleBit(int iNo,int ipos1,int ipos2 )
{
    int iMask=0xfffffdbf;
    int iResult=0;
   
    iResult=iMask & iNo;
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