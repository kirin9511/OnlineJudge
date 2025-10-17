// Problem: 10189 - Minesweeper
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1130
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
using namespace std;

char rec[1024][1024];

int main(){
	int hei,len,ni=1,mine;
	bool fl=1;
	while(cin>>hei>>len){
		if(hei==0&&len==0){
			return 0;
		}
		if(fl==1){
			fl=0;
		}else{
			cout<<endl;
		}
		cout<<"Field #"<<ni<<":"<<endl;
		for(int i=1;i<=hei;i++){
			for(int j=1;j<=len;j++){
				cin>>rec[j][i];
			}
		}
		for(int i=1;i<=hei;i++){
			for(int j=1;j<=len;j++){
				if(rec[j][i]=='.'){
					mine=0;
					for(int x=j-1;x<=j+1;x++){
						for(int y=i-1;y<=i+1;y++){
							if(x<=0||x>len||y<=0||y>hei){
								continue;
							}
							if(rec[x][y]=='*'){
								mine+=1;
							}
						}
					}
					rec[j][i]=char(mine+'0');
				}
			}
		}
		for(int i=1;i<=hei;i++){
			for(int j=1;j<=len;j++){
				cout<<rec[j][i];
			}
			cout<<endl;
		}
		ni+=1;
	}
	return 0;
}
