#include <stdio.h>

#include <assert.h>
 
char size(int cms) {

    char sizeName = '\0';
    if (cms <= 38) {

        sizeName = 'S';

    } else if (cms  < 42 ) {

        sizeName = 'M';

    } else if (cms < 46) {

        sizeName = 'L';

    }else{

        sizeName = 'L'; 

    }    

    return sizeName;

}
 
int testTshirtSize() {

    printf("\nTshirt size test\n");

    assert(size(37) == 'S');

    assert(size(38) == 'S');

    assert(size(40) == 'M');

    assert(size(43) == 'L');

    assert(size(42) == 'L');

    assert(size(46) == 'L');

    printf("All is well (maybe!)\n");

    return 0;

}
 