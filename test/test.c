#include <stdio.h>
#include "utils.h"

int main() {
    if (sum(3, 4) == 7) {
        printf("Test passed!\n");
    } else {
        printf("Test failed!\n");
    }
    return 0;
}

