#pragma once
#include <stdint.h>
#include <bitset>


const int MAX_ENTITY = 100;
using Entity = int16_t;
const int MAX_COMPONENTS = 32;
using Signature = std::bitset<MAX_COMPONENTS>;

struct Translation{
    int position;
    int algle;
}; typedef struct Translation Translation;

struct speed{
    int speed;
    int accelaration;
}; typedef struct speed Speed;