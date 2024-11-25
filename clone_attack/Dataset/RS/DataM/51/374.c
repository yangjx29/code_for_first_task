int main () {
    char FBg5P6S [(1490 - 970)], ZvSrcqXVs8 [(605 - 85)] [5];
    int l0m5lC6KFkh [520], ckIXqx2, m, ukYQHF [520], h4XgDjTnhCZ;
    memset (FBg5P6S, '\0', sizeof (FBg5P6S));
    memset (ZvSrcqXVs8, '\0', sizeof (ZvSrcqXVs8));
    memset (l0m5lC6KFkh, (720 - 720), sizeof (l0m5lC6KFkh));
    memset (ukYQHF, (365 - 365), sizeof (ukYQHF));
    scanf ("%d", &ckIXqx2);
    scanf ("%s", FBg5P6S);
    for (int KmEMITy6 = (502 - 502);
    strlen (FBg5P6S) + (192 - 191) - ckIXqx2 >= KmEMITy6; KmEMITy6 = KmEMITy6 +1) {
        m = (693 - 693);
        for (int j = KmEMITy6;
        KmEMITy6 +ckIXqx2 > j; j++) {
            ZvSrcqXVs8[KmEMITy6][m] = FBg5P6S[j];
            m = m + 1;
        };
    }
    l0m5lC6KFkh[0] = (488 - 487);
    {
        int t = (573 - 572);
        while (strlen (FBg5P6S) + (322 - 321) - ckIXqx2 >= t) {
            l0m5lC6KFkh[t] = 1;
            for (int k = 0;
            t > k; k++) {
                if (l0m5lC6KFkh[k] == 0)
                    continue;
                if (!(0 != strcmp (ZvSrcqXVs8[k], ZvSrcqXVs8[t]))) {
                    l0m5lC6KFkh[k]++;
                    l0m5lC6KFkh[t] = 0;
                    break;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            t = t + 1;
        };
    }
    h4XgDjTnhCZ = 1;
    for (int zE1LQwtGT = 1;
    strlen (FBg5P6S) + 1 - ckIXqx2 >= zE1LQwtGT; zE1LQwtGT++) {
        if (l0m5lC6KFkh[zE1LQwtGT] > l0m5lC6KFkh[ukYQHF[0]]) {
            ukYQHF[0] = zE1LQwtGT;
            for (int y = 1;
            y <= h4XgDjTnhCZ; y++) {
                ukYQHF[y] = 0;
            }
            h4XgDjTnhCZ = 1;
            continue;
        }
        if (l0m5lC6KFkh[zE1LQwtGT] == l0m5lC6KFkh[ukYQHF[0]]) {
            h4XgDjTnhCZ++;
            ukYQHF[h4XgDjTnhCZ - 1] = zE1LQwtGT;
        };
    }
    if (l0m5lC6KFkh[ukYQHF[0]] <= 1) {
        printf ("NO");
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else {
        printf ("%d\n", l0m5lC6KFkh[ukYQHF[0]]);
        for (int frSoPVAQqR = 0;
        frSoPVAQqR < h4XgDjTnhCZ; frSoPVAQqR++) {
            printf ("%s\n", ZvSrcqXVs8[ukYQHF[frSoPVAQqR]]);
        };
    }
    return 0;
}

