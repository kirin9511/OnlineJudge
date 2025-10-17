// Problem: 10420 - List of Conquests
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=16&page=show_problem&problem=1361
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> country;

int main(){
	int n,t=1;
	string ct,name;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>ct;
		getline(cin,name);
		country.push_back(ct);
	}
	sort(country.begin(),country.end());
	for(int i=0;i<country.size();i++){
		if(country[i]==country[i+1]){
			t+=1;
		}else{
			cout<<country[i]<<" "<<t<<endl;
			t=1;
		}
	}
	return 0;
}
