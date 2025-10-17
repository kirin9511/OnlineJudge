// Problem: 10226 - Hardwood Species
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1167
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> tree;

int main(){
	int n,i,to,t;
	string tr;
	cout<<fixed<<setprecision(4);
	cin>>n;
	getline(cin,tr);
	getline(cin,tr);
	for(int ni=1;ni<=n;ni++){
		to=0;
		while(!cin.eof()){
			getline(cin,tr);
			if(tr==""){
				break;
			}
			to+=1;
			tree.push_back(tr);
		}
		sort(tree.begin(),tree.end());
		t=1;
		for(i=0;i<tree.size();i++){
			if(tree[i]==tree[i+1]){
				t+=1;
			}else{
				cout<<tree[i]<<" "<<double(t)*100/double(to)<<endl;
				t=1;
			}
		}
		cout<<endl;
		tree.clear();
	}
	return 0;
}

