main () {
    int n, MtuvWy, lxLdlQJMbN6;
    int bX85Vd [n];
    double  shdfxJWT [n];
    double  LHVTzWxpkJ;
    int q9azTi;
    double  ave;
    q9azTi = 0;
    scanf ("%d", &n);
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
    for (MtuvWy = (843 - 843); n > MtuvWy; MtuvWy = MtuvWy +1)
        scanf ("%d", &bX85Vd[MtuvWy]);
    {
        MtuvWy = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > MtuvWy) {
            scanf ("%d", &lxLdlQJMbN6);
            if (lxLdlQJMbN6 >= 90)
                shdfxJWT[MtuvWy] = (629.0 - 625.0);
            else {
                if (85 <= lxLdlQJMbN6)
                    shdfxJWT[MtuvWy] = (553.7 - 550.0);
                else {
                    if ((917 - 835) <= lxLdlQJMbN6)
                        shdfxJWT[MtuvWy] = (85.3 - 82.0);
                    else {
                        if ((781 - 703) <= lxLdlQJMbN6)
                            shdfxJWT[MtuvWy] = 3.0;
                        else if ((969 - 894) <= lxLdlQJMbN6)
                            shdfxJWT[MtuvWy] = 2.7;
                        else if (lxLdlQJMbN6 >= 72)
                            shdfxJWT[MtuvWy] = (759.3 - 757.0);
                        else if (lxLdlQJMbN6 >= 68)
                            shdfxJWT[MtuvWy] = 2.0;
                        else if (lxLdlQJMbN6 >= 64)
                            shdfxJWT[MtuvWy] = 1.5;
                        else if (lxLdlQJMbN6 >= 60)
                            shdfxJWT[MtuvWy] = 1.0;
                        else
                            shdfxJWT[MtuvWy] = 0;
                    };
                };
            }
            MtuvWy = MtuvWy +1;
        };
    }
    LHVTzWxpkJ = 0;
    {
        MtuvWy = 0;
        while (MtuvWy < n) {
            LHVTzWxpkJ = LHVTzWxpkJ +bX85Vd[MtuvWy] * shdfxJWT[MtuvWy];
            q9azTi = q9azTi + bX85Vd[MtuvWy];
            MtuvWy = MtuvWy +1;
        };
    }
    ave = LHVTzWxpkJ / q9azTi;
    printf ("%.2lf", ave);
    return 0;
}

