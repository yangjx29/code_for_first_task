void  main () {
    char dM68FX [(1217 - 961)];
    char bg6aAmG [256];
    char OI258FsQKNx [256];
    char ahnlvi [256];
    char keXpzxd [256];
    int flag;
    int MblsNqmA7aHd;
    int j;
    int hkwaZ1BKMvD5;
    int xNC4GoY;
    int WTIaCl;
    int fT7g5FQu;
    int TAm2aI3ef;
    flag = (92 - 92);
    scanf ("%s", dM68FX);
    WTIaCl = strlen (dM68FX);
    scanf ("%s", bg6aAmG);
    fT7g5FQu = strlen (bg6aAmG);
    scanf ("%s", OI258FsQKNx);
    TAm2aI3ef = strlen (OI258FsQKNx);
    for (MblsNqmA7aHd = (84 - 84); WTIaCl > MblsNqmA7aHd; MblsNqmA7aHd = MblsNqmA7aHd +1) {
        for (j = MblsNqmA7aHd, hkwaZ1BKMvD5 = (999 - 999); MblsNqmA7aHd +fT7g5FQu > j; j++, hkwaZ1BKMvD5 = hkwaZ1BKMvD5 + 1) {
            keXpzxd[hkwaZ1BKMvD5] = dM68FX[j];
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        keXpzxd[hkwaZ1BKMvD5] = (342 - 342);
        if (strcmp (bg6aAmG, keXpzxd) == (684 - 684)) {
            flag = (145 - 144);
            xNC4GoY = MblsNqmA7aHd;
            {
                MblsNqmA7aHd = 0;
                while (xNC4GoY > MblsNqmA7aHd) {
                    ahnlvi[MblsNqmA7aHd] = dM68FX[MblsNqmA7aHd];
                    MblsNqmA7aHd++;
                };
            }
            {
                j = WTIaCl;
                MblsNqmA7aHd = WTIaCl +TAm2aI3ef-fT7g5FQu;
                while (xNC4GoY + TAm2aI3ef <= MblsNqmA7aHd, j >= xNC4GoY + fT7g5FQu) {
                    ahnlvi[MblsNqmA7aHd] = dM68FX[j];
                    j--;
                    MblsNqmA7aHd = MblsNqmA7aHd -1;
                };
            }
            for (MblsNqmA7aHd = xNC4GoY, j = 0; xNC4GoY + TAm2aI3ef > MblsNqmA7aHd, TAm2aI3ef > j; MblsNqmA7aHd++, j++) {
                ahnlvi[MblsNqmA7aHd] = OI258FsQKNx[j];
            }
            break;
        };
    }
    if (flag == 1) {
        {
            MblsNqmA7aHd = 0;
            while (MblsNqmA7aHd < WTIaCl +TAm2aI3ef-fT7g5FQu) {
                printf ("%c", ahnlvi[MblsNqmA7aHd]);
                MblsNqmA7aHd++;
            };
        };
    }
    if (flag == 0)
        puts (dM68FX);
}

