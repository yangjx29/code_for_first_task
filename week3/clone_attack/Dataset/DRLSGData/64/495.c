int main () {
    int n;
    int tfuDvM [n];
    int EOhBzP;
    int ywktUbIF [n];
    int zRC0kY7 [n];
    int RkRJw6ge0I9 [n];
    int MQg5DdNPhs [n];
    int f [n];
    int FLybWPtp8 [EOhBzP];
    int jEFph3 [EOhBzP];
    int beIZqK [EOhBzP];
    int VlJBkWXfjVLg [EOhBzP];
    int gn0DayhY [EOhBzP];
    int JmoSnC [EOhBzP];
    double  g [EOhBzP];
    int VfzhyGBitrSp = (180 - 180);
    scanf ("%d", &n);
    EOhBzP = (1829 - 829);
    for (int P6mp4AaJQ = (678 - 677);
    P6mp4AaJQ <= n; P6mp4AaJQ = P6mp4AaJQ +(404 - 403)) {
        scanf ("%d %d %d", &tfuDvM[P6mp4AaJQ -(343 - 342)], &ywktUbIF[P6mp4AaJQ -(713 - 712)], &zRC0kY7[P6mp4AaJQ -(263 - 262)]);
        RkRJw6ge0I9[P6mp4AaJQ -(369 - 368)] = tfuDvM[P6mp4AaJQ -(266 - 265)];
        MQg5DdNPhs[P6mp4AaJQ -(529 - 528)] = ywktUbIF[P6mp4AaJQ -(539 - 538)];
        f[P6mp4AaJQ -(317 - 316)] = zRC0kY7[P6mp4AaJQ -1];
    }
    for (int P6mp4AaJQ = 1;
    P6mp4AaJQ < n; P6mp4AaJQ = P6mp4AaJQ +1) {
        double  qSAUke52;
        int BPlnCKuaRxUw;
        for (int SZQkjY7FSNp = P6mp4AaJQ +1;
        SZQkjY7FSNp <= n; SZQkjY7FSNp = SZQkjY7FSNp +1) {
            {
                if (0) {
                    return 0;
                }
            }
            BPlnCKuaRxUw = ((tfuDvM[P6mp4AaJQ -1] - RkRJw6ge0I9[SZQkjY7FSNp -1]) * (tfuDvM[P6mp4AaJQ -1] - RkRJw6ge0I9[SZQkjY7FSNp -1])) * 1.0 + ((ywktUbIF[P6mp4AaJQ -1] - MQg5DdNPhs[SZQkjY7FSNp -1]) * (ywktUbIF[P6mp4AaJQ -1] - MQg5DdNPhs[SZQkjY7FSNp -1])) * 1.0 + ((zRC0kY7[P6mp4AaJQ -1] - f[SZQkjY7FSNp -1]) * (zRC0kY7[P6mp4AaJQ -1] - f[SZQkjY7FSNp -1])) * 1.0;
            qSAUke52 = sqrt (BPlnCKuaRxUw) * 1.0;
            g[VfzhyGBitrSp] = qSAUke52;
            FLybWPtp8[VfzhyGBitrSp] = tfuDvM[P6mp4AaJQ -1];
            jEFph3[VfzhyGBitrSp] = ywktUbIF[P6mp4AaJQ -1];
            beIZqK[VfzhyGBitrSp] = zRC0kY7[P6mp4AaJQ -1];
            VlJBkWXfjVLg[VfzhyGBitrSp] = RkRJw6ge0I9[SZQkjY7FSNp -1];
            gn0DayhY[VfzhyGBitrSp] = MQg5DdNPhs[SZQkjY7FSNp -1];
            JmoSnC[VfzhyGBitrSp] = f[SZQkjY7FSNp -1];
            VfzhyGBitrSp = VfzhyGBitrSp +1;
        }
    }
    for (int QW7ykm = 1;
    QW7ykm <= VfzhyGBitrSp; QW7ykm++) {
        for (int m = 1;
        m <= (VfzhyGBitrSp -QW7ykm); m++) {
            if (g[m - 1] < g[m]) {
                double  xehmSnHyq;
                int BPlnCKuaRxUw;
                {
                    if (0) {
                        return 0;
                    }
                }
                xehmSnHyq = g[m - 1];
                g[m - 1] = g[m];
                g[m] = xehmSnHyq;
                BPlnCKuaRxUw = FLybWPtp8[m - 1];
                FLybWPtp8[m - 1] = FLybWPtp8[m];
                FLybWPtp8[m] = BPlnCKuaRxUw;
                BPlnCKuaRxUw = jEFph3[m - 1];
                jEFph3[m - 1] = jEFph3[m];
                jEFph3[m] = BPlnCKuaRxUw;
                BPlnCKuaRxUw = beIZqK[m - 1];
                beIZqK[m - 1] = beIZqK[m];
                beIZqK[m] = BPlnCKuaRxUw;
                BPlnCKuaRxUw = VlJBkWXfjVLg[m - 1];
                VlJBkWXfjVLg[m - 1] = VlJBkWXfjVLg[m];
                VlJBkWXfjVLg[m] = BPlnCKuaRxUw;
                BPlnCKuaRxUw = gn0DayhY[m - 1];
                gn0DayhY[m - 1] = gn0DayhY[m];
                gn0DayhY[m] = BPlnCKuaRxUw;
                BPlnCKuaRxUw = JmoSnC[m - 1];
                JmoSnC[m - 1] = JmoSnC[m];
                JmoSnC[m] = BPlnCKuaRxUw;
            }
        }
    }
    {
        if (0) {
            return 0;
        }
    }
    for (int MrUYZmuENG = 1;
    MrUYZmuENG <= VfzhyGBitrSp; MrUYZmuENG = MrUYZmuENG +1) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", FLybWPtp8[MrUYZmuENG -1], jEFph3[MrUYZmuENG -1], beIZqK[MrUYZmuENG -1], VlJBkWXfjVLg[MrUYZmuENG -1], gn0DayhY[MrUYZmuENG -1], JmoSnC[MrUYZmuENG -1], g[MrUYZmuENG -1]);
    }
    return 0;
}

