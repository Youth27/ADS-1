// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
// вставьте код функции
  if (value > 1) {
    for (int j = 2; j <= pow(value,0.5); j++)
      if (value % j == 0)
        return false;
    return true;
  }
  else
    return false;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
  int x = 0;
  int value = 1;
  while (x != n) {
    value++;
    if (checkPrime(value) == true) {
      x++;
    }
  }
  while (x < n);
  return value;
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
  value++;
  if (checkPrime(value))
    return value;
  return nextPrime(value);
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
  int summa = 0;
  for (hbound; hbound >= 2; hbound--) {
    if (checkPrime(hbound))
      summa = summa + hbound;
  }
  return summa;
}
