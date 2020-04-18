#include<stdio.h>
#include<conio.h>
// all Codes are done in Dev C++ version 4.9.9.2
int main()
{
	char a,b;
	FILE *p;
	// test.txt was created on previous code named as Charenter
	p=fopen("test.txt","r");
	if(p==NULL)
	{
		printf("file Doesn't exist'");
		exit(0);
	}
	while(1)
	{
		a=fgetc(p);
		if(a==EOF)
		break;
		else
		printf("%c",a);
	}
	fclose(p);
	return(0);
}
