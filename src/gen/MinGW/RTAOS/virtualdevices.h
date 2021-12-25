#ifdef __cplusplus
extern "C" {
#endif

extern int status_printf(const vrtaTextPtr format, ...);

extern int AccelSensorValue(void);
extern int BrakeSensorValue(void);
extern int GearSwitchValue(void);

extern int SpinSensor1Value(void);
extern int SpinSensor2Value(void);
extern int SpinSensor3Value(void);
extern int SpinSensor4Value(void);

extern int FL_Speed_SensorValue(void);

extern int BatterySensorValue(void);


extern int cylinderTempSensorValue(void);
extern int cylinderPressSensorValue(void);

extern void  setFL_HydraulicModulatorVolt(int volt);
extern void  setFR_HydraulicModulatorVolt(int volt);
extern void  setRL_HydraulicModulatorVolt(int volt);
extern void  setRR_HydraulicModulatorVolt(int volt);

extern void  setPhysicGearActuator(int val);
extern void  setEngineflag(int val);
extern void  setEngineIgniteActuator(int val);
extern void  setEngineFuelActuator(int val);

extern void  setMotorActuatorLevel(int level);

extern int DebugSensorValue(void);
extern int gettempInput(void);

#ifdef __cplusplus
}
#endif
