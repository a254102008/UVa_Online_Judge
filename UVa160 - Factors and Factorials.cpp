/*******************************************************/
/* UVa160 - Factors and Factorials                     */
/* Author: Ching-Yang-Hsieh                            */
/* Version: 2016/01/29                                 */
/*******************************************************/
#include <iostream>
#include <cstdio>
using namespace std;
int prime[25] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
int ans[101][25]={0};
int ubound[101] = {0};
int main() {
	int n,temp,i;
	for(n=2;n<101;++n){
		for(i = 0; i < ubound[n-1];++i){
			ans[n][i]=ans[n-1][i];
		}
		temp = n;
		for(i=0;i < 25 && temp>1;++i){
			while(temp%prime[i]==0){
				temp/=prime[i];
				ans[n][i]++;
			}
		}
		ubound[n] = ubound[n-1];
		if(i>ubound[n])
			ubound[n]=i;
	}

	while(~scanf("%d",&n) && n){
		printf("%3d! =",n);
		for(i = 0;i<ubound[n];++i){
			if(i == 15){
				printf("\n      ");
			}
			printf("%3d",ans[n][i]);
		}
		printf("\n");
	}
	return 0;
}
