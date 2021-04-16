#ifndef stabbingLines_h
#define stabbingLines_h

#include <iostream>
 #include <iomanip>
 #include <cmath>
 #include <cstdlib>
 #include <fstream>
 #define MAXARRAYSIZE 500
 using namespace std ;
 typedef int PointId ;
 typedef int LineId ;
 struct Point { //define a Point struct
     PointId Pid; // Point Id
     int x ; // x-coordinate of a point
     int y ; // y-coordinate of a point
};

struct Line { // define a Line by its 2 End points
    LineId Lid ; // Line Id
    PointId p1 ; // first Point
    PointId p2 ; // second Point
};
 // Declaring the prototype functions
 void readPoints(ifstream& inPutPointFile, Point pointsArray[]);
 void readLines(ifstream& inPutLineFile, Line linesArray[]);
 void printLineByCoords(LineId lid, Line linesArray[], Point pointsArray[]);
 void getStabbedLines (const int xcoord, Line linesArray[], Point pointsArray[], Line stabbedLines[]);
#endif /* stabbingLines_h */
