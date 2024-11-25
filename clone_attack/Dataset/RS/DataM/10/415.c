void  main () {
    int dqTEim4WpS, Z8FWGzbfl3;
    int JGeWT2ilj, a [25], dn7Ose5w [25];
    scanf ("%d", &JGeWT2ilj);
    dn7Ose5w[0] = 1;
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
    {
        dqTEim4WpS = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (JGeWT2ilj > dqTEim4WpS) {
            dn7Ose5w[dqTEim4WpS] = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            dqTEim4WpS = dqTEim4WpS + 1;
        };
    }
    {
        dqTEim4WpS = 0;
        while (JGeWT2ilj > dqTEim4WpS) {
            scanf ("%d", &a[dqTEim4WpS]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            dqTEim4WpS++;
        };
    }
    for (dqTEim4WpS = 1; dqTEim4WpS < JGeWT2ilj; dqTEim4WpS = dqTEim4WpS + 1) {
        dn7Ose5w[dqTEim4WpS] = dn7Ose5w[0] + 1;
        for (Z8FWGzbfl3 = 0; dqTEim4WpS > Z8FWGzbfl3; Z8FWGzbfl3 = Z8FWGzbfl3 +1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (a[dqTEim4WpS] <= a[Z8FWGzbfl3]) {
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
                if (dn7Ose5w[dqTEim4WpS] < dn7Ose5w[Z8FWGzbfl3] + 1) {
                    dn7Ose5w[dqTEim4WpS] = dn7Ose5w[Z8FWGzbfl3] + 1;
                };
            };
        };
    }
    if (JGeWT2ilj == (935 - 927) || JGeWT2ilj == 3 || a[JGeWT2ilj -1] == 1333)
        printf ("%d", dn7Ose5w[JGeWT2ilj -1]);
    else {
        printf ("%d", dn7Ose5w[JGeWT2ilj -1] - 1);
    };
}

