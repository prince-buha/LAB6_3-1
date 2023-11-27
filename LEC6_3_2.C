#include<stdio.h>
#include<conio.h>
void main(){
	int i,n,fact=1;
	clrscr();
	printf("Enter the Number uh want the Factorial of: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	printf("The Factorial of %d is %d",n,fact);
	getch();
}