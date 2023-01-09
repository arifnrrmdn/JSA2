#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
//deklarasi fungsi
void input_kata(void);
void balik(void);
//deklarasi variabel
char kata[100];
int panjang_kata;
main()
{
 clrscr();
 input_kata();
 balik();
 getch();
 return 0;
}

//definisi fungsi
void input_kata(){
 printf("Input Kata/kalimat	= ");
 scanf("%s",&kata); fflush(stdin);
}

void balik(){
 printf("Dibalik menjadi	= ");

 panjang_kata=strlen(kata);

 for(panjang_kata-1;panjang_kata>0;panjang_kata--){
  printf("%c",kata[panjang_kata-1]);
 }
}