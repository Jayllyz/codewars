//codewars.com/kata/52685f7382004e774f0001f7
#include <stdio.h>
#include <string.h>

char *human_readable_time (unsigned seconds, char *time_string)
{ 
  if (seconds == 0) {
    snprintf(time_string, 9, "00:00:00");
    return time_string;
  }
  
  unsigned s = seconds % 60;

  unsigned mins = seconds / 60;

  unsigned hours = mins / 60;
  mins %=60;

  snprintf(time_string, 9, "%02d:%02d:%02d", hours, mins, s);
  
  return time_string;
}

int main(int argc, char const *argv[])
{
  char time_string[9];
  printf("%s\n", human_readable_time(0, time_string));
  printf("%s\n", human_readable_time(359999, time_string));
  printf("%s\n", human_readable_time(3599, time_string));
  printf("%s\n", human_readable_time(45296, time_string));
  printf("%s\n", human_readable_time(86399, time_string));
  
  return 0;
};