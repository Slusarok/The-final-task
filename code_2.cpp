#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int N;
int b=0;
cout<<"input N ";
cin>>N;
if(N>=1 && N<=100)
{
for(int i=1; i<=N; i++)
{
b+=i;
}
cout<<b<<endl;
}
return 0;
}