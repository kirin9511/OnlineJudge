// Problem: 10050 - Hartals
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=991
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
#include <vector>
using namespace std;

vector<int> hz;

int main(){
	int i,j,k,f,pt,day,h,t=0;
	cin>>f;
	for(i=1;i<=f;i++){
		cin>>day>>pt;
		for(j=1;j<=day;j++){
			hz.push_back(0);
		}
		for(j=1;j<=pt;j++){
			cin>>h;
			for(k=0;k<day;k++){
				if((k+1)%h==0){
					hz[k]=1;
				}
			}
		}
		for(j=0;j<day;j++){
			if((j+1)%7!=6&&(j+1)%7!=0){
				if(hz[j]==1){
					t+=1;
				}
			}
		}
		cout<<t<<endl;
		pt=0;
		day=0;
		h=0;
		t=0;
		hz.clear();
	}
	return 0;
}
