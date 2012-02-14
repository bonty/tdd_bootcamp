#include <iostream>

#include <cppunit/TestRunner.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/extensions/TestFactoryRegistry.h>

class FizzBuzzTest : public CPPUNIT_NS::TestCase
{
  CPPUNIT_TEST_SUITE(FizzBuzzTest);
  CPPUNIT_TEST(testFizzBuzz);
  CPPUNIT_TEST_SUITE_END();

public:
  void setUp(void) {}
  void tearDown(void) {}

protected:
  void testFizzBuzz(void) {
    std::cout << "Hello, World!" << std::endl;
  }
};

int main(int argc, char **argv) {
  CPPUNIT_NS::TestResult controller;

  CPPUNIT_NS::TestResultCollector result;
  controller.addListener(&result);

  CPPUNIT_NS::BriefTestProgressListener progress;
  controller.addListener(&progress);

  CPPUNIT_NS::TestRunner runner;
  runner.addTest(
                 CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest()
                 );

  runner.run(controller);

  return result.wasSuccessful() ? 0 : 1;
}
