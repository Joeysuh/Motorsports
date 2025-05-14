/*
ECU Simulation Logic
DO NOT DISTRIBUTE
Copyright (C) 2025, Joey Suh
*/

#include "ecu_logic.hpp"
#include <iostream>

EngineControlUnit::EngineControlUnit()
    : throttlePosition(0), rpm(0), engineTemp(20), fuelAmount(0), ignitionTimings(0), turboBoostLevel(0) {}

void EngineControlUnit::updateThrottlePosition(float position) {
    throttlePosition = position;
}

void EngineControlUnit::updateRpm(int rpm) {
    this->rpm = rpm;
}

void EngineControlUnit::updateTemperature(float temp) {
    engineTemp = temp;
}

void EngineControlUnit::fuelInjection(){
    /*
    Systems modeling of a simulated fuelInjection system. 
    0.0 is no throttle and 1.0 indicates full throttle
    0.1f is a unitless scaling factor
    use 1000 as an arbitrary max fuel cap (in L)
    */
    fuelAmount = throttlePosition * 0.1f * rpm;
    if (fuelAmount > 1000) fuelAmount = 1000; 
    std::cout << "Fuel injected: " << fuelAmount << " L" << std::endl;
}

void EngineControlUnit::ignitionTiming() {
    // Simple ignition timing model based on RPM (complex tuning can be done)
    ignitionTimings = 15 + (rpm / 1000);
    std::cout << "Ignition timing: " << ignitionTiming << " degrees BTDC" << std::endl;
}



