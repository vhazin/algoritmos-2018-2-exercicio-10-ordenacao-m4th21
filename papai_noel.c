#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char temp[21];
  char estado;
  int qtd = 0;
  int mais = 0;
  int menos = 0;
  scanf("%d", &qtd);
  char *ar[qtd][24];
  for (int i = 0; i < qtd; i++) {
    scanf(" %c%s", &estado, &ar[i]);
    if (estado == '+')
      mais = mais + 1;
    else
      menos = menos + 1;
  }
  for (int i = 0; i < qtd; i++) {
    for (int j = 0; j < qtd; j++) {
      if (strcmp(ar[j], ar[j + 1]) > 0) {
      strcpy(temp, ar[j]);
      strcpy(ar[j], ar[j + 1]);
      strcpy(ar[j + 1], temp);
      }
    }

  }
  for (int i = 0; i < qtd; i++) {
    printf("%s\n", ar[i]);
  }
  printf("Se comportaram: %d | Nao se comportaram: %d\n", mais, menos);
  return 0;
}
