#include <stdio.h>　　　　 //定义输入／输出函数


int main(){
	int i=11,j,m,n,s=0,temp,reverse;
	scanf("%d",&n);
	for(;i<=n;++i){
		m=i/2;
		for(j=2;j<=m;++j)
			if(i%j==0) break;
		if(j>m){
			temp=i; reverse=0;
			while(temp){
				reverse*=10;
				reverse+=(temp%10);
				temp/=10;
			}
			if(reverse==i)
			    ++s,printf("%d ",i);
		}
//		for(j=2;j<i;++j)
//			if(i%j==0) break;
//		if(j>=i){
//			temp=i; reverse=0;
//			while(temp){
//				reverse*=10;
//				reverse+=(temp%10);
//				temp/=10;
//			}
//			if(reverse==i)
//		     	++s,printf("%d ",i);
//		}
	}
	printf("\n%d\n",s);
	return 0;
}

