//write a program which accept one numberand position from user and toggle that bit of that number .Return modified number

#include<iostream>

using namespace std;

int Togglebit(int iNo,int iPose)
{
    int iMask=0x01;
    int iResult=0;
 
    iMask=iMask<<(iPose-1);
   
    iResult=iNo ^iMask;
    return iResult;
}
int main()
{
   int iValue=0,ilocation=0;
   int iRet=0;

   cout<<"enter number:\n";
   cin>>iValue;

   cout<<"enter the position";
   cin>>ilocation;

   iRet=Togglebit(iValue,ilocation);

   cout<<"Number after modidified:"<<iRet<<"\n";

   return 0;  
}