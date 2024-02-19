struct S {
    int i;
};
volatile struct S a;
struct S b;
int main(void) {
    b = a;
}
