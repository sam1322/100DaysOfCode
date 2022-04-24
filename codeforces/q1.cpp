#include<iostream>
using namespace std;
int main()
{
int i = -10;
do
{
if(i < 0)
cout<<"Negative Number"<<endl;
else if(i == 0)
cout<<"Zero"<<endl;
else
cout<<"Positive Number"<<endl;
++i;
} while (i<10);
return 0;
}