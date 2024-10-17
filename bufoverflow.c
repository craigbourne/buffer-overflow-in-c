#include <stdio.h>

int main(int argc, char **argv)
{
  char buf[8]; // buffer for eight characters
  printf("Enter name: ");
  gets(buf);           // Deliberately using gets() to allow buffer overflow
  printf("%s\n", buf); // print out data stored in buf
  return 0;            // 0 as return value
}