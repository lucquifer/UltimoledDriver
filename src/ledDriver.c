
#include "ledDriver.h"



void LedDriver_Destroy(uint16_t *ledsAddress){

												}

void LedDriver_Create(uint16_t *ledsAddress){

					*ledsAddress=0;//
											}


void LedDriver_TurnOn(int ledNumber, uint16_t  *ledsAddress){

	if (ledNumber <= 0 || ledNumber > 16)
	return;
        *ledsAddress |= 1 << (ledNumber - 1);

															}

void LedDriver_TurnOff(int ledNumber, uint16_t  *ledsAddress){

	if (ledNumber <= 0 || ledNumber > 16)
	return;

       *ledsAddress &= ~(1 << (ledNumber - 1));

															}

static uint16_t convertLedNumberToBit(int ledNumber){

			return 1 << (ledNumber - 1);
													}

void LedDriver_TurnAllOn(uint16_t  *ledsAddress){

				*ledsAddress = 0xffff;
												}

void LedDriver_TurnAllOff(uint16_t  *ledsAddress){

				*ledsAddress = 0;

												}
