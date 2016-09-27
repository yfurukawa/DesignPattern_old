/*
 * Copyright
 *
*/
#include <iostream>
#include "./Cleaning.h"
#include "ICleaning.h"

Cleaning::Cleaning( ICleaning* cleaning ) : cleaning_(NULL)
{
    cleaning_ = cleaning;
}

void Cleaning::DoCleaning()
{
    cleaning_->ShowCleaningMethod();
    cleaning_->Start();
    cleaning_->PreWork();
    cleaning_->DoWork();
    cleaning_->PostWork();
    cleaning_->Ending();
}

Cleaning::Cleaning() : cleaning_(NULL){
}

Cleaning::~Cleaning() {
}
