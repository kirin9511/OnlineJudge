// Problem: 118 - Mutant Flatworld Explorers
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=3&page=show_problem&problem=54
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
#include <vector>
using namespace std;

#define endl "\n"

int mapx,mapy,setx,sety,flag=0;
vector<int> warnx,warny;
char rot;

void rotact(char r){
	if(r=='R'){
		if(rot=='E'){
			rot='S';
			return;
		}
		if(rot=='W'){
			rot='N';
			return;
		}
		if(rot=='N'){
			rot='E';
			return;
		}
		if(rot=='S'){
			rot='W';
			return;
		}
	}
	if(r=='L'){
		if(rot=='S'){
			rot='E';
			return;
		}
		if(rot=='N'){
			rot='W';
			return;
		}
		if(rot=='E'){
			rot='N';
			return;
		}
		if(rot=='W'){
			rot='S';
			return;
		}
	}
	if(r=='F'){
		if(rot=='S'){
			mapy-=1;
		}
		if(rot=='N'){
			mapy+=1;
		}
		if(rot=='E'){
			mapx+=1;
		}
		if(rot=='W'){
			mapx-=1;
		}
		if(mapx>setx||mapx<0){
			flag=1;
		}
		if(mapy>sety||mapy<0){
			flag=1;
		}
	}
}

int main(){
	int fflag=1;
	string move;
	ios::sync_with_stdio(0), cin.tie(0);
	cin>>setx>>sety;
	while(cin>>mapx>>mapy>>rot>>move){
		for(auto i:move){
			flag=0;
			fflag=1;
			rotact(i);
			if(flag==1){
				if(rot=='S'){
					mapy+=1;
				}
				if(rot=='N'){
					mapy-=1;
				}
				if(rot=='E'){
					mapx-=1;
				}
				if(rot=='W'){
					mapx+=1;
				}
				for(int i=0;i<warnx.size();i++){
					if(mapx==warnx[i]&&mapy==warny[i]){
						fflag=0;
						break;
					}
				}
				if(fflag==1){
					warnx.push_back(mapx);
					warny.push_back(mapy);
					break;
				}
			}
		}
		cout<<mapx<<" "<<mapy<<" "<<rot;
		if(flag==1){
			cout<<" LOST"<<endl;
		}else{
			cout<<endl;
		}
	}
	return 0;
}
