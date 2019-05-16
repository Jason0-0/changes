#include<cstdio> 
#include "Դ.c"
#define maxn 10001 
long long dp[maxn];
using namespace std;
int main(void) 
{	
	char s;
	printf("please select:");
	s = getchar();
	if (s == '1')
	{
		change();
	}
	int i,j,num[] = {5, 10, 20, 50, 100}; 
	for(i = 0; i < maxn; ++i)
		dp[i] = 1; 
	for(i = 0; i < 5; ++i)
		for(j = num[i]; j < maxn; ++j)
			dp[j] += dp[j - num[i]];
	printf("%lld", dp[maxn - 1]);
	return 0;
}


