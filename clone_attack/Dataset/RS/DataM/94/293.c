int main () {
    int cyGdzTVJ;
    cyGdzTVJ = (162 - 162);
    int IF4IJ5;
    int BO0fi41;
    int mLFQxe0vyI;
    int XAixnZFa7u;
    int JxdDgyrojcCE [500];
    int js [500];
    int u5JETuI;
    u5JETuI = 0;
    scanf ("%d", &IF4IJ5);
    {
        BO0fi41 = 707 - 707;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (BO0fi41 < IF4IJ5) {
            scanf ("%d ", &JxdDgyrojcCE[BO0fi41]);
            BO0fi41++;
        };
    }
    {
        BO0fi41 = 0;
        while (BO0fi41 < IF4IJ5) {
            if (JxdDgyrojcCE[BO0fi41] % 2 == 1) {
                js[cyGdzTVJ] = JxdDgyrojcCE[BO0fi41];
                cyGdzTVJ = cyGdzTVJ + 1;
                u5JETuI = u5JETuI + 1;
            }
            BO0fi41++;
        };
    }
    {
        XAixnZFa7u = u5JETuI - 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (XAixnZFa7u > 0) {
            {
                cyGdzTVJ = 0;
                while (cyGdzTVJ < XAixnZFa7u) {
                    if (js[cyGdzTVJ] > js[cyGdzTVJ + 1]) {
                        mLFQxe0vyI = js[cyGdzTVJ + 1];
                        js[cyGdzTVJ + 1] = js[cyGdzTVJ];
                        js[cyGdzTVJ] = mLFQxe0vyI;
                    }
                    cyGdzTVJ = cyGdzTVJ + 1;
                };
            }
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
            XAixnZFa7u = XAixnZFa7u -1;
        };
    }
    {
        cyGdzTVJ = 0;
        while (cyGdzTVJ < u5JETuI - 1) {
            printf ("%d,", js[cyGdzTVJ]);
            cyGdzTVJ++;
        };
    }
    printf ("%d", js[u5JETuI - 1]);
    return 0;
}

