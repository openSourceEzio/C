#include<stdio.h>
#include<conio.h>
void main(){
int length,breadth,perimeter;
printf("enter length");
scanf("%d",&length);

printf("enter breadth");
scanf("%d",&breadth);

perimeter=2*(length + breadth);

printf("answer is %2d\n",perimeter);

getch();
}