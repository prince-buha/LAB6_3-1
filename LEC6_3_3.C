#include<stdio.h>
#include<conio.h>
void main(){
	int i,n,mul;
	clrscr();
	printf("Enter the Number of which uh want the table of: ");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		mul=i*n;
		printf("\n%d * %d = %d",n,i,mul);
	}
	getch();
}