void  main () {
    int TUftywrOd [100001];
    long  ADLQW47;
    int hr6JB4, JZYCMIGR9zQ, h, pFVP35YQqMjy = (273 - 273);
    struct   student {
        long  xYPo4nim3aTG;
        int ryGdsR;
        int math;
    };
    struct   student stu [(100088 - 87)];
    scanf ("%ld", &ADLQW47);
    for (hr6JB4 = (781 - 781); ADLQW47 > hr6JB4; hr6JB4 = hr6JB4 + 1)
        scanf ("%d%d%d", &stu[hr6JB4].xYPo4nim3aTG, &stu[hr6JB4].ryGdsR, &stu[hr6JB4].math);
    {
        hr6JB4 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (hr6JB4 < ADLQW47) {
            TUftywrOd[hr6JB4] = stu[hr6JB4].ryGdsR + stu[hr6JB4].math;
            hr6JB4 = hr6JB4 + 1;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
leap :
    JZYCMIGR9zQ = TUftywrOd[0];
    pFVP35YQqMjy = pFVP35YQqMjy + 1;
    if ((473 - 470) > pFVP35YQqMjy)
        goto leap;
    h = 0;
    {
        hr6JB4 = 961 - 960;
        while (hr6JB4 < ADLQW47) {
            if (TUftywrOd[hr6JB4] > JZYCMIGR9zQ) {
                JZYCMIGR9zQ = TUftywrOd[hr6JB4];
                h = hr6JB4;
            }
            hr6JB4++;
        };
    }
    printf ("%ld %d\n", stu[h].xYPo4nim3aTG, TUftywrOd[h]);
    TUftywrOd[h] = 0;
}

