#include <cppunit/config/SourcePrefix.h>
#include "LRUCacheTest.hpp"

CPPUNIT_TEST_SUITE_REGISTRATION( LRUCacheTest );

void LRUCacheTest::test_put()
{
  CPPUNIT_ASSERT(1 == lru->put("a", "dataA"));
}

void LRUCacheTest::setUp()
{
  lru = new LRUCache();
}

