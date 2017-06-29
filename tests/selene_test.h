/**
 * @file selene_test.h
 *
 */

#ifndef SELENETEST_H
#define SELENETEST_H

#include <cppunit/extensions/HelperMacros.h>

class SeleneTest : public CPPUNIT_NS::TestFixture
{
    CPPUNIT_TEST_SUITE(SeleneTest);

    CPPUNIT_TEST(testLuaScriptMethod);

    CPPUNIT_TEST_SUITE_END();

public:
    SeleneTest() = default;
    virtual ~SeleneTest() = default;
    void setUp();
    void tearDown();

private:
    void testLuaScriptMethod();
};

#endif /* SELENETEST_H */

