#include <iostream>
using namespace std;
int main()
{
int a=0,b=1,s=0;
int i;
cout<<"enter the number of terms you want "<<endl;
int n;
cin>>n;
cout<<"the fibonacci series of "<<n<< " terms is "<<endl;
cout<<a<<endl<<b<<endl;
for(i=0;i<n-2;i++)
{
    s=a+b;
    cout<<s<<endl;
    a=b;
    b=s;
}
}
/* test n=3
i=0,s=1,a=0,b=1 o11
i=1 break */
