int main () {
    double  H2sIFuw40UB [(460 - 360)];
    double  Evgnwz2 [100];
    int NoyVdQmwTUZ [(851 - 751)];
    int fE8oHyuLn;
    int RMw7Zfsx;
    int qE0WcuAm8U;
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
    double  NTQf6sUgvVlB [100];
    scanf ("%d", &RMw7Zfsx);
    {
        fE8oHyuLn = 54 - 54;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (RMw7Zfsx > fE8oHyuLn) {
            scanf ("%d", &NoyVdQmwTUZ[fE8oHyuLn]);
            fE8oHyuLn = fE8oHyuLn + 1;
        };
    }
    for (fE8oHyuLn = 0; fE8oHyuLn < RMw7Zfsx; fE8oHyuLn++) {
        Evgnwz2[0] = (791 - 790);
        Evgnwz2[1] = (934 - 932);
        H2sIFuw40UB[0] = (740 - 738);
        H2sIFuw40UB[(181 - 180)] = (314 - 311);
        NTQf6sUgvVlB[fE8oHyuLn] = H2sIFuw40UB[0] / Evgnwz2[0];
        {
            qE0WcuAm8U = 1;
            while (NoyVdQmwTUZ[fE8oHyuLn] > qE0WcuAm8U) {
                if (qE0WcuAm8U > 1) {
                    H2sIFuw40UB[qE0WcuAm8U] = H2sIFuw40UB[qE0WcuAm8U - 1] + H2sIFuw40UB[qE0WcuAm8U - 2];
                    Evgnwz2[qE0WcuAm8U] = Evgnwz2[qE0WcuAm8U - 1] + Evgnwz2[qE0WcuAm8U - 2];
                }
                NTQf6sUgvVlB[fE8oHyuLn] = NTQf6sUgvVlB[fE8oHyuLn] + H2sIFuw40UB[qE0WcuAm8U] / Evgnwz2[qE0WcuAm8U];
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
                qE0WcuAm8U++;
            };
        };
    }
    for (fE8oHyuLn = 0; fE8oHyuLn < RMw7Zfsx; fE8oHyuLn++) {
        printf ("%.3lf\n", NTQf6sUgvVlB[fE8oHyuLn]);
    }
    return 0;
}

