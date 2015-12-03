#ifndef _INERTIAL_SENSOR_H
#define _INERTIAL_SENSOR_H

class InertialSensor {
public:
    virtual bool initialize() = 0;
    virtual bool probe() = 0;
    virtual void update() = 0;

    float read_temperature() {return temperature;};
    void read_accelerometer(float *acc_values) {memcpy(acc_values, accelerometer_data, sizeof(accelerometer_data));};
    void read_gyroscope(float *gyro_values) {memcpy(gyro_values, gyroscope_data, sizeof(gyroscope_data));};
    void read_magnetometer(float *mag_values) {memcpy(mag_values, magnetometer_data, sizeof(magnetometer_data));};

protected:
    float temperature;
    float accelerometer_data[3];
    float gyroscope_data[3];
    float magnetometer_data[3];
};

#endif //_INERTIAL_SENSOR_H
