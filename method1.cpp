#include <iostream>

namespace{
using namespace std;

int calculateCountUseTwoCoins(int n)
{
	if(n<=0)return 0;
	int temp(0);
	temp = 1 + n/2;
	return temp;
}


int calculateCountUseThreeCoins(int n)
{
	if(n<=0)return 0;
	int temp(0);
	if(n%5==0)temp = 1;
	for(int i=0;i<=n/5;i++){
		temp += calculateCountUseTwoCoins(n-i*5);
	}
	return temp;
}


int calculateCountUseFourCoins(int n)
{
    	int temp(0);
        if(n%10==0)temp = 1;
    	for(int i=0;i<=n/10;i++){
		temp += calculateCountUseThreeCoins(n-i*10);
    	}
    	return temp;
}




}


int main(int argc, char**argv)
{
 	
	for(int i=0;i<11;i++){
	cout<<i<<" : "<<calculateCountUseFourCoins(i)<<endl;
}
	
	return 0;
}
