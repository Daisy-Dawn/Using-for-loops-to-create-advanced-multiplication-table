#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
  int i, j;

  printf("Please enter a number:\t");
  scanf("%d", &i);
  
  for (j = 1; j <= 100; j=j+5)
    printf("%d x %d = %d\n", i, j, i * j);

  printf("\nEnd of program\n");
  sleep(5);
  system("clear");
  printf("Welcome User\n");
  
  
  return 0;
}