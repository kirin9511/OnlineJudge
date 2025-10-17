// Problem: 10812 - Beat the Spread!
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1753
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
using namespace std;

int main(){
	int n,s,d;
	cin>>n;
	for(int ni=1;ni<=n;ni++){
		cin>>s>>d;
		if(d>s){
			cout<<"impossible"<<endl;
			continue;
		}
		if(s%2!=d%2){
			cout<<"impossible"<<endl;
			continue;
		}
		cout<<(s+d)/2<<" "<<(s-d)/2<<endl;;
	}
	return 0;
}

