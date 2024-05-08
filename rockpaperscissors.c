
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    int num;
    char you,computer;
   
    srand(time(NULL));
    num= rand()%100;
 if(num<33){
     computer='r';
 }
 else if(num>33 && num<66){
     computer='p';
 }
 else{computer='s';
 }
 printf("enter s for scissors, r for rock , p for paper:");
 scanf("%c",&you);
 if(computer==you){
     printf("its a draw");
 }
 else if(computer=='r' && you=='p'){
     printf("      you chose paper and computer chose rock\n            you win");
 }
 else if(computer=='p' && you=='r'){
     printf("      you chose rock and computer chose scissors\n            you lose");
 }
 else if(computer=='r' && you=='s'){
     printf("      you chose scissors and computer chose rock\n            you lose");
 }
 else if(computer=='s' && you=='r'){
     printf("      you chose rock and computer chose scissors\n            you win");
 }
 else if(computer=='p' && you=='s'){
     printf("      you chose scissors and computer chose paper\n            you win");
 }
 else if(computer=='s' && you=='p'){
     printf("      you chose paper and computer chose scissors\n            you lose");
 }
 else{
     printf("choose the correct thing");
 }

    return 0;
}