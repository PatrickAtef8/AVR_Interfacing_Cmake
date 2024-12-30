
#ifndef MDIO_H_
#define MDIO_H_

#include "STD_TYPES.h"
#include "MDIO_cfg.h"

typedef enum
{
	MDIO_OK=0x00,
	MDIO_NOK,
	MDIO_INVALID_PIN,
	MDIO_INVALID_PORT,
	MDIO_NULL_PTR,
	}MDIO_enuErrorStatus_t;


typedef enum
{
	MDIO_PORTA=0x00,
	MDIO_PORTB,
	MDIO_PORTC,
	MDIO_PORTD
	
}Port_Num;


typedef enum
{
	MDIO_PIN0=0x00,
	MDIO_PIN1,
	MDIO_PIN2,
	MDIO_PIN3,
	MDIO_PIN4,
	MDIO_PIN5,
    MDIO_PIN6,
    MDIO_PIN7,
	TOTAL_PIN	
	}Pin_Num;

typedef enum{
	 OUTPUT=0x00,
	 INPUT_PULLUP,
	 INPUT_PULLDOWN
}DIO_PinStatus;

typedef enum
{
	ALL_LOW = 0x00,
	ALL_HIGH = 0xFF
}DIO_PortVoltage_type;

typedef enum
{
	PORT_OUTPUT = 0xFF,
	PORT_INPUT = 0x00,
} DIO_PortStatus;

typedef enum{
	LOW=0,
	HIGH
}DIO_PinVoltage_type;




void MDIO_vInit(void);
extern const DIO_PinStatus PinCfg_array[TOTAL_PIN];
MDIO_enuErrorStatus_t MDIO_enuSetPinConfigration(Port_Num Copy_enuPortNum,Pin_Num Copy_enuPinNum,DIO_PinStatus Copy_enuConfigration);
MDIO_enuErrorStatus_t MDIO_enuSetPortConfigration(Port_Num Copy_enuPortNum,DIO_PortStatus Copy_enuConfigration);
MDIO_enuErrorStatus_t MDIO_enuSetPinValue(Port_Num Copy_enuPortNum, Pin_Num Copy_enuPinNum,DIO_PinVoltage_type Copy_enuState);
MDIO_enuErrorStatus_t MDIO_enuSetPortValue(Port_Num Copy_enuPortNum,DIO_PortVoltage_type Copy_enuPortState);
MDIO_enuErrorStatus_t MDIO_enuGetPinValue(Port_Num  Copy_enuPortNum,Pin_Num Copy_enuPinNum, u8* Add_pu8PinValue);





#endif /* MDIO_H_ */