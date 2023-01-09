#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

main()
{
 char hrf,kata[100];
 int i,jhv=0,jhk;
 clrscr();
 printf("Input sebuah kata	= ");
 gets(kata);
 //proses menghitung huruf vokal dan konsonan
 for(i=0;i<strlen(kata);i++)
 {
  hrf=toupper(kata[i]);
  switch(hrf)
  {
   case 'A' : case 'I': case 'U' : case 'E' : case 'O' : jhv++; break;
   default : jhk++;
  }
 }

 printf("Jumlah huruf vokal	= %d\n",jhv);
 printf("Jumlah huruf konsonan  = %d\n",jhk);

 getch();
 return 0;
}