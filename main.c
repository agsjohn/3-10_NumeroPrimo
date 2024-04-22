#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() {
  int x, num, mod = 0, cont;
  printf("Digite um número: ");
  scanf("%i", &num);
  getchar();
  for(x = 1; x <= num; x++){
    cont = num % x;
    if(cont == 0){
      mod = mod + 1;
    }
  }
  if(mod == 2){
    printf("O número %i é primo", num);
  }
  else{
    printf("O número %i não é primo", num);
  }
  getchar();
}