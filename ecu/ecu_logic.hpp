#ifndef ECU_LOGIC_HPP
#define ECU_LOGIC_HPP

class EngineControlUnit{
public:

    EngineControlUnit();

    void updateThrottlePosition(float position);
    void updateRpm(int rpm);
    
};




#endif // ECU_LOGIC_HPP