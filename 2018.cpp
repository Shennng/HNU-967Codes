#include <stdio.h>　　　　 //定义输入／输出函数
#include <math.h>


// 18年 题目1 数值计算pow幂函数
int main(){
	int i,n;
	float a,s;
	scanf("%d %f",&n,&a);
	for(i=1;i<=n;i++){
		s+=pow(a,i);
    }
    printf("%f\n",s);
	return 0;
}


// 【重要】18年 题目2 这一年的第几天
int main(){
	int year,month,date,leap,days=0;
	printf("请输入年份：");
	scanf("%d",&year);
	printf("请输入月份：");
	scanf("%d",&month);
	printf("请输入日：");
	scanf("%d",&date);
	leap=(year%4==0&&year%100!=0||year%400==0);
	switch(month){
		case 12: days+=30; case 11: days+=31;
		case 10: days+=30; case  9: days+=31;
		case  8: days+=31; case  7: days+=30;
		case  6: days+=31; case  5: days+=30;
		case  4: days+=31; case  3: days+=28+leap;
		case  2: days+=31; case  1: days+=date;break;
		default: printf("data error");break;
	}
	printf("%4d年%2d月%2d日是这一年的第%d天。\n", year,month,date,days);
	return 0;
}


//  18年 题目3 素数个数、输出所有素数
int isPrime(int x){
	int i;
	for(i=2;i<=x/2;i++)
		if(x%i==0) return 0;
	return 1;
}

int main(){
	int i,s=0;
	for(i=101;i<=200;i++)
		if(isPrime(i)){
			printf("%d ",i);
			s++;
		}
	printf("\n");
	printf("101-200之间的素数个数为%2d。\n",s);
	return 0;
}


// 18年 题目4 排序 尾插插入
#define N 10
void insert(int a[],int n,int x){
	int i,j,t;
	//BubbleSort
	for(j=1;j<n;j++)
	   for(i=0;i<n-j;i++)
		   if(a[i]>a[i+1]){
			   t=a[i]; a[i]=a[i+1]; a[i+1]=t;
		   }
	//插入x
	for(i=0;i<n;i++) if(x<=a[i]) break;
	for(j=n;j>i;j--) a[j]=a[j-1];
	a[i]=x;
}

int main(){
	int a[N],x,n,i;
	printf("请输入数组元素个数：");
	scanf("%d",&n);
	printf("请输入待插入元素x：");
	scanf("%d",&x);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	insert(a,n,x);
	for(i=0;i<=n;i++) printf("%d ",a[i]);
	return 0;
}


// 18年 题目5 最大值、最小值、平均值
int main(){
	int a[10],i,max,min;
	float average,sum;
	for(i=0;i<10;i++) scanf("%d",&a[i]);
	max=min=sum=a[0];
	for(i=1;i<10;i++){
		if(a[i]>max) max=a[i];
		if(a[i]<min) min=a[i];
		sum+=a[i];
	}
	average=sum/10;
	printf("最大值：%d, 最小值：%d, 平均值：%f\n",max,min,average);
}
