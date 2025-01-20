//write a program which check 7th 15th 21st and 28th bit is ON or OFF
#include<iostream>

using namespace std;

bool CheckBit(int iNo)
{
    int iMask=0x8104040;
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
        cout<<"7th 15th 21st and 28th Bit is ON\n";
    }
    else
    {
          cout<<" 7th 15th 21st and 28th Bit is OFF\n";
    }

   return 0;  
}