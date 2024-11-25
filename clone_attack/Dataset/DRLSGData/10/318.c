main () {
    int MFgBWmPN;
    int X82Kpa7d = 1;
    int npHO4WjznB [MFgBWmPN];
    int SDZrzS [MFgBWmPN];
    scanf ("%d", &MFgBWmPN);
    for (int kWCA5clz = (235 - 235);
    kWCA5clz < MFgBWmPN; kWCA5clz = kWCA5clz + 1) {
        scanf ("%d", npHO4WjznB + kWCA5clz);
    }
    for (int kWCA5clz = (574 - 574);
    MFgBWmPN > kWCA5clz; kWCA5clz = kWCA5clz + 1) {
        SDZrzS[kWCA5clz] = (969 - 969);
    }
    for (int kWCA5clz = MFgBWmPN;
    kWCA5clz >= 0; kWCA5clz = kWCA5clz - 1)
        for (int g3ktUrdNPOi = kWCA5clz;
        MFgBWmPN > g3ktUrdNPOi; g3ktUrdNPOi = g3ktUrdNPOi + 1) {
            if ((npHO4WjznB[g3ktUrdNPOi] <= npHO4WjznB[kWCA5clz]) && (SDZrzS[kWCA5clz] <= SDZrzS[g3ktUrdNPOi] + 1))
                SDZrzS[kWCA5clz] = SDZrzS[g3ktUrdNPOi] + 1;
        }
    for (int kWCA5clz = 0;
    kWCA5clz < MFgBWmPN; kWCA5clz = kWCA5clz + 1) {
        if (SDZrzS[kWCA5clz] > X82Kpa7d)
            X82Kpa7d = SDZrzS[kWCA5clz];
    }
    printf ("%d", X82Kpa7d);
}

