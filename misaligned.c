#include <stdio.h>
#include <assert.h>

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 1, j = 1;
    for (i = 1; i < 6; i++) {
        for (j = 1; j < 6; j++) {
            printf("%-3d | %-7s | %-7s\n", (i * 6) + j, majorColor[i], minorColor[j]);
        }
    }
    return (i-1)*(j-1);
}

int testPrintColorMap() {
    printf("\nPrint color map test\n");
    int result = printColorMap();
    assert(result == 25);
    printf("All is well (maybe!)\n");
    return 0;
}
