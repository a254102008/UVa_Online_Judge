/*******************************************************/
/* UVa11461 - Square Numbers                           */
/* Author: Ching-Yang-Hsieh                            */
/* Version: 2016/01/06                                 */
/*******************************************************/
#include <iostream>
#include <cstdio>
using namespace std;

int DP[100001]={0};
void Fill_DP(){
	int j = 1,t;
	for(int i = 1; (t = i * i) < 100001 ; ++i){
		while(j<t){
			DP[j] = DP[j-1];
			++j;
		}
		++j;
		DP[t] = DP[t-1] + 1;
	}
}
int main() {
	int a,b;
	Fill_DP();
	while(~scanf("%d%d",&a,&b) && (a|b) )
		printf("%d\n",DP[b]-DP[a-1]);
	return 0;
}
