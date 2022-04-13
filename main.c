#include <stdio.h>
// voting eligibility check
int main(void) {
int age;

printf("Please enter your age:");
scanf("%d", &age);

if(age>=18){
  printf("You are eligible to vote!!");
}else{
  printf("Sorry!!! you are underaged.");
}
  
  return 0;
}