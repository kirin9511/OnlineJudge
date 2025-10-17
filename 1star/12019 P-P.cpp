// Problem: 12019 - Doom's Day Algorithm
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=242&page=show_problem&problem=3170
// Memory Limit: 32 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
using namespace std;

int date[1024],month[12]={0,31,59,90,120,151,181,212,243,273,304,334};

int main(){
	int i,n,d=0;
	cin>>n;
	for(i=1;i<=n*2;i++){
		cin>>date[i];
		if(i%2==0){
			d+=month[date[i-1]-1];
			d+=date[i]-1;
			if(d%7==1){
				cout<<"Sunday"<<endl;
			}
			if(d%7==2){
				cout<<"Monday"<<endl;
			}
			if(d%7==3){
				cout<<"Tuesday"<<endl;
			}
			if(d%7==4){
				cout<<"Wednesday"<<endl;
			}
			if(d%7==5){
				cout<<"Thursday"<<endl;
			}
			if(d%7==6){
				cout<<"Friday"<<endl;
			}
			if(d%7==0){
				cout<<"Saturday"<<endl;
			}
			d=0;
		}
	}
	return 0;
}
