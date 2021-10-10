#include <iostream>
using namespace std;
int a = 1;
int jc(int n)
{ 
if (n < 1)
{
	return a;
}
a = a * n; 
return jc(n-1);
}
int main ()
{
int n;
cout <<"ÇëÊäÈë½×³ËÊý:";
cin>>n; 
cout<<jc(n);
}
