int main (int ABjgWoAZ2eaF, char *fkXL6CdhPy []) {
    int n;
    int y;
    int ugZVDGc1;
    int m2;
    int days [] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
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
    int kTvNm63;
    int j, HWter0 = 0;
    scanf ("%d", &n);
    {
        kTvNm63 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > kTvNm63) {
            HWter0 = 0;
            days[2] = 28;
            scanf ("%d%d%d", &y, &ugZVDGc1, &m2);
            if ((!(0 != y % 4)) && (!(0 == y % 100)) || (!(0 != y % 400))) {
                days[2]++;
            }
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
            if (m2 > ugZVDGc1) {
                j = ugZVDGc1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (j < m2) {
                    HWter0 += days[j];
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
                    j = j + 1;
                };
            }
            else {
                j = m2;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (j < ugZVDGc1) {
                    HWter0 += days[j];
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
                    j++;
                };
            }
            if (HWter0 % 7 == 0) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            }
            else {
            }
            kTvNm63++;
        };
    }
    return 0;
}

