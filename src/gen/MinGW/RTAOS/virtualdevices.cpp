#include "vrtaCore.h"
#include "vrtaSampleDevices.h"
#include "vrtaLoggerDevice.h"
#include "virtualdevices.h"

//Sensors
vrtaSensor AccelSensor("AccelSensor");
vrtaSensor BrakeSensor("BrakeSensor");
vrtaSensor GearSwitch("GearSwitch");

vrtaSensor SpinSensor1("SpinSensor1");
vrtaSensor SpinSensor2("SpinSensor2");
vrtaSensor SpinSensor3("SpinSensor3");
vrtaSensor SpinSensor4("SpinSensor4");

vrtaSensor CylinderTempSensor("CylinderTempSensor");
vrtaSensor CylinderPressSensor("CylinderPressSensor");

vrtaSensor FL_Speed_Sensor("FL_Speed_Sensor");

vrtaSensor BatterySensor("BatterySensor");

//Actuators
vrtaActuator FL_HydraulicModulator("FL_HydraulicModulator");
vrtaActuator FR_HydraulicModulator("FR_HydraulicModulator");
vrtaActuator RL_HydraulicModulator("RL_HydraulicModulator");
vrtaActuator RR_HydraulicModulator("RR_HydraulicModulator");

vrtaActuator PhysicGearActuator("PhysicGearActuator");
vrtaActuator Engineflag("Engineflag");
vrtaActuator EngineIgniteActuator("EngineIgniteActuator");
vrtaActuator EngineFuelActuator("EngineFuelActuator");

vrtaActuator MotorActuator("MotorActuator");


//Sensor functions
int AccelSensorValue(void){
	return AccelSensor.Value();
}

int BrakeSensorValue(void){
	return BrakeSensor.Value();
}

int GearSwitchValue(void){
	return GearSwitch.Value();
}
int SpinSensor1Value(void){
	return SpinSensor1.Value();
}
int SpinSensor2Value(void){
	return SpinSensor2.Value();
}
int SpinSensor3Value(void){
	return SpinSensor3.Value();
}
int SpinSensor4Value(void){
	return SpinSensor4.Value();
}

int cylinderTempSensorValue(void){
	return CylinderTempSensor.Value();
}
int cylinderPressSensorValue(void){
	return CylinderPressSensor.Value();
}

int FL_Speed_SensorValue(void) {
	return FL_Speed_Sensor.Value();
}

int BatterySensorValue(void) {
	return BatterySensor.Value();
}


//Actuator functions
void  setFL_HydraulicModulatorVolt(int volt){
	FL_HydraulicModulator.SetValue(volt);
}
void  setFR_HydraulicModulatorVolt(int volt){
	FR_HydraulicModulator.SetValue(volt);
}
void  setRL_HydraulicModulatorVolt(int volt){
	RL_HydraulicModulator.SetValue(volt);
}
void  setRR_HydraulicModulatorVolt(int volt){
	RR_HydraulicModulator.SetValue(volt);
}

void  setPhysicGearActuator(int val){
	PhysicGearActuator.SetValue(val);
}
void  setEngineflag(int val){
	Engineflag.SetValue(val);
}
void  setEngineIgniteActuator(int val){
	EngineIgniteActuator.SetValue(val);
}
void  setEngineFuelActuator(int val){
	EngineFuelActuator.SetValue(val);
}

void  setMotorActuatorLevel(int level){
	MotorActuator.SetValue(level);
}



Logger Status("Status");

int status_printf(const vrtaTextPtr format, ...){
	va_list argptr;
	va_start(argptr, format);
	int ret = Status.printf(format, argptr);
	va_end(argptr);
	return ret;
}


void InitializeDevices(void){
}

//exists for debug
vrtaSensor DebugSensor("DebugSensor");
int DebugSensorValue(void) {
	return DebugSensor.Value();
}

vrtaSensor tempInput("tempInput");
int gettempInput(void){
	return tempInput.Value();
}
