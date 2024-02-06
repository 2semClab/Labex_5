#include<stdio.h>
int main(){
int a,b,c;
char ch;
printf("Enter two numbers and operator : num1 operator num2\n");
scanf("%d%c%d",&a,&ch,&b);
switch(ch){
	case '+':
	       c=a+b;
		printf("Result: %d\n",c);
		break;
	case '-':
		printf("Result: %d\n",a-b);
		break;
	case '*':
		printf("Result: %d\n",a*b);
		break;
	case '/':
		printf("Result: %d\n",a/b);
		break;
	case '%':
		printf("Result: %d\n",a%b);
		break;
}

return 0;
}
