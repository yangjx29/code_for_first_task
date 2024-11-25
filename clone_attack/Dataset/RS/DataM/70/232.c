int main (int R1hft7ijlb, char *Ra3fmwr []) {
    int fVe2EIhwAyq4;
    int j;
    int klyK2InpD1;
    double  NlLio5 [1000] [(833 - 831)], mLCxj6O1il0k, b;
    scanf ("%d", &klyK2InpD1);
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
    for (fVe2EIhwAyq4 = 0; klyK2InpD1 > fVe2EIhwAyq4; fVe2EIhwAyq4 = fVe2EIhwAyq4 + 1) {
        scanf ("%lf%lf", &NlLio5[fVe2EIhwAyq4][0], &NlLio5[fVe2EIhwAyq4][1]);
    }
    mLCxj6O1il0k = 0;
    for (fVe2EIhwAyq4 = 0; fVe2EIhwAyq4 < klyK2InpD1; fVe2EIhwAyq4 = fVe2EIhwAyq4 + 1) {
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
        for (j = fVe2EIhwAyq4; klyK2InpD1 > j; j = j + 1) {
            b = (NlLio5[j][0] - NlLio5[fVe2EIhwAyq4][0]) * (NlLio5[j][0] - NlLio5[fVe2EIhwAyq4][0]) + (NlLio5[j][1] - NlLio5[fVe2EIhwAyq4][1]) * (NlLio5[j][1] - NlLio5[fVe2EIhwAyq4][1]);
            if (b > mLCxj6O1il0k)
                mLCxj6O1il0k = b;
        };
    }
    scanf ("%d", &fVe2EIhwAyq4);
    printf ("%.4lf", sqrt (mLCxj6O1il0k));
    return 0;
}

