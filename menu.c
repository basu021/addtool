#include <stdio.h>

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define WHT   "\x1B[37m"
#define RE "\x1B[0m"
#define CYN "[0;36m"
int main()

{
char command[50];
strcpy(command, "bash main.puv");
printf(" ");
system(command);

int a,b,c;

printf("\n         \n");

printf(GRN"["RE);

printf(WHT"*"RE);

printf(GRN"] "RE);

printf(BLU"Enter 1st number:- "RE);

scanf("%d",&a);

printf("\n         \n");

printf(GRN"["RE);

printf(WHT"*"RE);

printf(GRN"] "RE);

printf(BLU"Enter 2nd number:- "RE);

scanf("%d",&b);

c=a+b;

printf("\n         \n");

printf(GRN"["RE);

printf(WHT"*"RE);

printf(GRN"] "RE);

printf(RED"The addition of "RE);

printf(MAG"%d "RE,a);

printf(RED"and "RE);

printf(MAG"%d "RE,b);

printf(RED"is "RE);

printf(MAG"%d .\n"RE,c);

printf("\n         \n");

printf(YEL"\t Coding is fun!!\n"RE);

printf("\n         \n");

}
