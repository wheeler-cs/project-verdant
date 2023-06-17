#ifndef GUARD_PLAY_TIME_H
#define GUARD_PLAY_TIME_H

void PlayTimeCounter_Reset(void);
void PlayTimeCounter_Start(void);
void PlayTimeCounter_Stop(void);
void PlayTimeCounter_Update(void);
void PlayTimeCounter_SetToMax(void);

#ifdef BIG_PLAY_TIME
    #define MAX_PLAY_TIME_HOURS 9999
#else
    #define MAX_PLAY_TIME_HOURS 999
#endif

#define MAX_PLAY_TIME_MINUTES 59
#define MAX_PLAY_TIME_SECONDS 59
#define MAX_PLAY_TIME_FRAMES  59

#endif // GUARD_PLAY_TIME_H
