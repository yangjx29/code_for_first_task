void  main () {
    int YvVX4kL2P, i, j, CVJWCyowS = 0, KY73NmbypS, q = 0, VdxYA1D = 0, UlU3xS = 0;
    char KWvRAU [510];
    struct   cc {
        char xpI9umD [6];
        int qQOA9nzf;
    }
    Nc41FfvTNkEj [500];
    char hgtRoDrNc [6];
    scanf ("%d %s", &YvVX4kL2P, KWvRAU);
    KY73NmbypS = strlen (KWvRAU);
    for (i = 0; KY73NmbypS -YvVX4kL2P >= i; i++) {
        for (j = 0; j < YvVX4kL2P; j++) {
            hgtRoDrNc[j] = KWvRAU[j + i];
        }
        hgtRoDrNc[j] = 0;
        if (!(0 != q)) {
            q = q + 1;
            strcpy (Nc41FfvTNkEj[0].xpI9umD, hgtRoDrNc);
            Nc41FfvTNkEj[0].qQOA9nzf = 1;
        }
        else {
            for (j = 0; q > j; j++) {
                if (strcmp (hgtRoDrNc, Nc41FfvTNkEj[j].xpI9umD) == 0) {
                    Nc41FfvTNkEj[j].qQOA9nzf++;
                    break;
                }
            }
            if (!(q != j)) {
                strcpy (Nc41FfvTNkEj[q].xpI9umD, hgtRoDrNc);
                Nc41FfvTNkEj[q].qQOA9nzf = 1;
                q++;
            }
        }
    }
    for (i = 0; q > i; i++) {
        if (Nc41FfvTNkEj[i].qQOA9nzf > VdxYA1D) {
            VdxYA1D = Nc41FfvTNkEj[i].qQOA9nzf;
        }
    }
    if (VdxYA1D == 1)
        ;
    else {
        printf ("%d\n", VdxYA1D);
        for (i = 0; i < q; i++) {
            if (Nc41FfvTNkEj[i].qQOA9nzf == VdxYA1D) {
                printf ("%s\n", Nc41FfvTNkEj[i].xpI9umD);
            }
        }
    }
}

