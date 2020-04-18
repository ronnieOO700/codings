#include<stdio.h>
#include<conio.h>
// all Codes are done in Dev C++ version 4.9.9.2
int main()
{
	int vowels=0, special=0,rest=0;
	char a,b;
	FILE *p;
	// i am using devC++ vversion 4.9.9.2, i have created file named test2.txt and saved "hello! how are you?i am fine Thank you :-D" 
	// i have saved in my libraries->document folder in windows
	p=fopen("test2.txt","r");
	if(p==NULL)
	{
		printf("file Doesn't exist'");
		exit(1);
	}
	while(1)
	{
	a=fgetc(p);
	if(a==EOF)
	{
		break;
		exit(1);
	}
	a=toupper(a);
	if((a=='I')||(a=='A')||(a=='E')||(a=='O')||(a=='U'))
		{
			vowels++;
		}
	else if((a=='!')||(a=='@')||(a=='#')||(a=='$')||(a=='%')||(a=='^')||(a=='&')||(a=='*')||(a=='(')||(a==')'))
		{
			special++;
		}
	else
		{
			rest++;
		}
	}
	fclose(p);
	printf("No of Vowels are: %d\n No of special Character is: %d \n No of rest char is : %d ",vowels,special,rest);
	return(0);
}
