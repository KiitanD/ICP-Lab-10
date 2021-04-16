output: main.o getStabbedLines.o printLinebyCoords.o readLines.o readPoints.o
	g++ main.o getStabbedLines.o printLinebyCoords.o readLines.o readPoints.o -o output

main.o: main.cpp
	g++ -c main.cpp

getStabbedLines.o: getStabbedLines.cpp stabbingLines.h
	g++ -c getStabbedLines.cpp

printLinebyCoords.o: printLinebyCoords.cpp stabbingLines.h
	g++ -c printLinebyCoords.cpp

readLines.o: readLines.cpp stabbingLines.h
	g++ -c readLines.cpp

readPoints.o: readPoints.cpp stabbingLines.h
	g++ -c readPoints.cpp

clean:
	rm *.o output
