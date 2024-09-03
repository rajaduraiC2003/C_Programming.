#include <stdio.h>
#include <string.h>

typedef struct Person {
  char name[50];
  int Reg_No;
  float salary;
} person;

int main() {

  person p1;

  strcpy(p1.name, "Rajadurai");

  p1.Reg_No = 23012;
  p1. salary = 2500;

  printf("Name: %s\n", p1.name);
  printf("Citizenship No.: %d\n", p1.Reg_No);
  printf("Salary: %.2f", p1.salary);

  return 0;
}
