#ifndef COMMAND_MQTT_H
#define COMMAND_MQTT_H

#ifdef USES_MQTT

class String;

String Command_MQTT_Retain(struct EventStruct *event,
                           const char         *Line);

// FIXME TD-er: Command never called.
String Command_MQTT_UseUnitNameAsClientId(struct EventStruct *event,
                                          const char         *Line);
String Command_MQTT_messageDelay(struct EventStruct *event,
                                 const char         *Line);
String Command_MQTT_Publish(struct EventStruct *event,
                            const char         *Line);




//MFD: adding subscribe command
extern void setIntervalTimerOverride(unsigned long id, unsigned long msecFromNow); //defined in Scheduler.ino
boolean MQTTsubscribe(int controller_idx, const char* topic, boolean retained);
String Command_MQTT_Subscribe(struct EventStruct *event, const char* Line);

#endif // ifdef USES_MQTT

#endif // COMMAND_MQTT_H
