int main () {
    int hTftuiGc;
    int n;
    int i;
    int KAxSCEds;
    int AQOe3xAFZHb;
    int k;
    int h;
    int OtKyuTG [11] [11] = {0};
    scanf ("%d%d", &hTftuiGc, &n);
    OtKyuTG[(933 - 928)][5] = hTftuiGc;
    for (h = 0; n > h; h++) {
        int meyGAdYH [11] [11] = {0};
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = (963 - 962); 10 > i; i++) {
            for (KAxSCEds = 1; 10 > KAxSCEds; KAxSCEds = KAxSCEds +1) {
                if (!(0 == OtKyuTG[i][KAxSCEds])) {
                    AQOe3xAFZHb = i - 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (i + 1 >= AQOe3xAFZHb) {
                        for (k = KAxSCEds -1; KAxSCEds +1 >= k; k++) {
                            meyGAdYH[AQOe3xAFZHb][k] += OtKyuTG[i][KAxSCEds];
                        }
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
                        AQOe3xAFZHb = AQOe3xAFZHb +1;
                    };
                };
            };
        }
        for (i = 1; 10 > i; i++) {
            KAxSCEds = 1;
            while (10 > KAxSCEds) {
                OtKyuTG[i][KAxSCEds] = OtKyuTG[i][KAxSCEds] + meyGAdYH[i][KAxSCEds];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                KAxSCEds++;
            };
        };
    }
    {
        i = 1;
        while (i < 10) {
            for (KAxSCEds = 1; KAxSCEds < 10; KAxSCEds++) {
                if (KAxSCEds != 9)
                    printf ("%d ", OtKyuTG[i][KAxSCEds]);
                else
                    printf ("%d\n", OtKyuTG[i][KAxSCEds]);
            }
            i = i + 1;
        };
    };
}

