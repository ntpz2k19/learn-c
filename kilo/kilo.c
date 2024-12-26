#include <stdio.h>
#include <unistd.h>

int main(){
  char c;
  while (read(STDIN_FILENO, &c, 1) == 1); // read(STDIN_FILENO) berasal dari <unistd.h>, kita meminta read() untuk membaca 1 byte dari variable c terus menerus sampai tidak ada byte yang dapat dibaca. read() mengembalikan 
  return 0;
}
