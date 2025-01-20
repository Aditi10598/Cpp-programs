//write a program which check 7th 8th and 9th bit is ON or OFF
#include<iostream>

using namespace std;

bool CheckBit(int iNo)
{
    int iMask=0x1c0;
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
        cout<<"7th 8th and 9th Bit is ON\n";
    }
    else
    {
          cout<<"7th 8th and 9th Bit is OFF\n";
    }

   return 0;  
}