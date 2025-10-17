// Problem: 10062 - Tell me the frequencies!
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1003
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
using namespace std;

int chr[129];

int main(){
	bool fl=1;
	string line;
	while(getline(cin,line)){
		if(fl==1){
			fl=0;
		}else{
			cout<<endl;
		}
		for(int i=32;i<=126;i++){
			chr[i]=0;
		}
		for(int i=0;i<line.size();i++){
			if(int(line[i])>=32&&int(line[i])<=126){
				chr[int(line[i])]+=1;
			}
		}
		for(int i=1;i<=1000;i++){
			for(int j=126;j>=32;j--){
				if(chr[j]==i){
					cout<<j<<" "<<i<<endl;
				}
			}
		}
	}
	return 0;
}
