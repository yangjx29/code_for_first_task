void  main () {
    char z1tMdf7Du [100] [102];
    char JA3vsicp [100] [102];
    char c [100] [102];
    int n;
    int LyAqngU;
    int NVh3g4ks7z;
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
    int qU0Z4Ar;
    int kANEQv34Vrs;
    int l;
    scanf ("%d", &n);
    for (LyAqngU = (474 - 474); n > LyAqngU; LyAqngU++) {
        scanf ("%s", z1tMdf7Du[LyAqngU]);
        scanf ("%s", JA3vsicp[LyAqngU]);
        kANEQv34Vrs = strlen (z1tMdf7Du[LyAqngU]);
        qU0Z4Ar = strlen (JA3vsicp[LyAqngU]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (NVh3g4ks7z = kANEQv34Vrs - 1; kANEQv34Vrs - qU0Z4Ar <= NVh3g4ks7z; NVh3g4ks7z--) {
            if (JA3vsicp[LyAqngU][NVh3g4ks7z +qU0Z4Ar - kANEQv34Vrs] > z1tMdf7Du[LyAqngU][NVh3g4ks7z]) {
                c[LyAqngU][NVh3g4ks7z] = z1tMdf7Du[LyAqngU][NVh3g4ks7z] + 58 - JA3vsicp[LyAqngU][NVh3g4ks7z +qU0Z4Ar - kANEQv34Vrs];
                z1tMdf7Du[LyAqngU][NVh3g4ks7z -1]--;
            }
            else
                c[LyAqngU][NVh3g4ks7z] = z1tMdf7Du[LyAqngU][NVh3g4ks7z] + 48 - JA3vsicp[LyAqngU][NVh3g4ks7z +qU0Z4Ar - kANEQv34Vrs];
        }
        {
            NVh3g4ks7z = 0;
            while (kANEQv34Vrs - qU0Z4Ar > NVh3g4ks7z) {
                if ('0' <= z1tMdf7Du[LyAqngU][NVh3g4ks7z])
                    c[LyAqngU][NVh3g4ks7z] = z1tMdf7Du[LyAqngU][NVh3g4ks7z];
                else
                    c[LyAqngU][NVh3g4ks7z] = z1tMdf7Du[LyAqngU][NVh3g4ks7z] + 10;
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
                NVh3g4ks7z++;
            };
        }
        c[LyAqngU][kANEQv34Vrs] = '\0';
        for (NVh3g4ks7z = 0; kANEQv34Vrs > NVh3g4ks7z; NVh3g4ks7z++) {
            if (!('0' == c[LyAqngU][NVh3g4ks7z]))
                break;
        }
        if (z1tMdf7Du[LyAqngU][0] == '0') {
            NVh3g4ks7z = 0;
            while (NVh3g4ks7z < kANEQv34Vrs) {
                c[LyAqngU][NVh3g4ks7z] = c[LyAqngU][NVh3g4ks7z +1];
                NVh3g4ks7z++;
            };
        };
    }
    {
        LyAqngU = 0;
        while (LyAqngU < n) {
            puts (c [LyAqngU]);
            LyAqngU++;
        };
    };
}

