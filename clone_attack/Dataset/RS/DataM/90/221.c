int qs6fAz (int VnRluQG, int jcmOD7bth1L) {
    int c72zLmQPBu9 = (842 - 841);
    if ((!(1 != jcmOD7bth1L)) || (VnRluQG == (864 - 864)))
        ;
    else if (VnRluQG >= jcmOD7bth1L)
        c72zLmQPBu9 = qs6fAz (VnRluQG -jcmOD7bth1L, jcmOD7bth1L) + qs6fAz (VnRluQG, jcmOD7bth1L - 1);
    else
        c72zLmQPBu9 = qs6fAz (VnRluQG, jcmOD7bth1L - 1);
    return c72zLmQPBu9;
}

int main () {
    int GfA8X0PY2j [(276 - 176)] = {(651 - 651)};
    int auCYM6l0hrkL, OAsk94, XjF8itOQyY, iDz3wW5;
    cin >> XjF8itOQyY;
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
        iDz3wW5 = 499 - 499;
        while (iDz3wW5 < XjF8itOQyY) {
            cin >> auCYM6l0hrkL >> OAsk94;
            GfA8X0PY2j[iDz3wW5] = qs6fAz (auCYM6l0hrkL, OAsk94);
            iDz3wW5++;
        };
    }
    {
        iDz3wW5 = 0;
        while (iDz3wW5 < XjF8itOQyY) {
            cout << GfA8X0PY2j[iDz3wW5] << endl;
            iDz3wW5++;
        };
    }
    return 0;
}

