#include <stdio.h>

int main(){
	int year,flag=0;
	scanf("%d",&year);
	if(year%4==0 && year%100!=0 || year%400==0) flag=1;
	if(flag) printf("%d 此年是闰年\n",year);
	else printf("%d 此年不是闰年\n",year);
	return 0;
}

