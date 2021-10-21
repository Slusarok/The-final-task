#include <iostream>
#include <cmath>
using namespace std;
int main()
{

int n;
cout<<"input height ";
cin>>n;
for(int i = 1; i <= n; i++)
{
string b(i, '*');
cout<<b<<endl;
}
    return 0;
}