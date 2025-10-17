// Problem: 11332 - Summing Digits
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=25&page=show_problem&problem=2307
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
using namespace std;

int main(){
	int i,sum=0,tsum=0;
	string n;
	while(cin>>n){
		if(n=="0"){
			return 0;
		}
		for(i=0;i<n.size();i++){
			sum+=int(n[i]-'0');
		}
		while(sum>=10){
			tsum=sum;
			sum=0;
			while(tsum>=1){
				sum+=tsum%10;
				tsum/=10;
			}
		}
		cout<<sum<<endl;
		sum=0;
		tsum=0;
	}
	return 0;
}
