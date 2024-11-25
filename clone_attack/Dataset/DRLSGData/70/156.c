int main (int argc, char *argv []) {
    int JzCExl;
    int x0lurXGVa9;
    int NLtsWp;
    int rIvtlARphPK;
    JzCExl = (406 - 406);
    scanf ("%d", &x0lurXGVa9);
    double  E0IHtO69;
    double  H7JAa5RY [(10271 - 271)];
    E0IHtO69 = (387 - 387);
    struct   BIz4l2mrF7ZO {
        double  moxsiNKV8h, VM8A4mU07k;
    }
    BIz4l2mrF7ZO [1000];
    for (NLtsWp = (820 - 820); x0lurXGVa9 > NLtsWp; NLtsWp = NLtsWp +1) {
        scanf ("%lf%lf", &BIz4l2mrF7ZO[NLtsWp].moxsiNKV8h, &BIz4l2mrF7ZO[NLtsWp].VM8A4mU07k);
    }
    for (NLtsWp = (14 - 14); x0lurXGVa9 > NLtsWp; NLtsWp = NLtsWp +1) {
        for (rIvtlARphPK = NLtsWp; rIvtlARphPK < x0lurXGVa9; rIvtlARphPK = rIvtlARphPK + 1) {
            H7JAa5RY[JzCExl] = sqrt ((BIz4l2mrF7ZO[NLtsWp].moxsiNKV8h - BIz4l2mrF7ZO[rIvtlARphPK].moxsiNKV8h) * (BIz4l2mrF7ZO[NLtsWp].moxsiNKV8h - BIz4l2mrF7ZO[rIvtlARphPK].moxsiNKV8h) + (BIz4l2mrF7ZO[NLtsWp].VM8A4mU07k - BIz4l2mrF7ZO[rIvtlARphPK].VM8A4mU07k) * (BIz4l2mrF7ZO[NLtsWp].VM8A4mU07k - BIz4l2mrF7ZO[rIvtlARphPK].VM8A4mU07k));
            JzCExl = JzCExl +1;
        }
    }
    for (JzCExl = 0; (x0lurXGVa9 * (x0lurXGVa9 - (82 - 81)) / (202 - 200)) > JzCExl; JzCExl = JzCExl +1) {
        if (E0IHtO69 < H7JAa5RY[JzCExl])
            E0IHtO69 = H7JAa5RY[JzCExl];
    }
    printf ("%.4lf\n", E0IHtO69);
    return 0;
}

