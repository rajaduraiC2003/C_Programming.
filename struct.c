#include <stdio.h>
#include <string.h>

struct Person {
  char name[50];
  int Reg_No;
  float salary;
} person1;

int main() {

  strcpy(person1.name, "Rajadurai");

  person1.Reg_No = 23012;
  person1. salary = 2500;

  printf("Name: %s\n", person1.name);
  printf("Register No.: %d\n", person1.Reg_No);
  printf("Salary: %.2f\n", person1.salary);

  return 0;
}
