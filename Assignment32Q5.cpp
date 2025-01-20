//write a program which check whether first and last bit is ON or OFF means 1 and 32 bit
#include<iostream>

using namespace std;

bool CheckBit(int iNo)
{
    int iMask=0x80000001;
    int iResult=0;
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
   int iValue=0;
   bool bRet=false;

   cout<<"enter number:\n";
   cin>>iValue;

   bRet=CheckBit(iValue);

    if(bRet==true)
    {
        cout<<"first and last  Bit is ON\n";
    }
    else
    {
          cout<<"1st and last bit is OFF\n";
    }

   return 0;  
}