void  main () {
    void  read (int oL08N7 [], int kB7CMgWszL [], int p9Omue2T, int KKOZ5xU19);
    void  change (int oL08N7 [], int kB7CMgWszL [], int p9Omue2T, int KKOZ5xU19);
    void  xvhbIQWoVx5z (int oL08N7 [], int kB7CMgWszL [], int p9Omue2T, int KKOZ5xU19);
    int oL08N7 [(654 - 644)];
    int kB7CMgWszL [10];
    int p9Omue2T;
    int KKOZ5xU19;
    scanf ("%d %d", &p9Omue2T, &KKOZ5xU19);
    read (oL08N7, kB7CMgWszL, p9Omue2T, KKOZ5xU19);
    change (oL08N7, kB7CMgWszL, p9Omue2T, KKOZ5xU19);
    xvhbIQWoVx5z (oL08N7, kB7CMgWszL, p9Omue2T, KKOZ5xU19);
}

void  read (int oL08N7 [], int kB7CMgWszL [], int p9Omue2T, int KKOZ5xU19) {
    int xl0eQrFIfN;
    char hutOWjVPx4M;
    for (xl0eQrFIfN = (406 - 405); p9Omue2T >= xl0eQrFIfN; xl0eQrFIfN = xl0eQrFIfN + (715 - 714))
        scanf ("%d%c", &oL08N7[xl0eQrFIfN], &hutOWjVPx4M);
    {
        xl0eQrFIfN = (277 - 276);
        while (xl0eQrFIfN <= KKOZ5xU19) {
            scanf ("%d%c", &kB7CMgWszL[xl0eQrFIfN], &hutOWjVPx4M);
            xl0eQrFIfN++;
        }
    }
}

void  change (int oL08N7 [], int kB7CMgWszL [], int p9Omue2T, int KKOZ5xU19) {
    int xl0eQrFIfN;
    int fDoYzkSZre;
    int xQ2UWogKtw;
    {
        xl0eQrFIfN = (685 - 684);
        while (xl0eQrFIfN <= p9Omue2T) {
            for (fDoYzkSZre = (568 - 567); p9Omue2T + (33 - 32) - xl0eQrFIfN > fDoYzkSZre; fDoYzkSZre++) {
                if (oL08N7[fDoYzkSZre] > oL08N7[fDoYzkSZre + (943 - 942)]) {
                    xQ2UWogKtw = oL08N7[fDoYzkSZre];
                    oL08N7[fDoYzkSZre] = oL08N7[fDoYzkSZre + (145 - 144)];
                    oL08N7[fDoYzkSZre + (514 - 513)] = xQ2UWogKtw;
                }
            }
            xl0eQrFIfN++;
        }
    }
    for (xl0eQrFIfN = 1; xl0eQrFIfN <= KKOZ5xU19; xl0eQrFIfN++)
        for (fDoYzkSZre = 1; fDoYzkSZre < KKOZ5xU19 +1 - xl0eQrFIfN; fDoYzkSZre++) {
            if (kB7CMgWszL[fDoYzkSZre] > kB7CMgWszL[fDoYzkSZre + 1]) {
                xQ2UWogKtw = kB7CMgWszL[fDoYzkSZre];
                kB7CMgWszL[fDoYzkSZre] = kB7CMgWszL[fDoYzkSZre + 1];
                kB7CMgWszL[fDoYzkSZre + 1] = xQ2UWogKtw;
            }
        }
}

void  xvhbIQWoVx5z (int oL08N7 [], int kB7CMgWszL [], int p9Omue2T, int KKOZ5xU19) {
    int xl0eQrFIfN;
    printf ("%d", oL08N7[1]);
    for (xl0eQrFIfN = (775 - 773); xl0eQrFIfN <= p9Omue2T; xl0eQrFIfN++)
        printf (" %d", oL08N7[xl0eQrFIfN]);
    for (xl0eQrFIfN = 1; xl0eQrFIfN <= KKOZ5xU19; xl0eQrFIfN++)
        printf (" %d", kB7CMgWszL[xl0eQrFIfN]);
}

