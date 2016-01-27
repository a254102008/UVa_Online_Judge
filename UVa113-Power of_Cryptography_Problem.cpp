/*******************************************************/
/* UVa 113 - Power of Cryptography Problem             */
/* Author: Ching-Yang-Hsieh                            */
/* Version: 2015/12/25                                 */
/*******************************************************/
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
    double n,p;
    while(~scanf( "%lf%lf", &n, &p ))
        printf( "%.0lf\n", pow( p, 1.0/n ) );
    return 0;
}
