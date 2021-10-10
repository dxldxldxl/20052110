#include <iostream> 
using namespace std;
int fibonacciSeries(int n){ 
if (n <1)
{ 
	return 0;
}
if (n == 1 || n == 2)
{ 
	return 1;
}
return fibonacciSeries(n-1) + fibonacciSeries(n-2);
}

int main ()
{
int n;
cout <<"请输入一个大于1的数:"; 
cin>>n;
cout<<fibonacciSeries(n);
return 0;
}
