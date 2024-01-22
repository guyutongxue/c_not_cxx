enum E1 {
    E1_A,
    E1_B,
};

enum E2 {
    E2_A,
    E2_B,
};

int main(void) {
    enum E1 e1 = E2_A;
    enum E2 e2 = 1;
}
