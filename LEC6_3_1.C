#include<stdio.h>
#include<conio.h>
void main(){
	int i,n,sum=0;
	clrscr();
	printf("Enter a Value: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d\n",i);
		sum=sum+i;
	}
	printf("\nYour Sum of N numbers is: %d",sum);
	getch();

}