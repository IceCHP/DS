#include<stdio.h>
int main() {
	char n[100];	//定义一个数组，开空间方便大数输入
	int j;
    int i = 0;
	scanf("%s", n);	//字符串输入要用%s
	    
    /*数组声明之后开的空间如果没有被输入的数填满的话会默认为'\0',设置成这样就不会做无谓的循环啦*/
	for( ;n[i] != '\0'; i++) {
		j += (n[i]-'0');   //类型转换
	}
	printf("%d",j);
    /*这是我写的时候做的一个小测试，输出一下判断第一部分的计算有没有错，
	我直接copy题目里样例试的*/
	
	char pin[10][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	if(j > 99) {
		printf("%s ", pin[j/100]);
		printf("%s ", pin[j%100/10]);
		printf("%s", pin[j%100%10]);
	}else if(j > 9) {
		printf("%s ", pin[j/10]);
		printf("%s", pin[j%10]);
	}else{
		printf("%s", pin[j]);
	}
	return 0;
}
