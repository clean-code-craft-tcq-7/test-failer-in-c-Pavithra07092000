
#include <stdio.h>
#include <assert.h>

char size(int cms) {
    char sizeName = '\0';  // default value
    if (cms <= 38) {
        sizeName = 'S';
    } else if (cms > 38 && cms <= 42) {
        sizeName = 'M';
    } else if (cms > 42) {
        sizeName = 'L';
    }
    return sizeName;
}

int testTshirtSize() {
    printf("\nTshirt size test\n");

    assert(size(37) == 'S');
    assert(size(40) == 'M');
    assert(size(44) == 'L');
    assert(size(38) == 'S');
    assert(size(42) == 'M');
    assert(size(43) == 'L');
    assert(size(0) == '\0');
    assert(size(50) == 'L');

    printf("All is well (maybe!)\n");
    return 0;
}

int main() {
    testTshirtSize();
    return 0;
}

