#include <cppunit/config/SourcePrefix.h>
#include "LRUCacheTest.hpp"

CPPUNIT_TEST_SUITE_REGISTRATION( LRUCacheTest );

void LRUCacheTest::example()
{
  CPPUNIT_ASSERT_DOUBLES_EQUAL( 1.0, 1.1, 0.05 );
  CPPUNIT_ASSERT( 1 == 0 );
  CPPUNIT_ASSERT( 1 == 1 );
}

void LRUCacheTest::setUp()
{
  m_value1 = 2.0;
  m_value2 = 3.0;
}

