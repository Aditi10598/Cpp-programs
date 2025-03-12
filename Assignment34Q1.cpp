//write a program which accept one number and position check whether first and last bit is ON or OFF means 1 and 32 bit
#include<iostream>

using namespace std;

bool CheckBit(int iNo,int iPos)
{
    int iMask=0x01;
    int iResult=0;

    iMask=iMask<<(iPos-1);
    iResult=iNo& iMask;

    if(iResult==iMask)
    {
        return true;
    }
    else
    {
       return false;
    }

}
int main()
{
   int iValue=0,iPosition=0;
   bool bRet=false;

   cout<<"enter number:\n";
   cin>>iValue;

   cout<<"enter position:\n";
   cin>>iPosition;
   

   bRet=CheckBit(iValue,iPosition);

    if(bRet==true)
    {
        cout<<"  Bit is ON\n";
    }
    else
    {
          cout<<" Bit is OFF\n";
    }

   return 0;  
}