#include <stdio.h>
#include <espl_lib.h>
int main() {
int num;
char ch;
 do{
   printf("Give me a number\n");
   scanf("%d",&num);
  printf ("%s\n" ,num_to_words( num));
  printf ("Do you want to continue: y/n");
  scanf (" %c", &ch);
}
while(ch == 'y' || ch == 'Y');
}