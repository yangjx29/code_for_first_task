int main () {
    int p [(234 - 132)] [102], IgFqlcBv [102] [102], jkaO30yCgS [102] [102], ehaRytJx, WTKioPpx7, VG2nt3, zGY7pdgUlAC, ezvNcMYUuLEI, Qb5pjuwXQcJI;
    char a [102] [102];
    {
        WTKioPpx7 = 694 - 694;
        while (WTKioPpx7 <= 101) {
            {
                VG2nt3 = 0;
                for (; 101 >= VG2nt3;) {
                    IgFqlcBv[WTKioPpx7][VG2nt3] = (759 - 758);
                    p[WTKioPpx7][VG2nt3] = 0;
                    jkaO30yCgS[WTKioPpx7][VG2nt3] = 1;
                    VG2nt3 = VG2nt3 +1;
                }
            }
            WTKioPpx7 = WTKioPpx7 +1;
        }
    }
    scanf ("%d", &ehaRytJx);
    for (WTKioPpx7 = 1; ehaRytJx >= WTKioPpx7; WTKioPpx7 = WTKioPpx7 +1)
        scanf ("%s", a[WTKioPpx7]);
    {
        WTKioPpx7 = 1;
        while (ehaRytJx >= WTKioPpx7) {
            {
                VG2nt3 = 1;
                for (; VG2nt3 <= ehaRytJx;) {
                    {
                        if (0) {
                            {
                                {
                                    if (0) {
                                        return 0;
                                    }
                                }
                                if (0) {
                                    return 0;
                                }
                            }
                            return 0;
                        }
                    }
                    if (!('.' != a[WTKioPpx7][VG2nt3 -1])) {
                        {
                            if (0) {
                                return 0;
                            }
                        }
                        p[WTKioPpx7][VG2nt3] = 1;
                    }
                    else {
                        if (!('@' != a[WTKioPpx7][VG2nt3 -1])) {
                            p[WTKioPpx7][VG2nt3] = 1;
                            IgFqlcBv[WTKioPpx7][VG2nt3] = 0;
                        }
                        else {
                        }
                    }
                    VG2nt3 = VG2nt3 +1;
                }
            }
            WTKioPpx7 = WTKioPpx7 +1;
        }
    }
    scanf ("%d", &zGY7pdgUlAC);
    {
        ezvNcMYUuLEI = 1;
        for (; ezvNcMYUuLEI < zGY7pdgUlAC;) {
            for (WTKioPpx7 = 1; WTKioPpx7 <= ehaRytJx; WTKioPpx7 = WTKioPpx7 +1) {
                VG2nt3 = 1;
                while (VG2nt3 <= ehaRytJx) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    if (p[WTKioPpx7][VG2nt3] != 0)
                        jkaO30yCgS[WTKioPpx7][VG2nt3] = IgFqlcBv[WTKioPpx7][VG2nt3] * IgFqlcBv[WTKioPpx7 +1][VG2nt3] * IgFqlcBv[WTKioPpx7][VG2nt3 +1] * IgFqlcBv[WTKioPpx7 -1][VG2nt3] * IgFqlcBv[WTKioPpx7][VG2nt3 -1];
                    VG2nt3 = VG2nt3 +1;
                }
            }
            for (WTKioPpx7 = 1; WTKioPpx7 <= ehaRytJx; WTKioPpx7 = WTKioPpx7 +1) {
                VG2nt3 = 1;
                while (VG2nt3 <= ehaRytJx) {
                    IgFqlcBv[WTKioPpx7][VG2nt3] = jkaO30yCgS[WTKioPpx7][VG2nt3];
                    VG2nt3 = VG2nt3 +1;
                }
            }
            ezvNcMYUuLEI = ezvNcMYUuLEI + 1;
        }
    }
    Qb5pjuwXQcJI = ehaRytJx * ehaRytJx;
    {
        WTKioPpx7 = 1;
        while (WTKioPpx7 <= ehaRytJx) {
            {
                VG2nt3 = 1;
                for (; VG2nt3 <= ehaRytJx;) {
                    Qb5pjuwXQcJI = Qb5pjuwXQcJI -IgFqlcBv[WTKioPpx7][VG2nt3];
                    VG2nt3 = VG2nt3 +1;
                }
            }
            WTKioPpx7 = WTKioPpx7 +1;
        }
    }
    printf ("%d", Qb5pjuwXQcJI);
    return 0;
}

