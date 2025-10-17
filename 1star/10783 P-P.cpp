// Problem: 10783 - Odd Sum
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=19&page=show_problem&problem=1724
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
using namespace std;

int main(){
	int n,ni,a,b,i,s=0;
	cin>>n;
	for(ni=1;ni<=n;ni++){
		cin>>a>>b;
		if(a%2==0){
			i=a+1;
		}else{
			i=a;
		}
		for(i;i<=b;i+=2){
			s+=i;
		}
		cout<<"Case "<<ni<<": "<<s<<endl;
		s=0;
	}
	return 0;
}
