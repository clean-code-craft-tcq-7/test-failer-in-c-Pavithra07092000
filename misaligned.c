#include <stdio.h>
#include <string.h>
#include <assert.h>

// Helper function to format color pair
const char* formatColorPair(int index, const char* major, const char* minor) {
    static char buffer[50];
    sprintf(buffer, "%2d | %-6s | %-6s", index, major, minor);
    return buffer;
}

// This prints all color pairs using the helper function
int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

    int index = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%s\n", formatColorPair(index, majorColor[i], minorColor[j]));
            index++;
        }
    }
    return index;
}

// This tests whether color map function works correctly
void testPrintColorMap() {
    int result = printColorMap();

    // Strong test: check that 25 color combinations are printed
    assert(result == 25);

    // Optional: test formatting of a specific pair
    const char* sample = formatColorPair(0, "White", "Blue");
    assert(strcmp(sample, " 0 | White  | Blue  ") == 0);

    printf("All is well (maybe!)\n");
}

int main() {
    testPrintColorMap();
    return 0;
}