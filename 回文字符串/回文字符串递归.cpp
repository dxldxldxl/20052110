#include <iostream> 
#include <string.h>
using namespace std;
int huiwen (char a[],int front,int ending) { 
	if (a[front] != a [ending])
	{ 
		return 0;
	}
	if (front == ending|| front == ending - 1)
	{  
		return 1;
	}
	if (a[front] == a [ending])
	{  
		return huiwen(a,front + 1,ending - 1);
	}
}
int main (){

int t;  
char a[100];
cout<<"ÇëÊäÈëÒ»¸ö×Ö·û´®:"<<endl;
cin>>a;
t = huiwen(a,0,strlen(a)-1); 
if (t == 1){
	cout <<a<<" is a palindrome";
}else {
	cout <<a<<" is not a palindrome";
}
}
