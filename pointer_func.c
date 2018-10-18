#include <stdio.h>

void print_integers(int int_value,int* int_pointer);
void change_integers(int int_value,int* int_pointer);
int main(int argc, char const *argv[]) {

  int int_value = 8;
  int* int_pointer = &int_value; //Speichert die Adress von int_value
  print_integers(int_value, int_pointer);
  change_integers(int_value, int_pointer);
  printf("Change the values\n" );
  print_integers(int_value, int_pointer);
  return 0;
}
void print_integers(int int_value, int* int_pointer)
{
  printf("int value: %d int pointer: %d\n",int_value, *int_pointer); // der * hinter int_pointer bedeutet, dass ich den Wert will der and dieser Adresse steht
}
void change_integers(int int_value, int* int_pointer)
{
  *int_pointer = 7; //Gibt den Wert aus der an dieser Adresse steht!
}
