// Problem: 11321 - Sort! Sort!! and Sort!!!
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2296
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> mod[10000],zmod[10000];

int main(){
	int n,m,i,j,num;
	while(cin>>n>>m){
		if(n==0&&m==0){
			break;
		}
		cout<<n<<" "<<m<<endl;
		for(i=1;i<=n;i++){
			cin>>num;
			if(num<0){
				zmod[-(num%m)].push_back(num);
			}else{
				mod[num%m].push_back(num);
			}
		}
		for(i=0;i<10000;i++){
			sort(mod[i].begin(),mod[i].end());
			sort(zmod[i].begin(),zmod[i].end());
			for(j=0;j<mod[i].size();j++){
				if(mod[i][j]%2==1){
					mod[i].insert(mod[i].begin(),mod[i][j]);
					mod[i].erase(mod[i].begin()+j+1);
				}
			}
			for(j=0;j<zmod[i].size();j++){
				if(zmod[i][j]%2==-1){
					zmod[i].insert(zmod[i].begin(),zmod[i][j]);
					zmod[i].erase(zmod[i].begin()+j+1);
				}
			}
		}
		for(i=9999;i>=0;i--){
			for(j=0;j<zmod[i].size();j++){
				cout<<zmod[i][j]<<endl;
			}
			zmod[i].clear();
		}
		for(i=0;i<10000;i++){
			for(j=0;j<mod[i].size();j++){
				cout<<mod[i][j]<<endl;
			}
			mod[i].clear();
		}
	}
	cout<<"0 0"<<endl;
	return 0;
}
