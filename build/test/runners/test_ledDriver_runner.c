/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void testDriver_LedsOffAfterCreate();
extern void testDriver_TurnOnledUno();
extern void testDriver_TurnOffledUno();
extern void testDriver_TurnOnMultipleLeds();
extern void testDriver_TurnOffMultipleLeds();
extern void testDriver_TurnOffAnyLed();
extern void testDriver_AllLedsOn();
extern void testDriver_AllLedsOff();
extern void testDriverValoresAltosyBajos();
extern void testDriverValoresFueradeLimites();


/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  UnityBegin("test_ledDriver.c");
  RUN_TEST(testDriver_LedsOffAfterCreate, 18);
  RUN_TEST(testDriver_TurnOnledUno, 26);
  RUN_TEST(testDriver_TurnOffledUno, 38);
  RUN_TEST(testDriver_TurnOnMultipleLeds, 47);
  RUN_TEST(testDriver_TurnOffMultipleLeds, 58);
  RUN_TEST(testDriver_TurnOffAnyLed, 69);
  RUN_TEST(testDriver_AllLedsOn, 80);
  RUN_TEST(testDriver_AllLedsOff, 89);
  RUN_TEST(testDriverValoresAltosyBajos, 99);
  RUN_TEST(testDriverValoresFueradeLimites, 110);

  return (UnityEnd());
}
