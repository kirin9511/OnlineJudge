// Problem: 10093 - An Easy Problem!
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1034
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
#include <vector>
using namespace std;

vector<int> n;

int main(){
	int i,j,min=2,sum=0;
	string str;
	while(cin>>str){
		for(i=0;i<str.size();i++){
			if(str[i]>='0'&&str[i]<='9'){
				n.push_back(int(str[i])-'0');
				sum+=int(str[i])-'0';
			}
			if(str[i]>='A'&&str[i]<='Z'){
				n.push_back(int(str[i])-'A'+10);
				sum+=int(str[i])-'A'+10;
			}
			if(str[i]>='a'&&str[i]<='z'){
				n.push_back(int(str[i])-'a'+36);
				sum+=int(str[i])-'a'+36;
			}
		}
		for(i=0;i<n.size();i++){
			if(n[i]>=min){
				min=n[i]+1;
			}
		}
		for(i=min;i<=62;i++){
			if(sum%(i-1)==0){
				cout<<i<<endl;
				break;
			}
		}
		if(i==63){
			cout<<"such number is impossible!"<<endl;
		}
		n.clear();
		min=2;
		sum=0;
	}
	return 0;
}
