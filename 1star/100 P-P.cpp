// Problem: 100 - The 3n + 1 problem
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=3&page=show_problem&problem=36
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> m;

int main(){
	int i,t=0,a,b,max;
	long long int n;
	while(cin>>a>>b){
		cout<<a<<" "<<b<<" ";
		if(a>b){
			swap(a,b);
		}
		for(i=a;i<=b;i++){
			t=0;
			n=i;
			while(n!=1){
				if(n%2==1){
					n=n*3+1;
					t+=1;
				}else{
					n/=2;
					t+=1;
				}
			}
			m.push_back(t+1);
		}
		max=*max_element(m.begin(),m.end());
		cout<<max<<endl;
		m.clear();
	}
	
	return 0;
}
