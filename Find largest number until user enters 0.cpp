/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int b=0;
    int a;
    while(a=!0)
    {
       
        cin>>a;
        if(a==0)
        {
            cout<<"largest no is= "<<b;
        }
        else if (a>b)
        {
            b=a;
        }
        continue;
    }
    

    return 0;
}
