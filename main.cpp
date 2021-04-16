
#include <iostream>
#include "stabbingLines.h"


int main() {
    
    string line;
    ifstream pfile;
    pfile.open("Points.txt");
    Point pointsarray[8];
    readPoints(pfile, pointsarray);
    
    ifstream lfile;
    lfile.open("Lines.txt");
    Line linesarray[5];
    readLines(lfile, linesarray);
    
    printLineByCoords(1, linesarray, pointsarray);
    Line stabbedlines[5];
    getStabbedLines(6, linesarray, pointsarray, stabbedlines);
    cout << "Done";
    return 0;
}
