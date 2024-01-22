struct Inner {
    int innerMem;
};

struct Outer {
    struct Inner inner;
    int outerMem;
    int arr[3];
};

int main(void) {
    struct Outer outer = {
        .arr = {
            1,
            [2] = 3
        },
        .inner = {
            .innerMem = 2
        },
        .outerMem = 1
    };
}
