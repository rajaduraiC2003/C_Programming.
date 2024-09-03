#include <stdio.h>

int main() {

  int n, reverse = 0, remainder;

  printf("Enter an integer: ");
  scanf("%d", &n);

  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  if(reverse=n)
	  printf("It is a palyndrom number.");
  else
	  printf("It is not a polyndrom.");

  return 0;
}
