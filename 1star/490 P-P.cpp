// Problem: 490 - Rotating Sentences
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=431
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
using namespace std;

#define endl "\n"

string str[101];

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int l=0,maxl=0;
	while(!cin.eof()){
		getline(cin,str[l]);
		if(maxl<str[l].size()){
			maxl=str[l].size();
		}
		l++;
	}
	for(int i=0;i<maxl;i++){
		for(int j=l-1;j>=0;j--){
			if(i>str[j].size()-1){
				cout<<" ";
			}else{
				cout<<str[j][i];
			}
		}
		cout<<endl;
	}
	return 0;
}
