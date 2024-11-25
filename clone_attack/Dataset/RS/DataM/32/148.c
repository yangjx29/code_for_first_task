int main () {
    int n, JLJEDFI;
    scanf ("%d", &n);
    {
        JLJEDFI = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (JLJEDFI <= n) {
            char s1 [101], y2QbkM0 [101] = {'0'}, ztDLaUKwv [101] = {'\0'};
            int wRjnhI6Laq, T6GjF1Rp, PbO9cygD, lsZK2dzw = 0;
            scanf ("%s", s1);
            scanf ("%s", y2QbkM0);
            wRjnhI6Laq = strlen (s1);
            T6GjF1Rp = strlen (y2QbkM0);
            {
                PbO9cygD = 1;
                while (T6GjF1Rp >= PbO9cygD) {
                    int x, y, M826FyjRuC;
                    x = s1[wRjnhI6Laq - PbO9cygD] - '0';
                    y = y2QbkM0[T6GjF1Rp -PbO9cygD] - '0';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    ztDLaUKwv[wRjnhI6Laq - PbO9cygD] = M826FyjRuC +'0';
                    PbO9cygD++;
                    if (x + lsZK2dzw >= y) {
                        M826FyjRuC = x - y + lsZK2dzw;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        }
                        lsZK2dzw = 0;
                    }
                    else {
                        M826FyjRuC = 10 + x - y + lsZK2dzw;
                        lsZK2dzw = -1;
                    };
                };
            }
            if (wRjnhI6Laq > T6GjF1Rp) {
                int k, jVuAL7cZsaw;
                k = s1[wRjnhI6Laq - T6GjF1Rp -1] - '0';
                ztDLaUKwv[wRjnhI6Laq - T6GjF1Rp -1] = k + lsZK2dzw + '0';
                {
                    jVuAL7cZsaw = 0;
                    while (jVuAL7cZsaw < wRjnhI6Laq - T6GjF1Rp -1) {
                        ztDLaUKwv[jVuAL7cZsaw] = s1[jVuAL7cZsaw];
                        jVuAL7cZsaw = jVuAL7cZsaw + 1;
                    };
                };
            }
            printf ("%s", ztDLaUKwv);
            JLJEDFI = JLJEDFI +1;
        };
    }
    return 0;
}

