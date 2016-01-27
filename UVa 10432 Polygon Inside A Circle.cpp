/*******************************************************/
/* UVa 10432 Polygon Inside A Circle                   */
/* Author: Ching-Yang-Hsieh                            */
/* Version: 2015/01/27                                 */
/*******************************************************/
#include <cmath>
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	double r,n;
	double area;
	while(~scanf("%lf %lf",&r,&n)){
		area=0.5*r*r*sin(2*M_PI/n)*n;
		printf("%.3lf\n",area);
	}
	return 0;
}
