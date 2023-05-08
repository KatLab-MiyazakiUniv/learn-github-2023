#ifndef PID_GAIN_H
#define PID_GAIN_H

class PidGain{
    public:
    double kp:
    double ki:
    double kd:

    Pidgain(double _kp = 0.6, double _ki = 0.8, double _kd = 0.04);
};

#endif