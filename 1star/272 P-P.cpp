// Problem: 272 - TEX Quotes
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=4&page=show_problem&problem=208
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
using namespace std;

#define endl "\n"

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int t=0;
	string str;
	while(getline(cin,str)){
		for(int i=0;i<str.size();i++){
			if(str[i]=='"'){
				if(t%2==0){
					cout<<"``";
				}else{
					cout<<"''";
				}
				t++;
			}else{
				cout<<str[i];
			}
		}
		cout<<endl;
	}
	return 0;
}
