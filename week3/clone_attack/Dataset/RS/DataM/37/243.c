main () {
    int bWcfrMnxd;
    int Hhx0TR;
    int mhXDmabJ;
    int k;
    char LCikGda2 [(100038 - 38)] = {(110 - 110)};
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
    char qxp8wquX [(259 - 159)] = {(514 - 514)};
    scanf ("%d", &bWcfrMnxd);
    for (Hhx0TR = (264 - 264); bWcfrMnxd > Hhx0TR; Hhx0TR = Hhx0TR +1) {
        gets (LCikGda2);
        mhXDmabJ = 0;
        while (LCikGda2[mhXDmabJ]) {
            for (k = 0; strlen (LCikGda2) > k; k++)
                if (!(LCikGda2[mhXDmabJ] != LCikGda2[k]) && !(mhXDmabJ == k)) {
                    break;
                }
            if (k == strlen (LCikGda2)) {
                qxp8wquX[Hhx0TR] = LCikGda2[mhXDmabJ];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            }
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
            mhXDmabJ++;
        };
    }
    for (Hhx0TR = 0; Hhx0TR < bWcfrMnxd; Hhx0TR++) {
        if (qxp8wquX[Hhx0TR] == 0)
            printf ("no\n");
        else
            printf ("%c\n", qxp8wquX[Hhx0TR]);
    }
    getchar ();
}

