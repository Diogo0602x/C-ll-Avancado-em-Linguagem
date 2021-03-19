void soma(int* num, int a, int b) {
  *num = a + b;
}

int soma(int* nums, int tam) {
  int total = 0;

  for(int i = 0; i < tam; i++) {
    total += nums[i];
  }

  return total;
}