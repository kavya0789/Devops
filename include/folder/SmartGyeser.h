#ifndef SMARTGYESER_h
#define SMARTGYESER_h
#include <string>
class SmartGyeser {
public:
    string season;
    double temperature;
    EnvironmentSensor(string season, double temperature):season(season),temperature(temperature){}
    string getSeason() const
    {
         return season;
    }
    void setSeason(const string& newSeason)
    {
        season = newSeason;
    }

    double getTemperature() const
    {
        return temperature;
    }
    void setTemperature(double newTemperature)
    {
        temperature = newTemperature;
    }
};
class WaterHeater {

    public:
        int temperature;
        WaterHeater(int temperature) : temperature(temperature)
        {}
        int getTemperature() const
        {
             return temperature;
        }
        void setTemperature(int newTemperature)
        {
            temperature = newTemperature;
        }
};

class SmartGeyser : public WaterHeater, public EnvironmentSensor
{
    public:
    SmartGeyser(string season, double temperature, int heaterTemperature): WaterHeater(heaterTemperature), EnvironmentSensor(season, temperature)
    {}
};

#endif
