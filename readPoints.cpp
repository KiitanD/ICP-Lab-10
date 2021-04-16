
#include "stabbingLines.h"

void readPoints(ifstream& inPutPointFile, Point pointsArray[]) {
    while (!inPutPointFile.eof()) {
        struct Point temp;
        int a, b, c;
        inPutPointFile >> a >> b >> c;
        temp.Pid = a;
        temp.x = b;
        temp.y = c;
        pointsArray[a] = temp;
    }
        //check values added correctly
//        for (int i= 0; i< 8; i++) {
//            cout << pointsArray[i].Pid << " "<<  pointsArray[i].x << " " <<  pointsArray[i].y << endl ;
//        }
     }


