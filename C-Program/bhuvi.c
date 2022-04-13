#include<stdio.h>
int main()
int a, b, c,big;
printf("\n enter the three numbers:");
scanf("%d%d%d",&a,&b,&c);
big=(a>b&&a>c?a:b>c?b:c);
printf("the biggest number is %d",big);
return 0;
}

