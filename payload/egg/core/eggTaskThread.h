#pragma once

#include <Common.h>

typedef void (*TFunction)(void *);

typedef struct {
    u8 _00[0x58 - 0x00];
} EGG_TaskThread;

void EGG_TaskThread_request(EGG_TaskThread *this, TFunction mainFunction, void *arg, void *taskEndMessage);