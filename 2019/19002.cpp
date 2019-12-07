#include <stdio.h>　　　　 //定义输入／输出函数


int main(){
	int i,n,s=0;
	scanf("%d",&n);
	for(i=1;i<n;++i)
		s+=(!(n%i))?i:0;
	if(s==n)
		printf("Yes");
	else
		printf("No");
	return 0;
}

