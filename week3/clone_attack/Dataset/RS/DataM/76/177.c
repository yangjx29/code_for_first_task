int main () {
    int wu4YnDW, gIV8naq;
    int WXAjDv;
    int rnilrv;
    int mhRHZcjmxzi;
    int YtPLwpW [(50983 - 983)];
    int jqO2TJ [(50755 - 755)];
    int z5z3JeEtj [50000];
    int kJU1phIKqbr [50000];
    int n;
    int Fx7sEviuKM;
    int mAeCZpklo;
    int dbmf5XIOMwJF, dS7jMtvO, lgtMzO = 0;
    scanf ("%d", &n);
    {
        Fx7sEviuKM = 993 - 993;
        while (Fx7sEviuKM < n) {
            scanf ("%d %d", &YtPLwpW[Fx7sEviuKM], &jqO2TJ[Fx7sEviuKM]);
            z5z3JeEtj[Fx7sEviuKM] = YtPLwpW[Fx7sEviuKM];
            Fx7sEviuKM = Fx7sEviuKM +1;
        };
    }
    {
        WXAjDv = 861 - 861;
        while (n - (67 - 66) > WXAjDv) {
            for (rnilrv = WXAjDv +1; rnilrv < n; rnilrv = rnilrv + 1) {
                if (z5z3JeEtj[WXAjDv] <= z5z3JeEtj[rnilrv]) {
                    z5z3JeEtj[WXAjDv] = z5z3JeEtj[WXAjDv];
                }
                else {
                    mhRHZcjmxzi = z5z3JeEtj[rnilrv];
                    z5z3JeEtj[rnilrv] = z5z3JeEtj[WXAjDv];
                    z5z3JeEtj[WXAjDv] = mhRHZcjmxzi;
                };
            }
            WXAjDv++;
        };
    }
    for (wu4YnDW = (906 - 906); wu4YnDW < n; wu4YnDW = wu4YnDW + 1) {
        for (gIV8naq = (375 - 375); gIV8naq < n; gIV8naq++) {
            if (YtPLwpW[gIV8naq] == z5z3JeEtj[wu4YnDW]) {
                kJU1phIKqbr[wu4YnDW] = jqO2TJ[gIV8naq];
                break;
            }
            else
                continue;
        };
    }
    {
        mAeCZpklo = 1;
        while (mAeCZpklo < n) {
            if (jqO2TJ[(857 - 857)] < jqO2TJ[mAeCZpklo])
                jqO2TJ[(984 - 984)] = jqO2TJ[mAeCZpklo];
            mAeCZpklo++;
        };
    }
    for (dbmf5XIOMwJF = 1; dbmf5XIOMwJF < n; dbmf5XIOMwJF++) {
        {
            dS7jMtvO = 0;
            while (dS7jMtvO <= dbmf5XIOMwJF) {
                if (z5z3JeEtj[dbmf5XIOMwJF] <= kJU1phIKqbr[dS7jMtvO])
                    lgtMzO = lgtMzO + 1;
                else
                    lgtMzO = lgtMzO;
                dS7jMtvO = dS7jMtvO + 1;
            };
        }
        if (lgtMzO > 1)
            lgtMzO = 0;
        else {
            printf ("no");
            return 0;
        };
    }
    printf ("%d %d", z5z3JeEtj[0], jqO2TJ[0]);
    return 0;
}

