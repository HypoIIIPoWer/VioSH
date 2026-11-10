#include<stdio.h>
#include<windows.h>

typedef unsigned char bit8;
typedef unsigned short bit16;
typedef unsigned int bit32;

#define MAX_MEM 1024
#define MAX_TIME 1000

#pragma pack(push,1)

typedef struct
{
    bit8 type;
    bit8 code;
    bit16 checksum;
    bit16 id;
    bit16 seq;
    bit8 data[];
} wrongicmp;

typedef struct
{
    bit8 type;
    bit8 code;
    bit16 checksum;
    bit16 id;
    bit16 seq;
    bit8 data[];
} icmp;

#pragma pack(pop)

