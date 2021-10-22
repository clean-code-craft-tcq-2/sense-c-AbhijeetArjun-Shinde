
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

struct __exception {
    int    type;      /* Exception type */
    char*  name;      /* Name of function causing exception */
    double arg1;      /* 1st argument to function */
    double arg2;      /* 2nd argument to function */
    double retval;    /* Function return value */
};
