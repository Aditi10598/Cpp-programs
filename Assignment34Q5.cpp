//write a program which accept one number from user and toggle the contents of first and last nibble of that numberbit of that number .Return modified number

#include<iostream>

using namespace std;

int Togglebit(int iNo)
{
    int iMask=0xf000000f;
    int iResult=0;
   
    iResult=iNo^iMask;
    return iResult;
}
int main()
{
   int iValue=0;
   int iRet=0;

   cout<<"enter number:\n";
   cin>>iValue;


   iRet=Togglebit(iValue);

   cout<<"Number after modidified:"<<iRet<<"\n";

   return 0;  
}