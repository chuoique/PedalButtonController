#ifndef COMMON_DEFINES_H
#define COMMON_DEFINES_H


#define OSHSTUDIOVERSION 15
#define FIRMWARERELEASE 15

#define BUFFSIZE 64
#define USEDPINS 32
#define MAX_AXES 6
#define MAX_SINGLE_ENCODERS 14
#define MAX_A2B_INPUTS 10
#define MAX_A2B_BUTTONS 10

#define LOBYTE(x)  ((uint8_t)(x & 0x00FF))
#define HIBYTE(x)  ((uint8_t)((x & 0xFF00) >>8))



#endif // COMMON_DEFINES_H
