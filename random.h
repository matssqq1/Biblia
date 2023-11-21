#include <ctime>
#include <iostream>
using namespace std;

unsigned long seed = 1;  // это то самое стартовое значение,
                         // о котором мы говорили ранее

int my_rand() {
  seed = seed * 1103515245 + 12345;  // Линейный конгруэнтный метод
  return (seed / 65536) % 2;     // Вернуть значение в диапазоне 0-32767
}


