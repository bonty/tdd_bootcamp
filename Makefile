
TARGET=TestRunner
CXXSOURCES=LRUCache.cpp LRUCacheTest.cpp Main.cpp
LINC=-I/usr/local/include 
LDEF=-L/usr/local/lib
LLIB=-lcppunit
TestRunner:${CXXSOURCES}
	g++ ${LINC} ${LDEF} ${LLIB} ${CXXSOURCES} -o ${TARGET}


