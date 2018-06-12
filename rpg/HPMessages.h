#pragma once

#include "dynamixc.h"

struct Attack;

C_MSG0(int32_t, hp);
MSG2(int32_t, hit, ID, source, const Attack&, attack);
