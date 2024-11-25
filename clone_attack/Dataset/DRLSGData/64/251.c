int main () {
    int vRLI2cs6J, CTDxwnm3 = 0, R1xgpF [101], iBZvSz [101], UmGNSaVPgXc8 [101], V2Tw8eCEj1 [101], X9Y1xKtONiD [101], JCJo6ANR;
    double  DbE7akCeJlU [101];
    scanf ("%d\n", &vRLI2cs6J);
    {
        JCJo6ANR = 0;
        while (JCJo6ANR < vRLI2cs6J) {
            scanf ("%d %d %d", &R1xgpF[JCJo6ANR], &iBZvSz[JCJo6ANR], &UmGNSaVPgXc8[JCJo6ANR]);
            JCJo6ANR = JCJo6ANR +1;
        }
    }
    {
        int NycO8km = 0;
        while (vRLI2cs6J - 1 > NycO8km) {
            JCJo6ANR = NycO8km +1;
            while (JCJo6ANR < vRLI2cs6J) {
                DbE7akCeJlU[CTDxwnm3] = sqrt (1.0 * (R1xgpF[NycO8km] - R1xgpF[JCJo6ANR]) * (R1xgpF[NycO8km] - R1xgpF[JCJo6ANR]) + 1.0 * (iBZvSz[NycO8km] - iBZvSz[JCJo6ANR]) * (iBZvSz[NycO8km] - iBZvSz[JCJo6ANR]) + 1.0 * (UmGNSaVPgXc8[NycO8km] - UmGNSaVPgXc8[JCJo6ANR]) * (UmGNSaVPgXc8[NycO8km] - UmGNSaVPgXc8[JCJo6ANR]));
                V2Tw8eCEj1[CTDxwnm3] = NycO8km;
                X9Y1xKtONiD[CTDxwnm3] = JCJo6ANR;
                CTDxwnm3 = CTDxwnm3 +1;
                JCJo6ANR = JCJo6ANR +1;
            }
            NycO8km = NycO8km +1;
        }
    }
    {
        int NycO8km = 1;
        while (NycO8km <= CTDxwnm3) {
            double  Ic03aTF4f;
            {
                JCJo6ANR = 0;
                while (CTDxwnm3 -NycO8km > JCJo6ANR) {
                    if (DbE7akCeJlU[JCJo6ANR +1] > DbE7akCeJlU[JCJo6ANR]) {
                        Ic03aTF4f = DbE7akCeJlU[JCJo6ANR +1];
                        DbE7akCeJlU[JCJo6ANR +1] = DbE7akCeJlU[JCJo6ANR];
                        DbE7akCeJlU[JCJo6ANR] = Ic03aTF4f;
                        Ic03aTF4f = V2Tw8eCEj1[JCJo6ANR +1];
                        V2Tw8eCEj1[JCJo6ANR +1] = V2Tw8eCEj1[JCJo6ANR];
                        V2Tw8eCEj1[JCJo6ANR] = Ic03aTF4f;
                        Ic03aTF4f = X9Y1xKtONiD[JCJo6ANR +1];
                        X9Y1xKtONiD[JCJo6ANR +1] = X9Y1xKtONiD[JCJo6ANR];
                        X9Y1xKtONiD[JCJo6ANR] = Ic03aTF4f;
                    }
                    JCJo6ANR = JCJo6ANR +1;
                }
            }
            NycO8km = NycO8km +1;
        }
    }
    {
        JCJo6ANR = 0;
        for (; JCJo6ANR < CTDxwnm3;) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", R1xgpF[V2Tw8eCEj1[JCJo6ANR]], iBZvSz[V2Tw8eCEj1[JCJo6ANR]], UmGNSaVPgXc8[V2Tw8eCEj1[JCJo6ANR]], R1xgpF[X9Y1xKtONiD[JCJo6ANR]], iBZvSz[X9Y1xKtONiD[JCJo6ANR]], UmGNSaVPgXc8[X9Y1xKtONiD[JCJo6ANR]], DbE7akCeJlU[JCJo6ANR]);
            JCJo6ANR = JCJo6ANR +1;
        }
    }
    return 0;
}

