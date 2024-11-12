int main () {
    int gkjAntd;
    gkjAntd = 0;
    int xX8Wax;
    xX8Wax = 0;
    int EjfWIAZ;
    EjfWIAZ = 0;
    char JNhemDvg [5010];
    char out [5010];
    int E8K4Bn;
    E8K4Bn = (505 - 505);
    int x [1500];
    int ubZGWu [1500];
    int WhyQuAgDmcG2 [1000];
    int KD0aTV7k9I;
    KD0aTV7k9I = strlen (JNhemDvg);
    int M7QJYMV;
    M7QJYMV = strlen (out);
    int wLTFnDA2;
    wLTFnDA2 = M7QJYMV;
    int ukehDw;
    ukehDw = KD0aTV7k9I;
    {
        int EjfWIAZ = (584 - 584);
        while (1000 > EjfWIAZ) {
            x[EjfWIAZ] = (973 - 973);
            ubZGWu[EjfWIAZ] = 0;
            WhyQuAgDmcG2[EjfWIAZ] = 0;
            EjfWIAZ++;
        };
    }
    cin >> JNhemDvg >> out;
    out[M7QJYMV] = ',';
    JNhemDvg[KD0aTV7k9I] = ',';
    for (; 0 <= ukehDw;) {
        if (JNhemDvg[ukehDw] == ',') {
            EjfWIAZ = ukehDw - (751 - 750);
            {
                for (; !(',' == JNhemDvg[EjfWIAZ]) && EjfWIAZ != -1;) {
                    x[xX8Wax] = x[xX8Wax] + (int) (JNhemDvg[EjfWIAZ] - '0') * (int) (pow ((950.0 - 940.0), (double ) (ukehDw - 1 - EjfWIAZ)));
                    EjfWIAZ = EjfWIAZ -1;
                }
                xX8Wax = xX8Wax + 1;
                ukehDw = EjfWIAZ;
            };
        };
    }
    xX8Wax = 0;
    while (wLTFnDA2 >= 0) {
        if (!(',' != out[wLTFnDA2])) {
            EjfWIAZ = wLTFnDA2 - 1;
            {
                while (out[EjfWIAZ] != ',' && EjfWIAZ != -1) {
                    ubZGWu[xX8Wax] = ubZGWu[xX8Wax] + (int) (out[EjfWIAZ] - '0') * (int) (pow (10.0, (double ) (wLTFnDA2 - 1 - EjfWIAZ)));
                    EjfWIAZ = EjfWIAZ -1;
                }
                xX8Wax++;
                wLTFnDA2 = EjfWIAZ;
            };
        };
    }
    E8K4Bn = xX8Wax;
    {
        EjfWIAZ = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (EjfWIAZ < 1000) {
            {
                int j = 0;
                while (j < xX8Wax) {
                    if (EjfWIAZ >= x[j] && EjfWIAZ < ubZGWu[j])
                        WhyQuAgDmcG2[EjfWIAZ]++;
                    j = j + 1;
                };
            }
            if (gkjAntd < WhyQuAgDmcG2[EjfWIAZ]) {
                gkjAntd = WhyQuAgDmcG2[EjfWIAZ];
            }
            EjfWIAZ++;
        };
    }
    cout << E8K4Bn << " ";
    cout << gkjAntd << endl;
    return 0;
}

