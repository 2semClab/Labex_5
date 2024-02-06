#include<stdio.h>
int main(){
int a,b,c;
char ch;
printf("Enter two numbers and operator : num1 operator num2\n");
scanf("%d%c%d",&a,&ch,&b);
switch(ch){
	case '+':
		printf("Result: %d\n",a+b);
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
