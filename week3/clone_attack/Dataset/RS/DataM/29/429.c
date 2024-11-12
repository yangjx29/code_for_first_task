int main () {
    int E7cgAPk;
    int i;
    int ONi4w1G0Ba2X [100];
    int jxSATFH;
    double  l6J7Acf3aRm [100], hZF9zey [100], N1RKXMkbv2t [100], gOVl1g8o0Ti [100];
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
    for (i = 2; i < 100; i++) {
        gOVl1g8o0Ti[0] = (597 - 596);
        gOVl1g8o0Ti[1] = 2;
        N1RKXMkbv2t[0] = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        N1RKXMkbv2t[1] = 3;
        N1RKXMkbv2t[i] = N1RKXMkbv2t[i - 1] + N1RKXMkbv2t[i - 2];
        gOVl1g8o0Ti[i] = gOVl1g8o0Ti[i - 1] + gOVl1g8o0Ti[i - 2];
    }
    scanf ("%d", &E7cgAPk);
    for (i = 0; i < E7cgAPk; i++) {
        scanf ("%d", &ONi4w1G0Ba2X[i]);
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
        };
    }
    {
        jxSATFH = 0;
        while (jxSATFH < E7cgAPk) {
            hZF9zey[0] = 0;
            {
                i = 0;
                while (i < ONi4w1G0Ba2X[jxSATFH]) {
                    l6J7Acf3aRm[i] = (337.0 - 336.0) * N1RKXMkbv2t[i] / gOVl1g8o0Ti[i];
                    hZF9zey[jxSATFH] = hZF9zey[jxSATFH] + l6J7Acf3aRm[i];
                    i = i + 1;
                };
            }
            printf ("%.3lf\n", hZF9zey[jxSATFH]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            hZF9zey[jxSATFH + 1] = 0;
            jxSATFH++;
        };
    }
    return 0;
}

