/*
 * Copyright
 *
*/
#include <iostream>
#include "./FlapCleaning.h"

FlapCleaning::FlapCleaning() {
}

FlapCleaning::~FlapCleaning() {
}

void FlapCleaning::ShowCleaningMethod()
{
    std::cout << "はたきがけ掃除" << std::endl;
}

void FlapCleaning::Start()
{
    std::cout << "準備：箒とはたきを用意する" << std::endl;
}

void FlapCleaning::PreWork()
{
}

void FlapCleaning::DoWork()
{
    std::cout << "掃除：はたきを掛ける" << std::endl;
}

void FlapCleaning::PostWork()
{
    std::cout << "掃除：箒で掃く" << std::endl;
}

void FlapCleaning::Ending()
{
    std::cout << "後片付け：箒とはたきをしまう" << std::endl << "終了" << std::endl;
}
