/*******************************************************/
/* UVa 10921 - Find the Telephone                      */
/* Author: Ching-Yang-Hsieh                            */
/* Version: 2015/12/21                                 */
/*******************************************************/
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	char str[31];
	int i;
	while(gets(str)){
		for(i=0;str[i]!='\0';++i){
			switch(str[i]){
				case 'A':case 'B':case 'C':
					str[i]='2';
					break;
				case 'D':case 'E':case 'F':
					str[i]='3';
					break;
				case 'G':case 'H':case 'I':
					str[i]='4';
					break;
				case 'J':case 'K':case 'L':
					str[i]='5';
					break;
				case 'M':case 'N':case 'O':
					str[i]='6';
					break;
				case 'P':case 'Q':case 'R':case 'S':
					str[i]='7';
					break;
				case 'T':case 'U':case 'V':
					str[i]='8';
					break;
				case 'X':case 'Y':case 'Z':case 'W':
					str[i]='9';
					break;
			}
		}
		printf("%s\n",str);
	}
	return 0;
}
