
TARGET=TestRunner
CXXSOURCES=LRUCache.cpp LRUCacheTest.cpp Main.cpp
LINC=-I/usr/local/include 
LDEF=-L/usr/local/lib
TestRunner:
	g++ ${LINC} ${LDEF} ${CXXSOURCES} -o ${TARGET}

