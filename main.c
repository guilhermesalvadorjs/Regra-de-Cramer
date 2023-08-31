#include <stdio.h>

int printMatriz(int matriz[3][4], int i, int j) {
  for (i = 0; i <= 2; i++) {
    for (j = 0; j <= 3; j++) {
      printf("\t\t%d \t\t", matriz[i][j]);
    }
    printf("\n");
  }
  return 0;
}

int detGeral(int matriz[3][4]) {
  int multi1 = matriz[0][0] * matriz[1][1] * matriz[2][2];
  int multi2 = matriz[0][1] * matriz[1][2] * matriz[2][0];
  int multi3 = matriz[0][2] * matriz[1][0] * matriz[2][1];

  int multi4 = matriz[2][0] * matriz[1][1] * matriz[0][2];
  int multi5 = matriz[2][1] * matriz[1][2] * matriz[0][0];
  int multi6 = matriz[2][2] * matriz[1][0] * matriz[0][1];

  int soma1 = multi1 + multi2 + multi3;
  int soma2 = multi4 + multi5 + multi6;

  int subGeral = soma1 - soma2;
  return subGeral;
}

int detX(int matriz[3][4]){
  int multi1 = matriz[0][3] * matriz[1][1] * matriz[2][2];
  int multi2 = matriz[0][1] * matriz[1][2] * matriz[2][3];
  int multi3 = matriz[0][2] * matriz[1][3] * matriz[2][1];

  int multi4 = matriz[2][3] * matriz[1][1] * matriz[0][2];
  int multi5 = matriz[2][1] * matriz[1][2] * matriz[0][3];
  int multi6 = matriz[2][2] * matriz[1][3] * matriz[0][1];

  int soma1 = multi1 + multi2 + multi3;
  int soma2 = multi4 + multi5 + multi6;

  int sub = soma1 - soma2;
  return sub;
}

int detY(int matriz[3][4]){
  int multi1 = matriz[0][0] * matriz[1][3] * matriz[2][2];
  int multi2 = matriz[0][3] * matriz[1][2] * matriz[2][0];
  int multi3 = matriz[0][2] * matriz[1][0] * matriz[2][3];

  int multi4 = matriz[2][0] * matriz[1][3] * matriz[0][2];
  int multi5 = matriz[2][3] * matriz[1][2] * matriz[0][0];
  int multi6 = matriz[2][2] * matriz[1][0] * matriz[0][3];

  int soma1 = multi1 + multi2 + multi3;
  int soma2 = multi4 + multi5 + multi6;

  int sub = soma1 - soma2;
  return sub;
}

int detZ(int matriz[3][4]){
  int multi1 = matriz[0][0] * matriz[1][1] * matriz[2][3];
  int multi2 = matriz[0][1] * matriz[1][3] * matriz[2][0];
  int multi3 = matriz[0][3] * matriz[1][0] * matriz[2][1];

  int multi4 = matriz[2][0] * matriz[1][1] * matriz[0][3];
  int multi5 = matriz[2][1] * matriz[1][3] * matriz[0][0];
  int multi6 = matriz[2][3] * matriz[1][0] * matriz[0][1];

  int soma1 = multi1 + multi2 + multi3;
  int soma2 = multi4 + multi5 + multi6;

  int sub = soma1 - soma2;
  return sub;
}

int div(int sub, int subGeral){
  int div = subGeral / sub;
  return div;
}


int main() {
  int matriz[3][4], i, j;

  printf("\nDigite os valores da matriz 3x3\n\n");
  for (i = 0; i <= 2; i++) {
    for (j = 0; j <= 3; j++) {
      printf("\nElemento[%d][%d]:", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
  printf("\n\t\t\t\t\t\t   Matriz 3x3 \t\t\n\n");
  printMatriz(matriz, i, j);
  printf("\n\t\t\t\t\t\t\tResultado \t\t\n\n");
  printf("Determinante geral: %d\n", detGeral(matriz));
  printf("Determinante de X: %d\n", detX(matriz));
  printf("Determinante de Y: %d\n", detY(matriz));
  printf("Determinante de Z: %d\n", detZ(matriz));
  printf("\n");
  
  int subGeral = detGeral(matriz);
  int sub = detX(matriz);
  div(subGeral, sub);
  printf("X: %d\n", div(subGeral, sub));

  subGeral = detGeral(matriz);
  sub = detY(matriz);
  div(subGeral, sub);
  printf("Y: %d\n", div(subGeral, sub));

  subGeral = detGeral(matriz);
  sub = detZ(matriz);
  div(subGeral, sub);
  printf("Z: %d\n", div(subGeral, sub));


}