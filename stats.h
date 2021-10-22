
struct Stats compute_statistics(const float* numberset, int setlength);
typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);
void emailAlerter(float Threshold,struct StatscomputedStats);
void ledAlerter(float Threshold,struct StatscomputedStats);


struct Stats
{
  float average;
  float max;
  float min;
};
extern int emailAlertCallCount;
extern int ledAlertCallCount;
