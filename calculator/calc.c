#include <stdio.h>

int main(){
  int a, b, sum, sub, mul, mod;
  double div;
  char op;

  printf("Masukan angka pertama\n");
  scanf("%d", &a);
  printf("Masukan operator(+-x/%)\n");
  scanf(" %c", &op);
  printf("Masukan angka kedua\n");
  scanf("%d", &b);

  switch(op){
  case '+':
    sum = a + b;
    printf("%d", sum);
    break;
  case '-':
    sub = a - b;
    printf("%d", sub);
    break;
  case 'x':
    mul = a * b;
    printf("%d", mul);
    break;
  case '%':
    mod = a % b;
    printf("%d %% %d = %d\n",a, b, mod);
    break;
  case '/':
    div =(double) a / b;
    printf("%0.4lf", div);
    break;
  default:
  printf("Operator salah");
  break;
  }
  return 0;
}
//saus: https://medium.com/@frankokey469/how-to-make-a-basic-calculator-with-switch-statement-fc70a3f9dfa3
