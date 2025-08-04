#include <stdio.h>
#include <assert.h>

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 1, j = 1;
    for (i = 1; i < 5; i++) {
        for (j = 1; j < 5; j++) {
            printf("%d | %s | %s\n", ((i-1) * 5) + (j-1), majorColor[i-1], minorColor[j-1]);
        }
    }
    return (i-1) * (j-1);
}

int testPrintColorMap() {
    printf("\nPrint color map test\n");
    int result = printColorMap();
    assert(result == 25);
    printf("All is well (maybe!)\n");
    return 0;
}
