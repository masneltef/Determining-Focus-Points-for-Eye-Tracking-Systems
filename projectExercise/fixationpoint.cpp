#include "fixationpoint.h"

// Function to check if a fixation point already exists in the array
bool isFixationPointPresent(const FixationPoint fixationPoints[], int size, int x, int y) {
    for (int i = 0; i < size; i++) {
        if (fixationPoints[i].x == x && fixationPoints[i].y == y) {
            return true;
        }
    }
    return false;
}
