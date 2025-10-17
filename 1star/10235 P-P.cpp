// Problem: 10235 - Simply Emirp
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1176
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
#include <cmath>
using namespace std;

int is_prime(int n){
	if(n==1){
		return 0;
	}
	if(n==2){
		return 1;
	}
	int f=1;
	for(int i=2;i<=sqrt(n)+1;i++){
		if(n%i==0){
			f=0;
			break;
		}
	}
	if(f==1){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	int n,rn,x;
	while(cin>>n){
		x=n;
		rn=0;
		while(x>=1){
			rn=rn*10+x%10;
			x/=10;
		}
		if(is_prime(n)==1){
			if(is_prime(rn)==1&&n!=rn){
				cout<<n<<" is emirp."<<endl;
			}else{
				cout<<n<<" is prime."<<endl;
			}
		}else{
			cout<<n<<" is not prime."<<endl;
		}
	}
	return 0;
}

