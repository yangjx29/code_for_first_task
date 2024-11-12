int main () {
    double  t9EFwAChQ37;
    t9EFwAChQ37 = 0.0;
    int SsMv0tqYe, piLBYMIt, N9R0qor7;
    float e1qZHbdYUvy [10] [2];
    scanf ("%d", &N9R0qor7);
    for (SsMv0tqYe = 0; SsMv0tqYe < N9R0qor7; SsMv0tqYe = SsMv0tqYe +1)
        scanf ("%f %f", &e1qZHbdYUvy[SsMv0tqYe][0], &e1qZHbdYUvy[SsMv0tqYe][1]);
    {
        SsMv0tqYe = 0;
        while (N9R0qor7 -1 > SsMv0tqYe) {
            {
                piLBYMIt = SsMv0tqYe +1;
                while (N9R0qor7 > piLBYMIt) {
                    if (((e1qZHbdYUvy[SsMv0tqYe][0] - e1qZHbdYUvy[piLBYMIt][0]) * (e1qZHbdYUvy[SsMv0tqYe][0] - e1qZHbdYUvy[piLBYMIt][0]) + (e1qZHbdYUvy[SsMv0tqYe][1] - e1qZHbdYUvy[piLBYMIt][1]) * (e1qZHbdYUvy[SsMv0tqYe][1] - e1qZHbdYUvy[piLBYMIt][1])) > t9EFwAChQ37)
                        t9EFwAChQ37 = (e1qZHbdYUvy[SsMv0tqYe][0] - e1qZHbdYUvy[piLBYMIt][0]) * (e1qZHbdYUvy[SsMv0tqYe][0] - e1qZHbdYUvy[piLBYMIt][0]) + (e1qZHbdYUvy[SsMv0tqYe][1] - e1qZHbdYUvy[piLBYMIt][1]) * (e1qZHbdYUvy[SsMv0tqYe][1] - e1qZHbdYUvy[piLBYMIt][1]);
                    piLBYMIt = piLBYMIt + 1;
                };
            }
            SsMv0tqYe = SsMv0tqYe +1;
        };
    }
    t9EFwAChQ37 = sqrt (t9EFwAChQ37);
    printf ("%.4f", t9EFwAChQ37);
    return 0;
}

