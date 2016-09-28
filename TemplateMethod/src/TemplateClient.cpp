/*
 * Copyright
 *
*/
#include <iostream>
#include "./TemplateClient.h"
#include "Cleaning.h"
#include "FlapCleaning.h"
#include "ClothCleaning.h"
#include "WaxCleaning.h"

TemplateClient::TemplateClient() : cleaner_(NULL){
}

TemplateClient::~TemplateClient() {
}

void TemplateClient::run()
{
    cleaner_ = new FlapCleaning();
    cleaner_->DoCleaning();
    delete cleaner_;
    std::cout << std::endl;

    cleaner_ = new ClothCleaning();
    cleaner_->DoCleaning();
    delete cleaner_;
    std::cout << std::endl;

    cleaner_ = new WaxCleaning();
    cleaner_->DoCleaning();
    delete cleaner_;
    std::cout << std::endl;
}
