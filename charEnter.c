#include<stdio.h>
#include<conio.h>
int main()
{
	char a,b;
	FILE *p;
	p=fopen("test.txt","w");
	do
	{
		printf("\n enter a character:");
		fflush(stdin);
		a=getchar();
		fputc(a,p);
		printf("\n press 1 to continue");
		fflush(stdin);
		b=getchar();
	}while(b=='1');
	fclose(p);
	return(0);
}
