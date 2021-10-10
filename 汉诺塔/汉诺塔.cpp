#include <iostream> 
using namespace std;
int i = 0;
void move(int n,char N,char M)
{ 
cout <<"第"<<++i<<"次移动:把"<<n<<"号圆盘从"<<N<<"移动到"<<M<<endl;
}
void hannt (int n,char a,char b,char c){ 
	if (n == 1)
	{ 
		move(1,a,c);
	}
	else
	{
	hannt(n-1,a,c,b); 
	move(n,a,c);	
	hannt(n-1,b,a,c);
	}
}
int main ()
{
char a ='a';
char b = 'b';
char c ='c';
int n = 0;
cout<<"请输入圆盘数:";
cin>>n; 
hannt(n,a,b,c);
cout<<"\n"<<"完成"<<endl; 
}
