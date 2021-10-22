#include "stats.h"
int emailAlertCallCount = 0;
int ledAlertCallCount = 0;


struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    float total_sum = 0 ;
    float max_value = numberset[0];
    float min_value = numberset[0];
    
    if(setlength != 0 )
    {
        for(i =0 ; i < setlength ; i++)
        {
            total_sum += numberset[i];
        
            if( max_value > numberset[i] )
            {
                max_value = numberset[i] 
            }
        
            if(min_value > numberset[i])
            {
                min_value=numberset[i]
            }
        }
   
        s.average = total_sum/setlength;
        s.min = min_value;
        s.max = max_value;
    }
    else
    {
        s.average = NaN;
        s.min = NaN;
        s.max = NaN;  
    }
    
    return s;
}


