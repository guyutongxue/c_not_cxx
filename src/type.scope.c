struct Outer {
    struct Inner {
        int innerMem;
    };
    enum InnerEnum {
        INNER_ENUM_VAL
    } e;
    int outerMem;
};

int main(void) {
    struct Inner inner;
    enum InnerEnum innerEnum = INNER_ENUM_VAL;
}
