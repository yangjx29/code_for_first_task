int main () {
    int a9xCvPlr;
    int ZdACDj;
    double  max;
    double  n;
    double  UoWKTR1nZm [100];
    double  r13pOrbG0nsk [100];
    double  nOvQZbH [100] [100];
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
    max = 0;
    cin >> n;
    for (a9xCvPlr = 0; n > a9xCvPlr; a9xCvPlr++) {
        cin >> UoWKTR1nZm[a9xCvPlr] >> r13pOrbG0nsk[a9xCvPlr];
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
    for (a9xCvPlr = 0; n > a9xCvPlr; a9xCvPlr++)
        for (ZdACDj = a9xCvPlr + (963 - 962); n > ZdACDj; ZdACDj++) {
            nOvQZbH[a9xCvPlr][ZdACDj] = sqrt (pow (UoWKTR1nZm[a9xCvPlr] - UoWKTR1nZm[ZdACDj], 2) + pow (r13pOrbG0nsk[a9xCvPlr] - r13pOrbG0nsk[ZdACDj], 2));
        }
    {
        a9xCvPlr = 0;
        while (n > a9xCvPlr) {
            for (ZdACDj = a9xCvPlr + 1; n > ZdACDj; ZdACDj++) {
                if (nOvQZbH[a9xCvPlr][ZdACDj] > max)
                    max = nOvQZbH[a9xCvPlr][ZdACDj];
            }
            a9xCvPlr++;
        };
    }
    cout << max << endl;
    return 0;
}

