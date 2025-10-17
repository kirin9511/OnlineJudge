// Problem: 10252 - Common Permutation
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1193#google_vignette
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int i,j;
	string a,b,str;
	while(getline(cin,a)&&getline(cin,b)){
		if(a==""||b==""){
			cout<<endl;
			continue;
		}
		if(a.size()<b.size()){
			swap(a,b);
		}
		for(i=0;i<b.size();i++){
			for(j=0;j<a.size();j++){
				if(b[i]==a[j]){
					str+=b[i];
					a.erase(a.begin()+j);
					break;
				}
			}
		}
		sort(str.begin(),str.end());
		cout<<str<<endl;
		str.clear();
	}
	return 0;
}
