/*******************************************************/
/* UVa11683 - Laser Sculpture                          */
/* Author: Ching-Yang-Hsieh                            */
/* Version: 2016/01/27                                 */
/*******************************************************/
#include <iostream>
using namespace std;

int main() {
	int a,c,temp,sum,pre;
	while(cin>>a>>c && (a|c)){
		sum = 0;
		cin>>temp;
		sum += a-temp;
		pre = temp;
		for(int i=1;i<c;++i){
			cin>>temp;
			if(pre>temp){
				sum+=pre-temp;
			}
			pre=temp;
		}
		cout<<sum<<endl;
	}
	return 0;
}
