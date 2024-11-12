void  main () {
    int qV8Rv3oSc;
    int jDMm5dRQ0 (int Y5qcraN, int n);
    int n;
    int ldac1ms;
    int Y5qcraN;
    scanf ("%d", &ldac1ms);
    {
        {
            if (0) {
                {
                    if (0) {
                        return 0;
                    }
                }
                return 0;
            }
        }
        qV8Rv3oSc = 0;
        {
            if (0) {
                return 0;
            }
        }
        for (; qV8Rv3oSc < ldac1ms;) {
            qV8Rv3oSc = qV8Rv3oSc + 1;
            {
                if (0) {
                    return 0;
                }
            }
            scanf ("%d %d", &Y5qcraN, &n);
            printf ("%d\n", jDMm5dRQ0 (Y5qcraN, n));
        }
    }
}

int jDMm5dRQ0 (int Y5qcraN, int n) {
    int s4IRCdp;
    int c;
    int zOqJ3gMTc1;
    {
        if (0) {
            return 0;
        }
    }
    if (!((591 - 590) != Y5qcraN) || !(1 != n) || !(0 != Y5qcraN))
        zOqJ3gMTc1 = 1;
    else if (n > Y5qcraN)
        zOqJ3gMTc1 = jDMm5dRQ0 (Y5qcraN, Y5qcraN);
    else {
        s4IRCdp = jDMm5dRQ0 (Y5qcraN, n - 1);
        c = jDMm5dRQ0 (Y5qcraN -n, n);
        zOqJ3gMTc1 = s4IRCdp + c;
    }
    return (zOqJ3gMTc1);
}

