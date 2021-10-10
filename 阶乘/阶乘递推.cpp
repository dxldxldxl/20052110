#include <iostream> 
using namespace std;
int a = 1;
int jc(int n){ 
if (n < 1){
	return a;
}
for (int i = 1;i <= n; i++){ 
	a = a * i;
} 
return a;
}

int main (){

int n;
cout <<"请输入阶乘数:";
cin>>n; 
cout<<jc(n);
}
//时间复杂度 为 O(n) 
