#include <stdio.h>

void printArray(int chisla[], size_t size){
int *ptr = chisla;
//unsigned long number = (unsigned long)ptr;
//printf("%lu\n", number);
//unsigned long sum = number + size;
//printf("%lu\n", sum);
//ptr = (unsigned long*)sum - size; NE IDET!!!
if (size != 0)
{
  printf("%d\n", *ptr);
  printArray(chisla + 1, size -1);}
  else printf("THAT#S ALL FOLKS!!");
}

int main (void){
int massiv[] = {3,6,8,5,45,32,109,73,78,12};
size_t size = sizeof(massiv)/sizeof(int);

printArray(massiv, size);
return '*';
}
