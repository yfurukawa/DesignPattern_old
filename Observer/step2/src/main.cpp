#include "StopWatchSubject.h"
#include "StopWatchFactory.h"
#include "StopWatchForm.h"
#include "IStopWatchObserver.h"
#include "DigitalLap.h"
#include "GaugeLap.h"

int main(int argc, char* argv[]) {

    StopWatchSubject* subject = StopWatchFactory::getInstance().getStopWatch();
    DigitalLap* digital = new DigitalLap();
    GaugeLap* gauge = new GaugeLap();

    dynamic_cast<StopWatchForm*>(subject)->run();

    delete gauge;
    delete digital;
    delete subject;

  return 0;
}

