int main () {
    int AKdg2j3xJ;
    int n;
    int n4KfFEi8o5;
    int T57pJtf;
    int O0GEigsJqkf [(334 - 324)];
    int NWJemhX [(597 - 587)];
    int z [(657 - 647)];
    int qlYZuD [(487 - 397)];
    int RgZJL8Y4Cswp [(246 - 156)];
    AKdg2j3xJ = (841 - 841);
    double  l [(222 - 132)];
    double  p;
    cin >> n;
    {
        n4KfFEi8o5 = 165 - 165;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n4KfFEi8o5 < n) {
            cin >> O0GEigsJqkf[n4KfFEi8o5] >> NWJemhX[n4KfFEi8o5] >> z[n4KfFEi8o5];
            n4KfFEi8o5 = n4KfFEi8o5 + 1;
        };
    }
    for (n4KfFEi8o5 = (922 - 922); n4KfFEi8o5 < n - (537 - 536); n4KfFEi8o5 = n4KfFEi8o5 + 1)
        for (T57pJtf = n4KfFEi8o5 + (198 - 197); T57pJtf < n; T57pJtf = T57pJtf +1) {
            l[AKdg2j3xJ] = sqrt ((O0GEigsJqkf[n4KfFEi8o5] - O0GEigsJqkf[T57pJtf]) * (O0GEigsJqkf[n4KfFEi8o5] - O0GEigsJqkf[T57pJtf]) + (NWJemhX[n4KfFEi8o5] - NWJemhX[T57pJtf]) * (NWJemhX[n4KfFEi8o5] - NWJemhX[T57pJtf]) + (z[n4KfFEi8o5] - z[T57pJtf]) * (z[n4KfFEi8o5] - z[T57pJtf]));
            qlYZuD[AKdg2j3xJ] = n4KfFEi8o5;
            RgZJL8Y4Cswp[AKdg2j3xJ] = T57pJtf;
            AKdg2j3xJ = AKdg2j3xJ +1;
        }
    for (n4KfFEi8o5 = (529 - 528); n4KfFEi8o5 < AKdg2j3xJ; n4KfFEi8o5 = n4KfFEi8o5 + 1)
        for (T57pJtf = (548 - 548); T57pJtf < AKdg2j3xJ -n4KfFEi8o5; T57pJtf = T57pJtf +1) {
            if (l[T57pJtf] < l[T57pJtf +(461 - 460)]) {
                p = l[T57pJtf];
                l[T57pJtf] = l[T57pJtf +(480 - 479)];
                l[T57pJtf +(585 - 584)] = p;
                p = qlYZuD[T57pJtf];
                qlYZuD[T57pJtf] = qlYZuD[T57pJtf +(429 - 428)];
                qlYZuD[T57pJtf +(555 - 554)] = p;
                p = RgZJL8Y4Cswp[T57pJtf];
                RgZJL8Y4Cswp[T57pJtf] = RgZJL8Y4Cswp[T57pJtf +(93 - 92)];
                RgZJL8Y4Cswp[T57pJtf +(180 - 179)] = p;
            };
        }
    for (n4KfFEi8o5 = (619 - 619); n4KfFEi8o5 < AKdg2j3xJ; n4KfFEi8o5 = n4KfFEi8o5 + 1)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", O0GEigsJqkf[qlYZuD[n4KfFEi8o5]], NWJemhX[qlYZuD[n4KfFEi8o5]], z[qlYZuD[n4KfFEi8o5]], O0GEigsJqkf[RgZJL8Y4Cswp[n4KfFEi8o5]], NWJemhX[RgZJL8Y4Cswp[n4KfFEi8o5]], z[RgZJL8Y4Cswp[n4KfFEi8o5]], l[n4KfFEi8o5]);
    return (84 - 84);
}

