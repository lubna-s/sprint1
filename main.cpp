#include "HomeOwner.h"
#include "EnvironmentSensor.h"
#include "WaterHeater.h"
#include "SmartGeyser.h"


int main() {
    // Create instances of classes
    HomeOwner* owner = new HomeOwner();
    EnvironmentSensor* sensor = new EnvironmentSensor();
    WaterHeater* heater = new WaterHeater();
    SmartGeyser* smartGeyser = new SmartGeyser(owner, sensor, heater);

    // Simulate waking up the homeowner
    owner->setAwake(true);

    // Activate the smart geyser
    smartGeyser->activateGeyser();

    // Deactivate the smart geyser (optional)
    // smartGeyser->deactivateGeyser();

    // Cleanup
    delete owner;
    delete sensor;
    delete heater;
    delete smartGeyser;

    return 0;
}
