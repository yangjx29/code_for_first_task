int main () {
    int VZizdJTt;
    int NKmwOsZUgidv [500];
    int JuSIcFr [500];
    int OJ7KEhBgXx;
    int Gkd8RWiGOn6;
    int TJpZnC6VMtvd;
    int ONWYopRuSC7;
    int YTmPrYtRfl;
    JuSIcFr[500] = 0;
    Gkd8RWiGOn6 = 0;
    scanf ("%d", &VZizdJTt);
    {
        OJ7KEhBgXx = 0;
        while (VZizdJTt -1 >= OJ7KEhBgXx) {
            scanf ("%d", &NKmwOsZUgidv[OJ7KEhBgXx]);
            OJ7KEhBgXx = OJ7KEhBgXx +1;
        };
    }
    YTmPrYtRfl = 0;
    {
        OJ7KEhBgXx = 0;
        while (OJ7KEhBgXx <= VZizdJTt -1) {
            if (NKmwOsZUgidv[OJ7KEhBgXx] % 2 != 0) {
                YTmPrYtRfl = YTmPrYtRfl +1;
                JuSIcFr[Gkd8RWiGOn6] = NKmwOsZUgidv[OJ7KEhBgXx];
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
                Gkd8RWiGOn6 = Gkd8RWiGOn6 +1;
            }
            OJ7KEhBgXx = OJ7KEhBgXx +1;
        };
    }
    for (TJpZnC6VMtvd = 1; TJpZnC6VMtvd <= YTmPrYtRfl -1; TJpZnC6VMtvd = TJpZnC6VMtvd +1) {
        Gkd8RWiGOn6 = 0;
        while (Gkd8RWiGOn6 <= YTmPrYtRfl -TJpZnC6VMtvd-1) {
            if (JuSIcFr[Gkd8RWiGOn6] > JuSIcFr[Gkd8RWiGOn6 +1]) {
                ONWYopRuSC7 = JuSIcFr[Gkd8RWiGOn6 +1];
                JuSIcFr[Gkd8RWiGOn6 +1] = JuSIcFr[Gkd8RWiGOn6];
                JuSIcFr[Gkd8RWiGOn6] = ONWYopRuSC7;
            }
            Gkd8RWiGOn6 = Gkd8RWiGOn6 +1;
        };
    }
    {
        Gkd8RWiGOn6 = 0;
        while (Gkd8RWiGOn6 <= YTmPrYtRfl -1) {
            if (Gkd8RWiGOn6 == YTmPrYtRfl -1) {
                printf ("%d", JuSIcFr[Gkd8RWiGOn6]);
            }
            else {
                printf ("%d,", JuSIcFr[Gkd8RWiGOn6]);
            }
            Gkd8RWiGOn6 = Gkd8RWiGOn6 +1;
        };
    }
    return 0;
}

