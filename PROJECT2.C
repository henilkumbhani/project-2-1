#include<stdio.h>
#include<conio.h>

void main()
 {
 clrscr();
 char ch;
 printf("Enter char.=");
 scanf("%c",&ch);
 if((ch>='a'&&ch<='z')||
    (ch>='A'&&ch<='Z'))
    {
    printf("char. %c is alphabet.",ch);
    }
  else if(ch>='0'&&ch<='9')
  {
  printf("char. %c is digit.",ch);
  }
  else
  {
  printf("char. %c is special character.");
  }
  getch();
}