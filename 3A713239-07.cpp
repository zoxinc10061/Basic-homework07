#include<stdio.h>
#include<stdlib.h>
main()
{printf("1+...+n的總和\n\n");
int num;
printf("請輸入數字=>");
scanf("%d",&num);
printf("1+...+");printf("%d",num);printf("=");printf("%d",(1+num)*num/2);
system("pause");
return 0;
	
}

