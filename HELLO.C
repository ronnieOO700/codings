#include<stdio.h>
#include<conio.h>

void main()
{
	char a,b;
	FILE *p;
	// creating a file name as hello in txt format
	p=fopen("hello.txt","W");
	// closing File
	fclose(p);
	getch();
}