// Problem: 10268 - 498-bis
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=14&page=show_problem&problem=1209
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>
using namespace std;

vector<long long int> f;

int main(){
	int x,n=0,i,k;
	char t;
	string str;
	long long int sum=0;
	while(cin>>x){
		getchar();
		while(1){
			t=getchar();
			if(t>='0'&&t<='9'){
				str+=t;
			}
			if(t=='-'){
				str+=t;
			}
			if(t==' '){
				f.push_back(stoi(str));
				n++;
				str.clear();
			}
			if(t=='\n'||int(t)==-1){
				break;
			}
		}
		k=n-1;
		for(i=0;i<f.size();i++){
			f[i]*=k;
			k--;
		}
		k=n-2;
		for(i=0;i<f.size()-1;i++){
			sum+=f[i]*pow(x,k);
			k--;
		}
		cout<<sum<<endl;
		n=0;
		sum=0;
		f.clear();
	}
	return 0;
}
