#include <stdio.h>

int main(){
//	最大公约数、最小公倍数
    int a,b,c,m,t;
	scanf("%d%d",&a,&b);
	if(a<b){
		t=a;
		a=b;
		b=t;
	}
	m=a*b;
	c=a%b;
	while(c!=0){
		a=b;
		b=c;
		c=a%b;
	}
	printf("最大公约数为：%d\n",b);
	printf("最小公倍数为：%d\n",m/b);
	return 0;
}

int main(){
//  最小公倍数
	int a,b,t,s,i=1;
	scanf("%d%d",&a,&b);
	if(a<b){
		t=a;a=b;b=t;
	}
	s=a*i;
	while(s%b!=0){
		i++;
		s=a*i;
	}
	printf("%d",s);
}

