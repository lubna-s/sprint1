#include "SmartGeyser.h"

SmartGeyser::SmartGeyser(HomeOwner* owner, EnvironmentSensor* sensor, WaterHeater* heater)
    : owner(owner), sensor(sensor), heater(heater) {}

void SmartGeyser::activateGeyser() {
    if (owner->getAwake()) {
        // Check season and temperature using the sensor
        if (sensor->detectSeason() && sensor->detectTemperature() < 30.0) {
            heater->heatWater();
            // Additional activation logic if needed
        }
    }
}

void SmartGeyser::deactivateGeyser() {
    // Deactivation logic if needed
}
