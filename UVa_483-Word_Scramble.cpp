#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	char str[10000];
	char temp[100];
	char ans[10000];
	int k,t;
	while(gets(str)){
		k=t=0;
		for(int i=0;str[i]!='\0';++i){
			if(str[i]!=' '){
				temp[k++]=str[i];	
			}else{
				if(t)
					ans[t++]=' ';
				for(int j=k-1;j>=0;--j,++t)
					ans[t]=temp[j];
				k=0;
			}
		}
		if(t && k)
			ans[t++]=' ';
		for(int j=k-1;j>=0;--j,++t)
			ans[t]=temp[j];
		ans[t]='\0';
		printf("%s\n",ans);
		
	}
	return 0;
}
