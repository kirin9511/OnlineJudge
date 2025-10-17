// Problem: 10008 - What's Cryptanalysis?
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=949
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
using namespace std;

int alp[27];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,i=1,j=0,max=0;
	string l;
	cin>>n;
	for(i=1;i<=n+1;i++){
		getline(cin,l);
		for(j=0;j<l.size();j++){
			if(int(l[j])>=65&&int(l[j])<=90){
				alp[int(l[j])-64]+=1;
			}
			if(int(l[j])>=97&&int(l[j])<=122){
				alp[int(l[j])-96]+=1;
			}
		}
		
	}
	for(i=1;i<=26;i++){
		if(alp[i]>max){
			max=alp[i];
		}
	}
	for(i=max;i>=1;i--){
		for(j=1;j<=26;j++){
			if(alp[j]==i){
				cout<<char(j+64)<<" "<<alp[j]<<endl;
			}
		}
	}
	return 0;
}
