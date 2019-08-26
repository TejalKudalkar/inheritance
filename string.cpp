#string
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	clrscr();
	cout<<"\n Enter";
	char s[100],t;
	gets (s);
	int len=strlen(s);
	int l=len-l;
	for(int i;i<len/2;i++)
	{
	t=s[i];
	 s[i]=s[l];
	 s[l]=t;
	 l--;
	 }
	 cout<<"\n reverse is="<<s;
	 getch();
}
