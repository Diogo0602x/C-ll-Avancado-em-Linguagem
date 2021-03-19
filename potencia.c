int potencia(int a, int b) {
  int resultado = 1;
  for(int i = 0; i < b; i++) {
    resultado = resultado * a;
  }

  return resultado;

}