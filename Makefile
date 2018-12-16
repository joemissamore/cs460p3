P3DEPENDENCIES = Project3.o CodeGenerator.o SyntacticalAnalyzer.o LexicalAnalyzer.o SetLimits.o
CLEANEXT = *.p1 *.p2 *.lst *.dbg

Project3.out : ${P3DEPENDENCIES}
	g++ -g -o Project3.out ${P3DEPENDENCIES}

test.out : Test.o Object.o
	g++ -g -o test.out Test.o Object.o

Test.o : Test.cpp
	g++ -g -c Test.cpp

Project3.o : Project3.cpp SetLimits.h SyntacticalAnalyzer.h
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

submit:	Makefile Project3.cpp Object.cpp Object.h CodeGenerator.cpp CodeGenerator.h SyntacticalAnalyzer.cpp SyntacticalAnalyzer.h LexicalAnalyzer.cpp LexicalAnalyzer.h SetLimits.cpp SetLimits.h README.txt
	rm -rf Team4P3
	mkdir Team4P3
	cp Makefile Team4P3
	cp Project3.cpp Team4P3
	cp Object.cpp Team4P3
	cp Object.h Team4P3
	cp CodeGenerator.cpp Team4P3
	cp CodeGenerator.h Team4P3
	cp SyntacticalAnalyzer.cpp Team4P3
	cp SyntacticalAnalyzer.h Team4P3
	cp LexicalAnalyzer.cpp Team4P3
	cp LexicalAnalyzer.h Team4P3
	cp SetLimits.cpp Team4P3
	cp SetLimits.h Team4P3
	cp README.txt Team4P3
	tar cvfz Team4P3.tgz Team4P3
	cp Team4P3.tgz ~tiawatts/cs460drop

clean: 
	rm -f *.o *.out
	cd P3Tests/
	rm -f ${CLEANEXT}
	cd ..
