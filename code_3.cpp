#include <iostream>
using namespace std;
int main()
{
int a,b;
cout<<"a = ";
cin>>a;
cout<<"b = ";
cin>>b;
for(int i=a;i<=b;i++)
{
for(int dil=2;dil<=i;dil++)
{
if(i%dil==0)
{
break;    
}
if(dil==i-1){
cout<<i<<endl;
}
}
}
return 0;
}