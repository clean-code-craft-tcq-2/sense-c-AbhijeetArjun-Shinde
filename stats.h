
Stats compute_statistics(const float* numberset, int setlength);
typedef void (*alerter_funcptr)(float maxThreshold,Stats computedStats);
void check_and_alert(float maxThreshold, alerter_funcptr alerters[],Stats computedStats);
void emailAlerter(float Threshold,Stats computedStats);
void ledAlerter(float Threshold,Stats computedStats);


typedef struct
{
  float average;
  float max;
  float min;
}Stats;

extern int emailAlertCallCount;
extern int ledAlertCallCount;


