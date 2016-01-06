/*******************************************************/
/* UVa 110110 - Light, more light Problem              */
/* Author: Ching-Yang-Hsieh                            */
/* Version: 2015/12/21                                 */
/*******************************************************/
#include <iostream>
#include <cmath>

#define ERROR 1e-8
using namespace std;

int main()
{
    double n;
    while(cin>>n && n!=0.0){
        unsigned int sqrt_num = (unsigned int)(sqrt(n)+ERROR);
        if((double)(sqrt_num * sqrt_num) == n){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}
