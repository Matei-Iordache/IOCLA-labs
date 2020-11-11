#include <stdio.h>

/**
 * Afisati adresele elementelor din vectorul "v" impreuna cu valorile
 * de la acestea.
 * Parcurgeti adresele, pe rand, din octet in octet,
 * din 2 in 2 octeti si apoi din 4 in 4.
 */

int main() {
    int v[] = {0xCAFEBABE, 0xDEADBEEF, 0x0B00B135, 0xBAADF00D, 0xDEADC0DE};
    unsigned char *char_ptr = (unsigned char *)v;
    unsigned short *short_ptr = (unsigned short *)v;
    unsigned int *int_ptr = v;
    int length = sizeof(v)/sizeof(*v), i;

    printf("Elements 4 bytes each\n");
    for (i = 0; i < length; i++) {
        printf("%p -> 0x%x\n", int_ptr+i, *(int_ptr + i));
    }

    printf("\nElements 2 bytes each\n");
    for (i = 0; i < length * 2; i++) {
        printf("%p -> 0x%x\n", short_ptr+i, *(short_ptr + i));
    }

    printf("\nElements 1 byte each\n");
    for (i = 0; i < length * 4; i++) {
        printf("%p -> 0x%x\n", char_ptr+i, *(char_ptr + i));
    }

    return 0;
}
