// Problem: 11063 - B2-Sequence
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2004
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define endl "\n"

int num[105];
vector<int> sum;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int l,c=1;
	bool f=0;
	while(cin>>l){
		f=0;
		for(int i=0;i<l;i++){
			cin>>num[i];
			if(i==0){
				if(num[i]<1){
					f=1;
				}
			}else{
				if(num[i]<=num[i-1]){
					f=1;
				}
			}
		}
		for(int i=0;i<l-1;i++){
			for(int j=i;j<l;j++){
				sum.push_back(num[i]+num[j]);
			}
		}
		sort(sum.begin(),sum.end());
		for(int i=1;i<sum.size();i++){
			if(sum[i]==sum[i-1]){
				f=1;
				break;
			}
		}
		if(f==1){
			cout<<"Case #"<<c<<": It is not a B2-Sequence."<<endl<<endl;
		}else{
			cout<<"Case #"<<c<<": It is a B2-Sequence."<<endl<<endl;
		}
		c++;
		sum.clear();
	}
	return 0;
}
