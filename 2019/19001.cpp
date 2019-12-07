#include <stdio.h>　　　　 //定义输入／输出函数


int main(){
    int i,n;
    double p=1,q=2,s=0,t;
    scanf("%d",&n);
    for(i=1;i<=n;++i){
    	s+=q/p;
//    	printf("%.0f/%.0f ",q,p);
    	t=q;
    	q+=p;
    	p=t;
	}
	printf("%.4f\n", s);
	return 0;
}

