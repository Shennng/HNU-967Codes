#include <stdio.h>　　　　 //定义输入／输出函数
#define N 50


int main(){
	int i,j,n,a[N][N];
	scanf("%d",&n);
	for(i=0;i<n;++i){
		a[i][0]=1; a[i][i]=1;
		for(j=1;j<i;++j)
			a[i][j]=a[i-1][j-1]+a[i-1][j];
	}
	for(i=0;i<n;++i){
		printf("\n");
		for(j=0;j<=i;++j)
			printf("%d ",a[i][j]);
    }
	return 0;
}

