/*******************************************************/
/* UVa 12149 - Feynman                                 */
/* Author: Ching-Yang-Hsieh                            */
/* Version: 2015/01/29                                 */
/*******************************************************/
#include <iostream>
#include <cstdio>
using namespace std;
unsigned int DP[101];
int main() {
	int n;
	DP[1]=1;
	for(n=2;n<101;++n){
		DP[n]=DP[n-1] + n*n;
	}
	while(~scanf("%d",&n) && n){
		printf("%u\n",DP[n]);
	}
	return 0;
}
