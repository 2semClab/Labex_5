#include<stdio.h>
int main(){
int a,b,c;
in ch;
printf("Enter two numbers :");
scanf("%d%d",&a,&b);
printf("Enter the operator :");
scanf("%s",&ch);
//printf("%d%c",a,ch);
switch(ch){
	case '+':
	       c=a+b;
		printf("Result: %d",c);
		break;
	case '-':
		printf("Result: %d",a-b);
		break;
	case('*'):
		printf("Result: %d",a*b);
		break;
	case('/'):
		printf("Result: %d",a/b);
		break;
	case('%'):
		printf("Result: %d",a%b);
		break;
}

return 0;
}
