// Problem: 10101 - Bangla Numbers
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1042
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

vector<string> str;

int main(){
	int ni=1,t,f;
	bool fl=1;
	string n,x;
	while(cin>>n){
		t=0;
		f=0;
		x.clear();
		if(fl==1){
			fl=0;
		}else{
			cout<<endl;
		}
		for(int i=n.size()-1;i>=0;i--){
			x=n[i]+x;
			t+=1;
			if(f%4==1){
				if(t==1){
					str.push_back(x);
					x.clear();
					t=0;
					f+=1;
				}
			}else{
				if(t==2){
					str.push_back(x);
					x.clear();
					t=0;
					f+=1;
				}else{
					if(i==0){
						str.push_back(x);
						f+=1;
					}
				}
			}
		}
		if(ni>999){
			cout<<ni<<". ";
		}else{
			if(ni>99){
				cout<<" "<<ni<<". ";
			}else{
				if(ni>9){
					cout<<"  "<<ni<<". ";
				}else{
					cout<<"   "<<ni<<". ";
				}
			}
		}
		if(n=="0"){
			cout<<"0"<<endl;
			str.clear();
			ni+=1;
			continue;
		}
		for(int i=str.size()-1;i>=0;i--){
			if(stoi(str[i])==0){
				if(f%4==1&&i!=0){
					if(stoi(str[0])==0&&i==1){
						cout<<"kuti";
					}else{
						cout<<"kuti ";
					}
					f-=1;
					continue;
				}else{
					f-=1;
					continue;
				}
				
			}else{
				if(i==0){
					cout<<stoi(str[i]);
				}else{
					cout<<stoi(str[i])<<" ";
				}
			}
			if(f%4==0&&i!=0){
				if(stoi(str[0])==0&&i==1){
					cout<<"lakh";
				}else{
					cout<<"lakh ";
				}
			}
			if(f%4==1&&i!=0){
				if(stoi(str[0])==0&&i==1){
					cout<<"kuti";
				}else{
					cout<<"kuti ";
				}
			}
			if(f%4==2&&i!=0){
				if(stoi(str[0])==0&&i==1){
					cout<<"shata";
				}else{
					cout<<"shata ";
				}
			}
			if(f%4==3&&i!=0){
				if(stoi(str[0])==0&&i==1){
					cout<<"hajar";
				}else{
					cout<<"hajar ";
				}
			}
			f-=1;
		}
		str.clear();
		ni+=1;
	}
	return 0;
}
