#include <stdio.h>
#include <assert.h>
 
int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i, j, pairNumber = 1;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%-3d | %-7s | %-7s\n", pairNumber, majorColor[i], minorColor[j]);
            pairNumber++;
        }
    }
    return 25;
}
 
int testPrintColorMap() {
    printf("\nPrint color map test\n");
    int result = printColorMap();
    assert(result == 25);
    printf("All is well (maybe!)\n");
    return 0;
}