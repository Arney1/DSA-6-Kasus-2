#include "linked.h"
#include "stack.h"
#include <stdio.h>

void turnIntoBinary(int n, Stack *q);
void popAndPrint(Stack *q);

int main() {
  int n;
  // address newNode;
  Stack q;
  printf("Masukkan Angka: ");
  scanf("%d", &n);
  turnIntoBinary(n, &q);
  Tampil_List(q);
  popAndPrint(&q);
  Tampil_List(q);

  return 0;
}

void turnIntoBinary(int n, Stack *q) {
  if (n != 0) {
    address newNode;
    Create_Node(&newNode);
    Isi_Node(&newNode, n % 2);
    Push(q, newNode);
    turnIntoBinary(n / 2, q);
  }
}

void popAndPrint(Stack *q) {
  while (!isEmpty(*q)) {
    infotype X;
    Pop(q, &X);
    printf("%d", X);
  }
  printf("\n");
}
