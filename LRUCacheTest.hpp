
#ifndef CPP_UNIT_EXAMPLETESTCASE_H
#define CPP_UNIT_EXAMPLETESTCASE_H

#include <cppunit/extensions/HelperMacros.h>
#include "LRUCache.hpp"

/* 
 * A test case that is designed to produce
 * example errors and failures
 *
 */

class LRUCacheTest : public CPPUNIT_NS::TestFixture
{
  CPPUNIT_TEST_SUITE( LRUCacheTest );
  CPPUNIT_TEST( test_put );
  CPPUNIT_TEST_SUITE_END();

protected:
  LRUCache *lru;

public:
  void setUp();

protected:
  void test_put();
};


#endif
