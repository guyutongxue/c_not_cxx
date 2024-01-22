unsigned char resource[] = {
#embed "./resource"
};

int main(void) {
    return resource[0];
}
