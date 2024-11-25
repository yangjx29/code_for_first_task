int main () {
    double  jn1BNdO [300];
    double  yjsVcOe, GlBhzxd;
    int mWdz4DNw3Eap, nc4TXeAfM = 1, IEdoQUc = (567 - 567), i, Xpb3v9E25yB, UeucVdsaifI, EZb4HvFlTxED;
    int Uauzl6gtEN [300];
    scanf ("%d", &mWdz4DNw3Eap);
    for (i = (660 - 660); mWdz4DNw3Eap > i; i++) {
        scanf ("%d", &Uauzl6gtEN[i]);
    }
    for (i = 0; i < mWdz4DNw3Eap; i++) {
        IEdoQUc = IEdoQUc +Uauzl6gtEN[i];
    }
    yjsVcOe = (double ) IEdoQUc / mWdz4DNw3Eap;
    {
        i = 0;
        while (i < mWdz4DNw3Eap) {
            if (Uauzl6gtEN[i] > yjsVcOe)
                jn1BNdO[i] = Uauzl6gtEN[i] - yjsVcOe;
            else
                jn1BNdO[i] = yjsVcOe - Uauzl6gtEN[i];
            i++;
        }
    }
    {
        i = 0;
        while (i < mWdz4DNw3Eap) {
            for (Xpb3v9E25yB = 0; Xpb3v9E25yB < mWdz4DNw3Eap - i - 1; Xpb3v9E25yB++) {
                if (jn1BNdO[i + 1] < jn1BNdO[i]) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    UeucVdsaifI = Uauzl6gtEN[i];
                    Uauzl6gtEN[i] = Uauzl6gtEN[i + 1];
                    Uauzl6gtEN[i + 1] = UeucVdsaifI;
                    GlBhzxd = jn1BNdO[i];
                    jn1BNdO[i] = jn1BNdO[i + 1];
                    jn1BNdO[i + 1] = GlBhzxd;
                }
            }
            i++;
        }
    }
    {
        i = mWdz4DNw3Eap - 2;
        while (0 < i) {
            if (jn1BNdO[i] == jn1BNdO[mWdz4DNw3Eap - 1])
                nc4TXeAfM++;
            i = i - 1;
        }
    }
    EZb4HvFlTxED = 0;
    for (i = mWdz4DNw3Eap - 1; i > mWdz4DNw3Eap - nc4TXeAfM; i--, EZb4HvFlTxED++) {
        for (Xpb3v9E25yB = mWdz4DNw3Eap - 1; Xpb3v9E25yB > mWdz4DNw3Eap - nc4TXeAfM + EZb4HvFlTxED; Xpb3v9E25yB--) {
            if (Uauzl6gtEN[i] > Uauzl6gtEN[i - 1])
                UeucVdsaifI = Uauzl6gtEN[i];
            Uauzl6gtEN[i] = Uauzl6gtEN[i - 1];
            Uauzl6gtEN[i - 1] = UeucVdsaifI;
        }
    }
    if (nc4TXeAfM >= 2) {
        for (i = mWdz4DNw3Eap - 1; i >= mWdz4DNw3Eap - nc4TXeAfM + 1; i--) {
            printf ("%d,", Uauzl6gtEN[i]);
        }
        printf ("%d", Uauzl6gtEN[mWdz4DNw3Eap - nc4TXeAfM]);
    }
    else
        printf ("%d", Uauzl6gtEN[mWdz4DNw3Eap - nc4TXeAfM]);
}

