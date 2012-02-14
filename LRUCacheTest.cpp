#include <iostream>

#include <cppunit/TestRunner.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TestRunner.h>

#include "LRUCache.hpp"

class LRUCacheTest : public CPPUNIT_NS::TestCase
{
  CPPUNIT_TEST_SUITE(LRUCache);
  // insert test method here
  CPPUNIT_TEST_SUITE_END();

private:
  LRUCache *plru;
  
public:
  LRUCacheTest() {}

  void setUp() {
    *plru = new LRUCache();
  }

  void tearDown() {
    delete plru;
  }

  // insert test method here
};

int main(void) {
  CppUnit::TestSuite *suit = LRUCacheTest::suite();
  CppUnit::TextUi::TestRunner runner;
  runner.addTest(suite);
  bool retcode = runner.run();
  reeturn !retcode;
}
