#include "mbed.h"
#include "carAtEntrance.h"
#include "arm_book_lib.h"
int main()
{
    // Initialize the car detection system
    carAtEntranceInit();
    while (true) {
        carAtEntranceUpdate();
        
        delay(100);

    }
}