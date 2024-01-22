struct S {
    int b : 1;
} s;

int main(void) {
    sizeof(1, s.b);
}
