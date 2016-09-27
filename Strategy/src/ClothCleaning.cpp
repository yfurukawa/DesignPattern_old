/*
 * Copyright
 *
*/
#include <iostream>
#include "./ClothCleaning.h"

ClothCleaning::ClothCleaning() {
}

ClothCleaning::~ClothCleaning() {
}

void ClothCleaning::ShowCleaningMethod()
{
    std::cout << "雑巾がけ掃除" << std::endl;
}

void ClothCleaning::Start()
{
    std::cout << "準備：雑巾とバケツと水を用意する" << std::endl;
}

void ClothCleaning::PreWork()
{
}

void ClothCleaning::DoWork()
{
    std::cout << "掃除：水拭きをする" << std::endl;
}

void ClothCleaning::PostWork()
{
    std::cout << "掃除：乾拭きをする" << std::endl;
}

void ClothCleaning::Ending()
{
    std::cout << "後片付け：バケツの水を捨て、雑巾とバケツをしまう" << std::endl << "終了" << std::endl;
}
