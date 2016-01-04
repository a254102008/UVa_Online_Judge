/*******************************************************/
/* UVa 105 The Skyline Problem                         */
/* Author: Ching-Yang-Hsieh                            */
/* Version: 2015/12/21                                 */
/*******************************************************/
#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int i,L, H, R;
  int rightest = 0;
  int skyline[10005] = {0};

  while( scanf( "%d%d%d", &L, &H, &R ) != EOF ){
    for( i = L ; i < R ; ++i )
      if(H > skyline[i])
        skyline[i] = H;
    if( R > rightest ) rightest = R;
  }

  for( i = 1 ; i <= rightest ; ++i )
    if( skyline[i-1] != skyline[i] ){
      if( skyline[0] )
        printf( " " );
      skyline[0]=1;
      printf( "%d %d", i, skyline[i] );
    }

  printf( "\n" );

  return 0;
}
