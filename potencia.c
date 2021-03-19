void potencia(int* resultado, int a, int b) {
  *resultado = 1;
  for(int i = 0; i < b; i++) {
    *resultado = *resultado * a;
  }
}
