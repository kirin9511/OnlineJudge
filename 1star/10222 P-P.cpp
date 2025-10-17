// Problem: 10222 - Decode the Mad man
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=14&page=show_problem&problem=1163
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
using namespace std;

int main(){
	int i;
	string n;
	while(getline(cin,n)){
		for(i=0;i<n.size();i++){
			if(n[i]>='A'&&n[i]<='Z'){
				n[i]=char(int(n[i])+'a'-'A');
			}
			switch(n[i]){
				case 'e':
					cout<<"q";
					break;
				case 'd':
					cout<<"a";
					break;
				case 'c':
					cout<<"z";
					break;
				case 'r':
					cout<<"w";
					break;
				case 'f':
					cout<<"s";
					break;
				case 'v':
					cout<<"x";
					break;
				case 't':
					cout<<"e";
					break;
				case 'g':
					cout<<"d";
					break;
				case 'b':
					cout<<"c";
					break;
				case 'y':
					cout<<"r";
					break;
				case 'h':
					cout<<"f";
					break;
				case 'n':
					cout<<"v";
					break;
				case 'u':
					cout<<"t";
					break;
				case 'j':
					cout<<"g";
					break;
				case 'm':
					cout<<"b";
					break;
				case 'i':
					cout<<"y";
					break;
				case 'k':
					cout<<"h";
					break;
				case ',':
					cout<<"n";
					break;
				case 'o':
					cout<<"u";
					break;
				case 'l':
					cout<<"j";
					break;
				case '.':
					cout<<"m";
					break;
				case 'p':
					cout<<"i";
					break;
				case ';':
					cout<<"k";
					break;
				case '[':
					cout<<"o";
					break;
				case ']':
					cout<<"p";
					break;
				case '\'':
					cout<<"l";
					break;
				case ' ':
					cout<<" ";
					break;
				case '/':
					cout<<",";
					break;
				case '3':
					cout<<"1";
					break;
				case '4':
					cout<<"2";
					break;
				case '5':
					cout<<"3";
					break;
				case '6':
					cout<<"4";
					break;
				case '7':
					cout<<"5";
					break;
				case '8':
					cout<<"6";
					break;
				case '9':
					cout<<"7";
					break;
				case '0':
					cout<<"8";
					break;
				case '-':
					cout<<"9";
					break;
				case '=':
					cout<<"0";
					break;
				case '2':
					cout<<"`";
					break;
				case '\\':
					cout<<"[";
					break;
			}
		}
		cout<<endl;
	}
	return 0;
}