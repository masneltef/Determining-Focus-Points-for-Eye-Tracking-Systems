#include <iostream>
#include <fstream>
#include "fixationpoint.h"

using namespace std;

bool isFixationPointPresent(const FixationPoint fixationPoints[], int size, int x, int y);

int main() {
    ifstream inputFile("../input.txt");
    ofstream outputFile("../output.txt");

    if (!inputFile) {
        cout << "Error opening input file" << endl;
        return 0;
    }

    if (!outputFile) {
        cout << "Error opening output file" << endl;
        return 0;
    }

    int numScanPaths;
    inputFile >> numScanPaths;
    outputFile << "ytefiang" << endl;

    int fixationNumber = 1;

    for (int i = 0; i < numScanPaths; i++) {
        const int MAX_FIXATIONS = 1000;
        FixationPoint fixationPoints[MAX_FIXATIONS];

        int number, x, y;
        int fixationCount = 0;
        int count = 1;

        while (true) {
            inputFile >> number >> x >> y;

            if (x == -1 && y == -1) {
                break;
            }

            if (number != -1 && x != -1 && y != -1) {
                if (!isFixationPointPresent(fixationPoints, fixationCount, x, y)) {
                    FixationPoint fixationPoint = {};
                    fixationPoint.number = fixationNumber;
                    fixationPoint.x = x;
                    fixationPoint.y = y;
                    fixationPoints[fixationCount++] = fixationPoint;
                    fixationNumber++;
                }
            }
        }

        for (int j = 0; j < fixationCount; j++) {
            outputFile << count++ << " " << fixationPoints[j].x << " " << fixationPoints[j].y << endl;
        }

        outputFile << "**********" << endl;
        count = 1;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
