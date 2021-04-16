#include "stabbingLines.h"

void getStabbedLines (const int xcoord, Line linesArray[], Point pointsArray[], Line stabbedLines[]) {
    for (int i =0; i<5; i++) {
        int p1 = linesArray[i].p1;
        int x1 = pointsArray[p1].x;
        int p2 = linesArray[i].p2;
        int x2 = pointsArray[p2].x;
        if(x1 <= xcoord & xcoord <= x2) {
            printLineByCoords(i, linesArray, pointsArray);
        }
    }
}
