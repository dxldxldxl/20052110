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
	cout<<"������̨������"<<endl;
	cin>>n; 
	cout<<func(n)<<endl;
}
//ʱ�临�Ӷȵ�n=1,2ʱ�����Ӷ�ΪO��1��������n>2ʱ��ʱ�临�Ӷ�ΪO��n��
