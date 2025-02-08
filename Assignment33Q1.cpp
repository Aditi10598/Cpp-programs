//write a program which accept one number from user and off 7th bit of that number if it is on.Return modified number

#include<iostream>

using namespace std;

int OFFbit(int iNo,int iPose)
{
    int iMask=0xffffffbf;
    int iResult=0;
 
    iResult=iNo & iMask;
    return iResult;
}
int main()
{
   int iValue=0,ilocation=0;
   int iRet=0;

   cout<<"enter number:\n";
   cin>>iValue;

   cout<<"enter the location";
   cin>>ilocation;

   iRet=OFFbit(iValue,ilocation);

   cout<<"Number after toggle:"<<iRet<<"\n";

   return 0;  
}