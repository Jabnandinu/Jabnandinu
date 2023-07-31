Practical 1

1.#include<stdio.h>
int main()
{
 printf(“My name is Binuth\nMy school is I GATE College”);
}

2.#include<stdio.h>
int main()
{
printf(“*\n”);
printf(“**\n”);
printf(“***\n”);
printf(“****\n”);
printf(“*****\n”);
}

3.#include<stdio.h>
int main()
{
int integer;
float flo;
double dble;
char cha;
printf(“Enter an integer:”);
scanf(“%d,”&integer);
printf(“Enter a Float Value:”)
scanf(“%f”&flo);
printf(“Enter a Double Value”);
scanf(“%if”&dble);
printf(“Enter a character”);
scanf(“%c”,&cha);
}

4. #include <stdio.h>
#include <stdlib.h>
int main() 
{
int x,y,tot;
printf("Enter first number:");
scanf("%d",&x); 
printf("Enter second number:");
scanf("%d",&y); 
tot=x+y;
printf("Total is %d:",tot);
}

5. #include<stdio.h>
#include <stdlib.h>
int main() 
{ 
float x,y,ava; 
printf("Enter first number:"); 
scanf("%f",&x); 
printf("Enter second number:"); 
scanf("%f",&y); 
ava=x+y; 
printf("Average is %f:",ava);
}

6. #include
#include
int main() 
{ char nm; 
int age,y; 
printf("Enter your name:"); 
scanf("%c",&nm); 
printf("Enter your birthyear:"); 
scanf("%d",&y) ; 
age=2023-y; 
printf("My name is %c:",nm); 
printf("i am %d old",age);
}

Practical 2
  
Q1. #include <stdio.h>
#include <stdlib.h>
int main()
{
 int x;
 printf("Hi,How Old Are You?");
 scanf("%d",&x);
 printf("\n\nWlecome %d\n",x);
 printf("Lets Be Friends!");
 return 0;
}

Q2. #include <stdio.h>
#include <stdlib.h>
int main()
{
printf("%5d%5d%5d\n", 2, 4, 8);//Right Align
printf("%5d%5d%5d\n", 3, 9, 27);//Right Align
printf("%5d%5d%5d\n", 4, 16, 64); //right align
printf("\n\n\n");
return 0;
}

Q3. #include <stdio.h>
#include <stdlib.h>
int main()
{
 int d,t,ave;
 printf("Enter the Distance:");
 scanf("%d",&d);
 printf("Enter Traveled Time in Seconds:");
 scanf("%d",&t);
 ave=d/t;
 printf("Average is %d",ave);
}

Q4.# include <stdio.h>
#include <stdlib.h>
int main()
{
 float f,c;
 printf("Enter the Fahrenheit:");
 scanf("%5f",&f);
 c=(5/9)*(f-32);
 printf("%f celsius",c);
}
