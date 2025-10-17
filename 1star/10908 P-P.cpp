// Problem: 10908 - Largest Square
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1849
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
using namespace std;

char rec[101][101];

int main(){
	int n,ni,hig,len,Q,i,j,y,x,yi,xi,max,flag=1;
	cin>>n;
	for(ni=1;ni<=n;ni++){
		cin>>hig>>len>>Q;
		cout<<hig<<" "<<len<<" "<<Q<<endl;
		for(i=1;i<=hig;i++){
			for(j=1;j<=len;j++){
				cin>>rec[i-1][j-1];
			}
		}
		for(i=1;i<=Q;i++){
			cin>>y>>x;
			max=1;
			while(flag==1){
				if(y-max<0||y+max>=hig){
					flag=0;
					break;
				}
				if(x-max<0||x+max>=len){
					flag=0;
					break;
				}
				for(yi=y-max;yi<=y+max;yi++){
					for(xi=x-max;xi<=x+max;xi++){
						if(rec[yi][xi]!=rec[y][x]){
							flag=0;
							break;
						}
					}
					if(flag==0){
						break;
					}
				}
				if(flag==1){
					max+=1;
				}
			}
			cout<<max*2-1<<endl;
			flag=1;
		}
	}
	return 0;
}
