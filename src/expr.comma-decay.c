
int main(void) {
    char arr[1];
    static_assert(sizeof(0, arr) == sizeof(char*));
}
