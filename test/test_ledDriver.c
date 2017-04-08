#include "unity.h"
#include "ledDriver.h"

uint16_t address;

void setUp(){

				}

void tearDown(){

	address=0;

				}

// TEST 1 APAGA TODOS LOS LEDS

void testDriver_LedsOffAfterCreate(){

	uint16_t virtualLedsTx=0xFFFF;
	LedDriver_Create(&virtualLedsTx);
	TEST_ASSERT_EQUAL_HEX16(0,virtualLedsTx);

									}

void testDriver_TurnOnledUno(){

	uint16_t virtualLeds=0x0001;
	LedDriver_Create(&virtualLeds);
    LedDriver_TurnOn(1,&virtualLeds);
	TEST_ASSERT_EQUAL_HEX16(1,virtualLeds);

								}


//TEST 2 Un led puede encendido individualmente

void testDriver_TurnOffledUno(){

	uint16_t virtualLeds1=0x0001;
	LedDriver_Create(&virtualLeds1);
    LedDriver_TurnOff(1,&virtualLeds1);
	TEST_ASSERT_EQUAL_HEX16(0,virtualLeds1);

								}

void testDriver_TurnOnMultipleLeds(){

	uint16_t virtualLedsX;
    LedDriver_Create(&virtualLedsX);
	LedDriver_TurnOn(9,&virtualLedsX);
	LedDriver_TurnOn(8,&virtualLedsX);
	TEST_ASSERT_EQUAL_HEX16(0x180, virtualLedsX);

									}


void testDriver_TurnOffMultipleLeds(){

	uint16_t virtualLedsA;
    LedDriver_Create(&virtualLedsA);
	LedDriver_TurnAllOn(&virtualLedsA);
	LedDriver_TurnOff(9,&virtualLedsA);
	LedDriver_TurnOff(8,&virtualLedsA);
	TEST_ASSERT_EQUAL_HEX16((~0x180)&0xffff, virtualLedsA);

										}

void testDriver_TurnOffAnyLed(){

	uint16_t virtualLedsY;
    LedDriver_Create(&virtualLedsY);
    LedDriver_TurnAllOn(&virtualLedsY);
	LedDriver_TurnOff(8,&virtualLedsY);
	TEST_ASSERT_EQUAL_HEX16(0xff7f, virtualLedsY);

								}


void testDriver_AllLedsOn(){

    uint16_t LEDSXYZaddress;
    LedDriver_Create(&LEDSXYZaddress);
    LedDriver_TurnAllOn(&LEDSXYZaddress);
    TEST_ASSERT_EQUAL_HEX16(0xffff, LEDSXYZaddress);

							}

void testDriver_AllLedsOff(){

    uint16_t LEDSXYZaddress2;
    LedDriver_Create(&LEDSXYZaddress2);
    LedDriver_TurnAllOn(&LEDSXYZaddress2);
    LedDriver_TurnAllOff(&LEDSXYZaddress2);
    TEST_ASSERT_EQUAL_HEX16(0, LEDSXYZaddress2);

							}

void testDriverValoresAltosyBajos(){

    uint16_t virtualLedsZ;
	LedDriver_Create(&virtualLedsZ);
	LedDriver_TurnOn(1,&virtualLedsZ);
	LedDriver_TurnOn(16,&virtualLedsZ);
	TEST_ASSERT_EQUAL_HEX16(0x8001, virtualLedsZ);

									}


void testDriverValoresFueradeLimites(){

	uint16_t virtualLedsW;
    LedDriver_Create(&virtualLedsW);
	LedDriver_TurnOn(-1,&virtualLedsW);
	LedDriver_TurnOn(0,&virtualLedsW);
	LedDriver_TurnOn(17,&virtualLedsW);
	LedDriver_TurnOn(3141,&virtualLedsW);
	TEST_ASSERT_EQUAL_HEX16(0, virtualLedsW);

										}


