#include <stdio.h>
#include <assert.h>

char size(int cms) {
    char sizeName = '\0'; 
    if (cms < 38) {
        sizeName = 'S';
    } else if (cms > 38 && cms < 43) {
        sizeName = 'M';
    } else if (cms > 42) {
        sizeName = 'L';
    }
    return sizeName;
}

// STRONGER TEST CASES — intentionally fail on buggy input
int testTshirtSize() {
    printf("\nTshirt size test\n");
    assert(size(37) == 'S');      // valid
    assert(size(38) == 'S');      // edge case: should be S, will fail
    assert(size(40) == 'M');      // valid
    assert(size(42) == 'M');      // edge case: should be M, will fail
    assert(size(43) == 'L');      // valid
    printf("All is well (maybe!)\n");
    return 0;
}

int main() {
    testTshirtSize();
    return 0;
}