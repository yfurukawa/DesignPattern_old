#include "StopWatchSubject.h"
#include "StopWatchForm.h"
#include "IStopWatchObserver.h"
#include "DigitalLap.h"
#include "GaugeLap.h"

int main(int argc, char* argv[]) {

    StopWatchForm* subject = new StopWatchForm();
    DigitalLap* digital = new DigitalLap();
    GaugeLap* gauge = new GaugeLap();

    subject->attachObserver(digital);
    subject->attachObserver(gauge);

    subject->run();

    delete gauge;
    delete digital;
    delete subject;

  return 0;
}

