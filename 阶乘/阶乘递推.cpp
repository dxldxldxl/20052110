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
cout <<"������׳���:";
cin>>n; 
cout<<jc(n);
}
//ʱ�临�Ӷ� Ϊ O(n) 
