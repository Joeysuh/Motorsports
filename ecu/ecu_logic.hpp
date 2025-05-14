#ifndef ECU_LOGIC_HPP
#define ECU_LOGIC_HPP

class EngineControlUnit{
public:

    EngineControlUnit();

    void updateThrottlePosition(float position);
    void updateRpm(int rpm);
    void updateTemperature(float temp);
    
    // engine behaviour
    void fuelInjection();
    void ignitionTiming();
    void turboControl();
    
    // enginte status
    float getFuelAmount() const;
    float getIgnitionTiming() const;
    float getTurboBoostLevel() const;

    private:
    float throttlePosition;
    int rpm;
    float engineTemp;
    float fuelAmount;
    float ignitionTimings;
    float turboBoostLevel;
};

#endif // ECU_LOGIC_HPP