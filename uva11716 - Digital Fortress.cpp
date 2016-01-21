/*******************************************************/
/* UVa 11716 Digital Fortress                          */
/* Author: Ching-Yang-Hsieh                            */
/* Version: 2016/01/06                                 */
/*******************************************************/

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
char str_square[101][101];
unsigned int Square(unsigned int i){
	unsigned int j;
	for( j = 0 ;j * j < i ; ++j);
	return j;
}
int main() {
	unsigned int n,str_sqr;
	string str;
	char ch;
	scanf("%d",&n);
	scanf("%c",&ch);
	while(n--){
		getline(cin,str);
		str_sqr = Square(str.length());
		if( (str_sqr*str_sqr) == str.length() ){
			unsigned int i,j,str_p;
			for(str_p=i=0;i<str_sqr;++i)
				for(j=0;j<str_sqr;++j,++str_p)
					str_square[i][j]=str[ str_p ];
			for(j=0;j<str_sqr;++j)
				for(i=0;i<str_sqr;++i)
					cout<<str_square[i][j];
			printf("\n");
		}else{
			printf("INVALID\n");
		}
	}
	return 0;
}
