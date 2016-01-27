/*******************************************************/
/* UVa 10533 Digit Primes                              */
/* Author: Ching-Yang-Hsieh                            */
/* Version: 2015/12/29                                 */
/*******************************************************/
#include<iostream>
#include<cstdio>

#define MAX	1000001
#define Sqrt_MAX 1001

using namespace std;

int Prime[MAX]={0};
int DP[MAX]={0};
void Solution(void){
	int t;
	Prime[0] = Prime[1] = 1;
	for(int i=2;i<=Sqrt_MAX;i++){
		if(!Prime[i])
			for(int j=i;(t=(i*j))<=MAX;++j)
				Prime[t]=1;
	}
}
void Cram(void){
	int sum,temp;
	for(int i=2;i<MAX;++i){
		temp = i;
		sum = 0;
		while(temp){
			sum += temp % 10;
			temp /= 10;
		}
		DP[i]=DP[i-1];
		if(!Prime[i] && !Prime[sum]){
			DP[i]+=1;
		}
	}
}
int main(){
  int n,t1,t2;
  Solution();
  Cram();
  scanf("%d",&n);
  while(n--){
	  scanf("%d%d",&t1,&t2);
	  if(t1>t2)
		  swap(t1,t2);
	  printf("%d\n",DP[ t2 ]-DP[ t1-1 ]);

  }
  return 0;
}
