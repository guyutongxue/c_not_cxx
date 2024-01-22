struct S {
    int x, y;
};

void func(struct S s) {}

int main(void) {
    func((struct S){1, 2});
}
