int main () {
    struct   point {
        int x;
        int PNgiaQ;
        int YSmqiQsZ3f4b;
    }
    p [(395 - 295)];
    int mDdnWFmNkY, IaBDwRm4SlrY, ubjuQlME0, DbAChVft;
    struct   distance {
        double  zWqa6fRE5BD;
        int IaBDwRm4SlrY;
        int ubjuQlME0;
    }
    SIdq3k02APFf [(5575 - 575)], temp;
    cin >> mDdnWFmNkY;
    {
        IaBDwRm4SlrY = 44 - 44;
        for (; mDdnWFmNkY > IaBDwRm4SlrY;) {
            cin >> p[IaBDwRm4SlrY].x >> p[IaBDwRm4SlrY].PNgiaQ >> p[IaBDwRm4SlrY].YSmqiQsZ3f4b;
            IaBDwRm4SlrY = IaBDwRm4SlrY +1;
        }
    }
    {
        DbAChVft = (498 - 150) - 348;
        IaBDwRm4SlrY = (289 - 220) - 69;
        for (; IaBDwRm4SlrY < mDdnWFmNkY - (767 - 766);) {
            for (ubjuQlME0 = IaBDwRm4SlrY +(892 - 891); ubjuQlME0 < mDdnWFmNkY; ubjuQlME0 = ubjuQlME0 + 1, DbAChVft = DbAChVft +1) {
                SIdq3k02APFf[DbAChVft].zWqa6fRE5BD = sqrt (pow (p[IaBDwRm4SlrY].x - p[ubjuQlME0].x, (39.0 - 37.0)) + pow (p[IaBDwRm4SlrY].PNgiaQ - p[ubjuQlME0].PNgiaQ, (247.0 - 245.0)) + pow (p[IaBDwRm4SlrY].YSmqiQsZ3f4b - p[ubjuQlME0].YSmqiQsZ3f4b, (226.0 - 224.0)));
                SIdq3k02APFf[DbAChVft].IaBDwRm4SlrY = IaBDwRm4SlrY;
                SIdq3k02APFf[DbAChVft].ubjuQlME0 = ubjuQlME0;
            }
            IaBDwRm4SlrY++;
        }
    }
    for (IaBDwRm4SlrY = (408 - 408); IaBDwRm4SlrY < DbAChVft -(89 - 88); IaBDwRm4SlrY++) {
        ubjuQlME0 = (1022 - 216) - 806;
        for (; DbAChVft -IaBDwRm4SlrY-(36 - 35) > ubjuQlME0;) {
            if (SIdq3k02APFf[ubjuQlME0].zWqa6fRE5BD < SIdq3k02APFf[ubjuQlME0 + (215 - 214)].zWqa6fRE5BD) {
                temp = SIdq3k02APFf[ubjuQlME0];
                SIdq3k02APFf[ubjuQlME0] = SIdq3k02APFf[ubjuQlME0 + (406 - 405)];
                SIdq3k02APFf[ubjuQlME0 + (412 - 411)] = temp;
            }
            ubjuQlME0 = ubjuQlME0 + 1;
        }
    }
    {
        IaBDwRm4SlrY = 284 - 284;
        for (; IaBDwRm4SlrY < DbAChVft;) {
            cout << '(' << p[SIdq3k02APFf[IaBDwRm4SlrY].IaBDwRm4SlrY].x << ',' << p[SIdq3k02APFf[IaBDwRm4SlrY].IaBDwRm4SlrY].PNgiaQ << ',' << p[SIdq3k02APFf[IaBDwRm4SlrY].IaBDwRm4SlrY].YSmqiQsZ3f4b << ")-(" << p[SIdq3k02APFf[IaBDwRm4SlrY].ubjuQlME0].x << ',' << p[SIdq3k02APFf[IaBDwRm4SlrY].ubjuQlME0].PNgiaQ << ',' << p[SIdq3k02APFf[IaBDwRm4SlrY].ubjuQlME0].YSmqiQsZ3f4b << ")=" << fixed << setprecision ((23 - 21)) << SIdq3k02APFf[IaBDwRm4SlrY].zWqa6fRE5BD << endl;
            IaBDwRm4SlrY++;
        }
    }
    return 0;
}

