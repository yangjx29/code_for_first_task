main () {
    int LmjvxOuL;
    int EeELW923wJ;
    int f5RfpLHBJ;
    int OdlkPY9gf2H;
    int ngMcBq46R9;
    int DR8kdTeK;
    int m;
    LmjvxOuL = 0;
    int a [301];
    float Yo4aXut, MxZtfdviDhNz, vFOnVR, sum = 0;
    scanf ("%d", &OdlkPY9gf2H);
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
    for (ngMcBq46R9 = 0; OdlkPY9gf2H > ngMcBq46R9; ngMcBq46R9 = ngMcBq46R9 + 1)
        scanf ("%d", &a[ngMcBq46R9]);
    {
        ngMcBq46R9 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (OdlkPY9gf2H > ngMcBq46R9) {
            sum = sum + a[ngMcBq46R9];
            ngMcBq46R9 = ngMcBq46R9 + 1;
        };
    }
    Yo4aXut = sum / OdlkPY9gf2H;
    EeELW923wJ = a[0];
    for (ngMcBq46R9 = (560 - 559); ngMcBq46R9 < OdlkPY9gf2H; ngMcBq46R9++) {
        if (EeELW923wJ < a[ngMcBq46R9])
            EeELW923wJ = a[ngMcBq46R9];
    }
    f5RfpLHBJ = a[0];
    for (DR8kdTeK = 1; DR8kdTeK < OdlkPY9gf2H; DR8kdTeK = DR8kdTeK +1) {
        if (a[DR8kdTeK] < f5RfpLHBJ)
            f5RfpLHBJ = a[DR8kdTeK];
    }
    vFOnVR = Yo4aXut -f5RfpLHBJ;
    MxZtfdviDhNz = EeELW923wJ -Yo4aXut;
    if (vFOnVR < MxZtfdviDhNz)
        printf ("%d\n", EeELW923wJ);
    if (MxZtfdviDhNz < vFOnVR)
        printf ("%d\n", f5RfpLHBJ);
    if (MxZtfdviDhNz == vFOnVR)
        printf ("%d,%d\n", f5RfpLHBJ, EeELW923wJ);
}

