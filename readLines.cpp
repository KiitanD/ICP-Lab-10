#include "stabbingLines.h"
void readLines(ifstream& inPutLineFile, Line linesArray[]){

    while (!inPutLineFile.eof()) {
        struct Line temp;
        int a, b, c;
        inPutLineFile >> a >> b >> c;
        temp.Lid = a;
        temp.p1 = b;
        temp.p2 = c;
        linesArray[a] = temp;
    }
        //check values added correctly
//            for (int i= 0; i<5; i++) {
//                cout << linesArray[i].Lid << " "<<  linesArray[i].p1 << " " <<  linesArray[i].p2 << endl ;
//            }
}
