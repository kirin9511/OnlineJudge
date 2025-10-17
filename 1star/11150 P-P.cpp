// Problem: 11150 - Cola
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2091
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
using namespace std;

int main(){
	int n,b;
	while(cin>>n){
		b=n;
		while(n>=3){
			b+=n/3;
			n=n/3+n%3;
		}
		if(n>=2){
			b+=1;
		}
		cout<<b<<endl;
	}
	return 0;
}
