#include <stdint.h>

#define TRUE 1
#define FALSE 0

void LedDriver_Destroy(uint16_t *);
void LedDriver_Create(uint16_t *);
void LedDriver_TurnOn(int ledNumber, uint16_t  *);
void LedDriver_TurnOff(int ledNumber, uint16_t  *);
void LedDriver_TurnAllOn(uint16_t  *);
void LedDriver_TurnAllOff(uint16_t  *);
