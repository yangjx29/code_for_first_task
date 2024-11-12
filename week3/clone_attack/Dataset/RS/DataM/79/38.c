int LjFmr2Qd (int gC5m4R, int O2dhS8R) {
    if (!(O2dhS8R != gC5m4R))
        gC5m4R = 0;
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
    return gC5m4R;
}

int choose (int O2dhS8R, int N7qA3uC) {
    int gC5m4R;
    int i8hgtZ2;
    int PCVMqFmdQEL;
    gC5m4R = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int a [301] = {0};
    {
        PCVMqFmdQEL = 0;
        while (PCVMqFmdQEL < O2dhS8R -1) {
            PCVMqFmdQEL = PCVMqFmdQEL +1;
            {
                i8hgtZ2 = 0;
                while (N7qA3uC > i8hgtZ2) {
                    i8hgtZ2 = i8hgtZ2 + 1;
                    for (; a[LjFmr2Qd (gC5m4R, O2dhS8R) + 1] != 0;) {
                        gC5m4R = LjFmr2Qd (gC5m4R, O2dhS8R) + 1;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        };
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
                    gC5m4R = LjFmr2Qd (gC5m4R, O2dhS8R) + 1;
                };
            }
            a[gC5m4R] = 1;
        };
    }
    for (PCVMqFmdQEL = 1; a[PCVMqFmdQEL] != 0;) {
        PCVMqFmdQEL = LjFmr2Qd (PCVMqFmdQEL, O2dhS8R) + 1;
    }
    return PCVMqFmdQEL;
}

int main () {
    int O2dhS8R [100];
    int N7qA3uC [100];
    int i8hgtZ2;
    int pmPaHcrFMzf1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (i8hgtZ2 = 0;; i8hgtZ2 = i8hgtZ2 + 1) {
        scanf ("%d %d", &O2dhS8R[i8hgtZ2], &N7qA3uC[i8hgtZ2]);
        if (O2dhS8R[i8hgtZ2] == 0)
            break;
    }
    pmPaHcrFMzf1 = i8hgtZ2;
    for (i8hgtZ2 = 0; i8hgtZ2 < pmPaHcrFMzf1; i8hgtZ2 = i8hgtZ2 + 1) {
        printf ("%d\n", choose (O2dhS8R[i8hgtZ2], N7qA3uC[i8hgtZ2]));
    }
    return 0;
}

