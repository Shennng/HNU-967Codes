#include <stdio.h>　　　　 //定义输入／输出函数
#include <string.h>　　　　//字符串处理
#define N 10

struct book{
	char *name;
	double price;
	char *author;
	char *press;
};
int main(){
	struct book a[N],t; int i,j,n;
	t=(struct book)malloc(sizeof(struct book));
	scanf("%d".&n);
	for(i=0;i<n;++i){
		a[i]=(struct book)malloc(sizeof(struct book));
		scanf("%s %f %s %s",&a[i].name,&a[i].price,&a[i].author,&a[i].press);
    }
    for(j=0;j<n-1;++j)
		for(i=0;i<n-1-j;++i)
			if(strcmp(a[i].name,a[i+1].name)) {
				t=a[i]; a[i]=a[i+1]; a[i+1]=t;
			}
	for(i=0;i<n;++i){
		printf("%s %f %s %s",a[i].name,a[i].price,a[i].author,a[i].press);
    }
	return 0;
}

