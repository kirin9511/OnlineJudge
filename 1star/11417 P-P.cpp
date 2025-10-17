// Problem: 11417 - GCD
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2412
// Memory Limit: 32 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
using namespace std;

int gcd(int a,int b){
	if(a%b==0){
		return b;
	}else{
		return gcd(b,a%b);
	}
}

int main(){
	int n,G;
	while(cin>>n){
		G=0;
		if(n==0){
			break;
		}
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				G+=gcd(i,j);
			}
		}
		cout<<G<<endl;
	}
	return 0;
}

