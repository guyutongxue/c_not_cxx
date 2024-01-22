int func(int x) {
    int vla[x];
    return vla[0];
}

int main(void) {
    func(42);
}
