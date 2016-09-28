/*
 * Copyright
 *
*/
#include <iostream>
#include "./Cleaning.h"

void Cleaning::DoCleaning()
{
    ShowCleaningMethod();
    Start();
    PreWork();
    DoWork();
    PostWork();
    Ending();
}

Cleaning::Cleaning() {
}

Cleaning::~Cleaning() {
}
