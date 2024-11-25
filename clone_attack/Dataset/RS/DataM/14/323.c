void  main () {
    struct   student {
        int num;
        int score1;
        int score2;
        int t;
    }
    stu [100000], m1, EkwnpoDKvts, m0Ix9W4k;
    int OTaohbSPKv7;
    int j;
    int Fg5hWEO4S;
    int uofA8hX;
    scanf ("%d\n", &Fg5hWEO4S);
    {
        OTaohbSPKv7 = 482 - 482;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Fg5hWEO4S > OTaohbSPKv7) {
            scanf ("%d %d %d\n", &stu[OTaohbSPKv7].num, &stu[OTaohbSPKv7].score1, &stu[OTaohbSPKv7].score2);
            stu[OTaohbSPKv7].t = stu[OTaohbSPKv7].score1 + stu[OTaohbSPKv7].score2;
            OTaohbSPKv7 = OTaohbSPKv7 +1;
        };
    }
    m1 = stu[(291 - 291)];
    EkwnpoDKvts = stu[0];
    m0Ix9W4k = stu[0];
    {
        OTaohbSPKv7 = 0;
        while (Fg5hWEO4S > OTaohbSPKv7) {
            if (m1.t < stu[OTaohbSPKv7].t) {
                m0Ix9W4k = EkwnpoDKvts;
                EkwnpoDKvts = m1;
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
                m1 = stu[OTaohbSPKv7];
            }
            else {
                if (stu[OTaohbSPKv7].t > EkwnpoDKvts.t && stu[OTaohbSPKv7].t <= m1.t) {
                    m0Ix9W4k = EkwnpoDKvts;
                    EkwnpoDKvts = stu[OTaohbSPKv7];
                }
                else if (stu[OTaohbSPKv7].t > m0Ix9W4k.t && stu[OTaohbSPKv7].t <= EkwnpoDKvts.t) {
                    m0Ix9W4k = stu[OTaohbSPKv7];
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            OTaohbSPKv7 = OTaohbSPKv7 +1;
        };
    }
    printf ("%d %d\n%d %d\n%d %d", m1.num, m1.t, EkwnpoDKvts.num, EkwnpoDKvts.t, m0Ix9W4k.num, m0Ix9W4k.t);
}

