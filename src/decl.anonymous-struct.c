struct Outer {
    struct {
        int innerMem;
    };
    int outerMem;
} s;

int main(void) {
    s.innerMem;
}
