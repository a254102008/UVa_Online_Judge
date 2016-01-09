/*******************************************************/
/* UVa 499 - What's The Frequency, Kenneth?            */
/* Author: Ching-Yang-Hsieh                            */
/* Version: 2016/01/09                                 */
/*******************************************************/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
string str;
int ascii[127];
int main() {
	int m;
	while(getline(cin,str)){
		m=0;
		memset(ascii,0,sizeof(int)*127);
		for(int i=0;i<str.length();++i){
			if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
				ascii[str[i]]++;
				if(ascii[str[i]]>m ){
					m=ascii[str[i]];
				}
			}
		}
		for(char i='A';i<='Z';++i){
			if(ascii[i]==m){
				printf("%c",i);
			}
		}
		for(char i='a';i<='z';++i){
			if(ascii[i]==m){
				printf("%c",i);
			}
		}
		printf(" %d\n",m);
	}
	return 0;
}
