#include <iostream> 
#include <string.h>
using namespace std;
int huiwen (char a[],int front,int ending)
{ 
for (; front <= strlen(a)/2 ; front++){ 
	if (a[front] == a[ending])
	{ 
		ending--;
	}else{  
		return 0;
	}
	if (front == ending|| front == ending - 1)
	{ 
		return 1;
	}
	}
}
int main ()
{
int t; 
char a[100];
cout<<"������һ���ַ���:"<<endl;
cin>>a;
t = huiwen(a,0,strlen(a)-1); 
	if (t == 1)
	{
		cout <<a<<" is a palindrome";
	}else {
	cout <<a<<" is not a palindrome";
	}
}
//ʱ�临�Ӷ�Ϊ O��n��
