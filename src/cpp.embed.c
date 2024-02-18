unsigned char resource[] = {
#embed <stdlib.h>
};

int main(void) {
    return resource[0];
}
