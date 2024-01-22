void func(int r[restrict], int c[const], int s[static 10]) {}

int main(void) {
    func(0, 0, 0);
}
