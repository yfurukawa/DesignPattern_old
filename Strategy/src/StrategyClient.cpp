/*
 * Copyright
 *
*/
#include <iostream>
#include "./StrategyClient.h"
#include "Cleaning.h"
#include "FlapCleaning.h"
#include "ClothCleaning.h"
#include "WaxCleaning.h"

StrategyClient::StrategyClient() : cleaner_(NULL) {
}

StrategyClient::~StrategyClient() {
}


void StrategyClient::run() {
    cleaner_ = new Cleaning(new FlapCleaning());
    cleaner_->DoCleaning();
    delete cleaner_;
    std::cout << std::endl;

    cleaner_ = new Cleaning(new ClothCleaning());
    cleaner_->DoCleaning();
    delete cleaner_;
    std::cout << std::endl;

    cleaner_ = new Cleaning(new WaxCleaning());
    cleaner_->DoCleaning();
    delete cleaner_;
}

