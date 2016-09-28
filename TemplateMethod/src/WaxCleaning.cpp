/*
 * Copyright
 *
*/
#include <iostream>
#include "./WaxCleaning.h"
#include "Cleaning.h"
#include "ClothCleaning.h"

WaxCleaning::WaxCleaning() {
}

WaxCleaning::~WaxCleaning() {
}

void WaxCleaning::ShowCleaningMethod()
{
    std::cout << "ワックスがけ掃除" << std::endl;
}

void WaxCleaning::Start()
{
    std::cout << "準備：ワックスと扇風機を用意する" << std::endl;
}

void WaxCleaning::PreWork()
{
    std::cout << "掃除：床のホコリをとる（詳細手順は下記参照）" << std::endl;
    Cleaning* cloth = new ClothCleaning();
    cloth->DoCleaning();
    delete cloth;
}

void WaxCleaning::DoWork()
{
    std::cout << "掃除：ワックスを掛ける" << std::endl;
}

void WaxCleaning::PostWork()
{
    std::cout << "掃除：扇風機で乾かす" << std::endl;
}

void WaxCleaning::Ending()
{
    std::cout << "後片付け：ワックスと扇風機をしまう" << std::endl << "終了" << std::endl;
}
