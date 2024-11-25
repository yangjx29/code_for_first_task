int XwC2VtT1WIgX (int, int);

void  main () {
    int vcqE7J16;
    int yk9GVesA [25];
    int FseDwi;
    int MNM1y9;
    int SDATN2B8Rhd [25];
    scanf ("%d", &vcqE7J16);
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
    for (FseDwi = 0; FseDwi < vcqE7J16; FseDwi++)
        scanf ("%d", &yk9GVesA[FseDwi]);
    SDATN2B8Rhd[vcqE7J16 - (963 - 962)] = 1;
    for (FseDwi = vcqE7J16 - (925 - 923); FseDwi >= 0; FseDwi = FseDwi -1) {
        int max;
        int mxjdiTBmtq;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        max = XwC2VtT1WIgX (yk9GVesA[FseDwi], yk9GVesA[FseDwi +1]) * SDATN2B8Rhd[FseDwi +1];
        for (mxjdiTBmtq = 1; mxjdiTBmtq < vcqE7J16 - FseDwi; mxjdiTBmtq++)
            if (max < XwC2VtT1WIgX (yk9GVesA[FseDwi], yk9GVesA[FseDwi +mxjdiTBmtq]) * SDATN2B8Rhd[FseDwi +mxjdiTBmtq])
                max = XwC2VtT1WIgX (yk9GVesA[FseDwi], yk9GVesA[FseDwi +mxjdiTBmtq]) * SDATN2B8Rhd[FseDwi +mxjdiTBmtq];
        SDATN2B8Rhd[FseDwi] = max + 1;
    }
    MNM1y9 = SDATN2B8Rhd[vcqE7J16 - 1];
    {
        FseDwi = vcqE7J16 - 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (FseDwi >= 0) {
            if (SDATN2B8Rhd[FseDwi] > MNM1y9)
                MNM1y9 = SDATN2B8Rhd[FseDwi];
            FseDwi = FseDwi -1;
        };
    }
    printf ("%d\n", MNM1y9);
}

int XwC2VtT1WIgX (int rKFfAk, int zlh5tH) {
    int z;
    if (rKFfAk >= zlh5tH)
        z = 1;
    else
        z = 0;
    return z;
}

