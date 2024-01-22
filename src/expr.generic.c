void func_i(int x) {}
void func_f(float x) {}
void func_d(double x) {}

#define func(x) _Generic((x), \
    int: func_i,              \
    float: func_f,            \
    double: func_d            \
)(x)

int main(void) {
    func(0);
    func(0.0f);
    func(0.0);
}
