//write a program which check 15 bit is ON or OFF
#include<iostream>

using namespace std;

bool CheckBit(int iNo)
{
    int iMask=0x20010;
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
        cout<<"5th and 18th Bit is ON\n";
    }
    else
    {
          cout<<" 5th and 18th Bit is OFF\n";
    }

   return 0;  
}