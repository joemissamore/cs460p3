P3DEPENDENCIES = Project3.o Object.o CodeGenerator.o SyntacticalAnalyzer.o LexicalAnalyzer.o SetLimits.o
CLEANEXT = *.p1 *.p2 *.lst *.dbg

Project3.out : ${P3DEPENDENCIES}
	g++ -g -o Project3.out ${P3DEPENDENCIES}

Test.out : Test.o Object.o
	g++ -g -o Test.out Test.o Object.o

Test.o : Test.cpp
	g++ -g -c Test.cpp

Project3.o : Project3.cpp Object.h SetLimits.h SyntacticalAnalyzer.h
	g++ -g -c Project3.cpp

Object.o : Object.cpp Object.h
	g++ -g -c Object.cpp

CodeGenerator.o : CodeGenerator.cpp CodeGenerator.h LexicalAnalyzer.h 
	g++ -g -c CodeGenerator.cpp

SyntacticalAnalyzer.o : SyntacticalAnalyzer.cpp SyntacticalAnalyzer.h CodeGenerator.h #LexicalAnalyzer.h
	g++ -g -c SyntacticalAnalyzer.cpp

LexicalAnalyzer.o : LexicalAnalyzer.cpp LexicalAnalyzer.h
	g++ -g -c LexicalAnalyzer.cpp

SetLimits.o : SetLimits.cpp SetLimits.h
	g++ -g -c SetLimits.cpp

clean: 
	rm -f *.o *.out

cleanTests:
	cd P3Tests
	rm -f ${CLEANEXT}
	cd ..
