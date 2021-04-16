#include "stabbingLines.h"

void printLineByCoords(LineId lid, Line linesArray[], Point pointsArray[]) {
    int pid1 = linesArray[lid].p1;
    int pid2 = linesArray[lid].p2;
    printf("Line ID: %d Coordinates: {%d, %d} {%d, %d} \n", lid, pointsArray[pid1].x, pointsArray[pid1].y, pointsArray[pid2].x, pointsArray[pid2].y);
        
    
}
