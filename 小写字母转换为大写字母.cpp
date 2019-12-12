#include <stdio.h>

int main(){
//	小写→大写
	char a,b;
	a=getchar();
	b=a-32;
	printf("%c转换后的字母为：%c,%d",a,b,b);
	return 0;
}

