#include <stdio.h>

int main(void)
{
  char ch1, ch2, ch3;

  printf ("Enter three characters\n");
  scanf ("%c%c%c", &ch1, &ch2, &ch3);
  printf ("ch1 is %c, ch2 is %c, and ch3 is %c\n", ch1, ch2, ch3);
  printf ("Enter two more characters\n");
  scanf ("%c%c", &ch1, &ch2);
  printf ("ch1 is %c, ch2 is %c\n", ch1, ch2);
  printf("Enter two character:\n");
  scanf (" %c %c", &ch1, &ch2);
  printf ("ch1 is %c, ch2 is %c\n", ch1, ch2);
} 

/*When you ask scanf to read character data, it behaves differently. To understand why, you first have to realize that anything you type at the keyboard is a character, even the digits, punctuation marks, blanks, tabs, and the newline you get from pressing the Enter key. When you use a format specifier such as %d or %f to read numeric values, scanf actually reads the characters the user types and converts them to their numeric equivalents. When you ask scanf to read a character, it will read whatever is next as the value of the character. To see how this works, try typing and compiling the following program. When you run it and the program requests three characters, type the letter 'a', a comma, a blank space, and then the digit '1' before pressing the Enter key. */

//intinya elu mo pake scanf harus ada spasi, misal: scanf(" %c", njirmomen); ini dijelasin diatas gw juga gk faham penting gitu dah lmao
//saus: https://eecs.wsu.edu/~cs150/reading/scanf.htm
