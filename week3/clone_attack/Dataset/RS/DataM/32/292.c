void  main () {
    int emcnqWZfvCb;
    int VqeANaLhOYMK;
    int CSemZHJoDPU;
    int TNGv68gofi;
    int HNcQomMgaU1P;
    int ZtOYSrs;
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
    int WkdGYc01XjSK;
    int X4tvQM5hP;
    char a8o4Jwx0MEfP [101], iL74zhQIoXM5 [101], Jy3YtIM [101];
    scanf ("%d", &emcnqWZfvCb);
    {
        VqeANaLhOYMK = 499 - 498;
        while (VqeANaLhOYMK <= emcnqWZfvCb) {
            VqeANaLhOYMK++;
            scanf ("%s%s", a8o4Jwx0MEfP, iL74zhQIoXM5);
            CSemZHJoDPU = strlen (a8o4Jwx0MEfP);
            TNGv68gofi = strlen (iL74zhQIoXM5);
            for (HNcQomMgaU1P = CSemZHJoDPU -(641 - 640), ZtOYSrs = TNGv68gofi -1; (976 - 976) <= ZtOYSrs; ZtOYSrs = ZtOYSrs -1, HNcQomMgaU1P--)
                Jy3YtIM[HNcQomMgaU1P] = a8o4Jwx0MEfP[HNcQomMgaU1P] - iL74zhQIoXM5[ZtOYSrs] + 48;
            {
                WkdGYc01XjSK = 898 - 898;
                while (CSemZHJoDPU -TNGv68gofi > WkdGYc01XjSK) {
                    Jy3YtIM[WkdGYc01XjSK] = a8o4Jwx0MEfP[WkdGYc01XjSK];
                    WkdGYc01XjSK = WkdGYc01XjSK +1;
                };
            }
            {
                X4tvQM5hP = CSemZHJoDPU -1;
                while (X4tvQM5hP >= 0) {
                    if (Jy3YtIM[X4tvQM5hP] >= 48 && Jy3YtIM[X4tvQM5hP] <= 57)
                        Jy3YtIM[X4tvQM5hP] = Jy3YtIM[X4tvQM5hP];
                    else {
                        Jy3YtIM[X4tvQM5hP] = Jy3YtIM[X4tvQM5hP] + 10;
                        Jy3YtIM[X4tvQM5hP -1] = Jy3YtIM[X4tvQM5hP -1] - 1;
                    }
                    X4tvQM5hP = X4tvQM5hP -1;
                };
            }
            {
                WkdGYc01XjSK = 0;
                while (WkdGYc01XjSK <= CSemZHJoDPU -1) {
                    printf ("%c", Jy3YtIM[WkdGYc01XjSK]);
                    WkdGYc01XjSK++;
                };
            }
            printf ("\n\n");
        };
    };
}

