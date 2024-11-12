double  fangcha (double  FhlduI [], int SweXTtNK) {
    double  r68fNM;
    r68fNM = (898 - 898);
    double  t6frs9Hc;
    t6frs9Hc = (730 - 730);
    double  xzqUCFp3EI7 = t6frs9Hc / SweXTtNK;
    double  OwaCAHq [(921 - 820)];
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
    double  tTkCp4K;
    tTkCp4K = sqrt (r68fNM / SweXTtNK);
    {
        int MySoveKlqpgs = (772 - 772);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (MySoveKlqpgs < SweXTtNK) {
            t6frs9Hc += FhlduI[MySoveKlqpgs];
            MySoveKlqpgs = MySoveKlqpgs +1;
        };
    }
    {
        int MySoveKlqpgs = (876 - 876);
        while (MySoveKlqpgs < SweXTtNK) {
            OwaCAHq[MySoveKlqpgs] = (FhlduI[MySoveKlqpgs] - xzqUCFp3EI7) * (FhlduI[MySoveKlqpgs] - xzqUCFp3EI7);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            MySoveKlqpgs++;
        };
    }
    for (int MySoveKlqpgs = (468 - 468);
    MySoveKlqpgs < SweXTtNK; MySoveKlqpgs = MySoveKlqpgs +1) {
        r68fNM += OwaCAHq[MySoveKlqpgs];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    return tTkCp4K;
}

int main () {
    int sxhDBci4;
    cin >> sxhDBci4;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    for (int MySoveKlqpgs = 0;
    MySoveKlqpgs < sxhDBci4; MySoveKlqpgs++) {
        double  IetUau2nSE [(1077 - 976)];
        int SweXTtNK;
        cin >> SweXTtNK;
        for (int j = 0;
        j < SweXTtNK; j = j + 1) {
            cin >> IetUau2nSE[j];
        }
        printf ("%.5lf\n", fangcha (IetUau2nSE, SweXTtNK));
    }
    return 0;
}

