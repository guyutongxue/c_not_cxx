#include <stdarg.h>

void func(int x, ...) {
    va_list ap;
    va_start(ap);
    va_end(ap);
}

int main(void) {
    func(3, 0, 1, 2);
}
