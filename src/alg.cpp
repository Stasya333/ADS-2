// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double s = 1.0;
  for(int i = 0; i < n; i++){
    s *=velue;
  }
  return s;
}

uint64_t fact(uint16_t n) {
  unit64_t s =1;
  for)int i = 2; i<= n; i++){
    s *=i;
  }
  return s;
}

double calcItem(double x, uint16_t n) {
  return (pown(x, n) / fact(n));
}

double expn(double x, uint16_t count) {
  double s = 1.0;
  for (int i = 1; i <= count; i++) {
    s += calcItem(x, i);
  }
  return s;
}

double sinn(double x, uint16_t count) {
  double s = 0.0;
  while (count > 0) {
    s += pown(-1, count - 1) * calcItem(x, 2 * count - 1);
    --count;
  }
  return s;
}

double cosn(double x, uint16_t count) {
  double s = 0.0;
  while (count > 0) {
    s += pown(-1, count - 1) * calcItem(x, 2 * count - 2);
    --count;
  }
  return s;
}
