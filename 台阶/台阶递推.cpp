#include <iostream> 
using namespace std;
int func(int n)
{int a=1;
int b=2;
int m;
int i;
if(n==1){return 1;}
if(n==2){return 2;}
for(i=3;i<=n;i++){

m=a+b;
a=b;
b=m;}

return m;
}
int main(){
	int n;
	cout<<"请输入台阶数："<<endl;
	cin>>n; 
	cout<<func(n)<<endl;
}
//时间复杂度当n=1,2时，复杂度为O（1），当你n>2时，时间复杂度为O（n）
