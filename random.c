#include "random.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar() {
    const char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int randomIndex = rand() % 25;
    return alphabet[randomIndex];
}