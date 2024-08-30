#include <stdlib.h>
#include <time.h>

char randchar() {
    int randomIndex = rand() % 26;
    return 'A' + randomIndex;
}
