int main () {
    int FpbWicej, PiPHpSyF2ILD [50000] [5], i, j, min, max, s, jEOLRpjidK;
    double  q;
    scanf ("%d", &FpbWicej);
    {
        i = 0;
        while (FpbWicej > i) {
            {
                j = 0;
                while (2 > j) {
                    scanf ("%d", &PiPHpSyF2ILD[i][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
            i++;
        };
    }
    j = 0;
    {
        i = 0;
        while (FpbWicej > i) {
            if (!(0 != i)) {
                min = PiPHpSyF2ILD[i][j];
            }
            else {
                if (PiPHpSyF2ILD[i][j] <= min) {
                    min = PiPHpSyF2ILD[i][j];
                };
            }
            i++;
        };
    }
    j = 1;
    {
        i = 0;
        while (FpbWicej > i) {
            if (i == 0) {
                max = PiPHpSyF2ILD[i][j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (max <= PiPHpSyF2ILD[i][j]) {
                    max = PiPHpSyF2ILD[i][j];
                };
            }
            i++;
        };
    }
    jEOLRpjidK = 1;
    for (q = min + 0.3; max >= q; q = q + 1) {
        s = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            i = 0;
            while (i < FpbWicej) {
                if (q >= PiPHpSyF2ILD[i][0] && q <= PiPHpSyF2ILD[i][1]) {
                    s = s * 0;
                    break;
                }
                else {
                    s = s * 1;
                }
                i++;
            };
        }
        if (s == 0) {
            jEOLRpjidK = jEOLRpjidK * 1;
        }
        else {
            jEOLRpjidK = jEOLRpjidK * 0;
        };
    }
    if (jEOLRpjidK == 1 && FpbWicej >= 3) {
        printf ("%d %d", min, max);
    }
    else {
        printf ("no");
    }
    return 0;
}

