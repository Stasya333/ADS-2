@@ -1,26 +1,26 @@
// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double s = 1.0;
  for(int i = 0; i < n; i++){
    s *=velue;
  double ans = 1.0;
  for (int i = 0; i < n; i++) {
    ans *= value;
  }
  return s;
  return ans;
}

uint64_t fact(uint16_t n) {
  unit64_t s = 1;
  for(int i = 2; i <= n; i++){
    s *=i;
  uint64_t ans = 1;
  for (int i = 2; i <= n; i++) {
    ans *= i;
  }
  return s;
  return ans;
}

double calcItem(double x, uint16_t n) {
  return (pown(x, n) / fact(n));
  return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {
  double sum = 1.0;
  for (int i = 1; i <= count; i++) {
    sum += calcItem(x, i);
  }
  return sum;
}
double sinn(double x, uint16_t count) {
  double sum = 0.0;
  while (count > 0) {
    sum += pown(-1, count - 1) * calcItem(x, 2 * count - 1);
    --count;
  }
  return sum;
}
double cosn(double x, uint16_t count) {
  double sum = 0.0;
  while (count > 0) {
    sum += pown(-1, count - 1) * calcItem(x, 2 * count - 2);
    --count;
  }
  return sum;
}
