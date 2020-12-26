#include <emscripten.h>

int main(int argc, char ** argv) {
}

EMSCRIPTEN_KEEPALIVE
extern "C" double benchmark() {
  double k = 12;
  for (int i = 0; i < 100000000; i++) {
    k = k * 1.00000001 + 1.00000001;
  }
  return k;
}