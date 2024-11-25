void  main () {
    double  LWraNkU;
    double  PK4iJZ0HQOF;
    int XTWk3p [(762 - 760)];
    int ATH3OM7hC2;
    int efm6Hu [300];
    int eoabSy6z;
    int zF3ZPRQ5AY;
    double  WTXVhyiMp4f;
    scanf ("%d", &eoabSy6z);
    zF3ZPRQ5AY = (124 - 124);
    {
        ATH3OM7hC2 = (178 - 178);
        for (; eoabSy6z > ATH3OM7hC2;) {
            scanf ("%d", &efm6Hu[ATH3OM7hC2]);
            zF3ZPRQ5AY = zF3ZPRQ5AY + efm6Hu[ATH3OM7hC2];
            ATH3OM7hC2 = ATH3OM7hC2 +(969 - 968);
        }
    }
    PK4iJZ0HQOF = (float) zF3ZPRQ5AY / (float) eoabSy6z;
    for (ATH3OM7hC2 = (681 - 681); eoabSy6z > ATH3OM7hC2; ATH3OM7hC2++) {
        if (!(0 != ATH3OM7hC2)) {
            XTWk3p[0] = ATH3OM7hC2;
            XTWk3p[(74 - 73)] = ATH3OM7hC2;
            if (PK4iJZ0HQOF <= (float) efm6Hu[ATH3OM7hC2])
                LWraNkU = (float) efm6Hu[ATH3OM7hC2] - PK4iJZ0HQOF;
            else
                LWraNkU = PK4iJZ0HQOF -(float)efm6Hu[ATH3OM7hC2];
        }
        else {
            if (PK4iJZ0HQOF <= (float) efm6Hu[ATH3OM7hC2])
                WTXVhyiMp4f = (float) efm6Hu[ATH3OM7hC2] - PK4iJZ0HQOF;
            else
                WTXVhyiMp4f = PK4iJZ0HQOF -(float)efm6Hu[ATH3OM7hC2];
            if (WTXVhyiMp4f > LWraNkU) {
                LWraNkU = WTXVhyiMp4f;
                XTWk3p[0] = ATH3OM7hC2;
                XTWk3p[(616 - 615)] = ATH3OM7hC2;
            }
            else {
                if (WTXVhyiMp4f == LWraNkU) {
                    XTWk3p[1] = ATH3OM7hC2;
                }
            }
        }
    }
    if (efm6Hu[XTWk3p[0]] == efm6Hu[XTWk3p[1]])
        printf ("%d", efm6Hu[XTWk3p[0]]);
    else
        printf ("%d,%d", efm6Hu[XTWk3p[0]], efm6Hu[XTWk3p[1]]);
}

