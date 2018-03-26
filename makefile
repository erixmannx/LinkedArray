CXX = g++
CXXFLAGS = -Wall -g
INC = -I./source/

LinkedArrayTest: LinkedArrayTest.o LinkedArray.o
	$(CXX) $(CXXFLAGS) $(INC) -o LinkedArrayTest LinkedArrayTest.o LinkedArray.o

LinkedArrayTest.o: test/LinkedArrayTest.cxx source/LinkedArray.h
	$(CXX) $(CXXFLAGS) $(INC) -c test/LinkedArrayTest.cxx

LinkedArray.o: source/LinkedArray.cxx source/LinkedArray.h source/Comparator.h source/Deallocator.h source/Level.h
	$(CXX) $(CXXFLAGS) $(INC) -c source/LinkedArray.cxx

clean:
	rm -rf LinkedArrayTest *.o
