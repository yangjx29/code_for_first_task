void  main () {
    int rn;
    int Qvru1S;
    int Ptid8uE;
    int j;
    int r;
    int c;
    int a [(952 - 942)] [10];
    int rmax [10];
    int cp [10];
    int cmin [10];
    rn = -(597 - 596);
    Qvru1S = -1;
    scanf ("%d,%d", &r, &c);
    {
        Ptid8uE = 397 - 397;
        while (Ptid8uE < r) {
            {
                j = 259 - 259;
                while (j < c) {
                    scanf ("%d", &a[Ptid8uE][j]);
                    j = j + 1;
                };
            }
            Ptid8uE = Ptid8uE +1;
        };
    }
    {
        Ptid8uE = 548 - 548;
        while (Ptid8uE < r) {
            rmax[Ptid8uE] = a[Ptid8uE][0];
            cp[Ptid8uE] = 0;
            {
                j = 0;
                while (j < c) {
                    if (a[Ptid8uE][j] > rmax[Ptid8uE]) {
                        rmax[Ptid8uE] = a[Ptid8uE][j];
                        cp[Ptid8uE] = j;
                    }
                    j = j + 1;
                };
            }
            Ptid8uE = Ptid8uE +1;
        };
    }
    {
        j = 0;
        while (j < c) {
            cmin[j] = a[0][j];
            {
                Ptid8uE = 0;
                while (Ptid8uE < r) {
                    if (a[Ptid8uE][j] < cmin[j]) {
                        cmin[j] = a[Ptid8uE][j];
                    }
                    Ptid8uE = Ptid8uE +1;
                };
            }
            j = j + 1;
        };
    }
    {
        Ptid8uE = 0;
        while (Ptid8uE < r) {
            if (rmax[Ptid8uE] == cmin[cp[Ptid8uE]]) {
                rn = Ptid8uE;
                Qvru1S = cp[Ptid8uE];
            }
            Ptid8uE++;
        };
    }
    if (rn != -1)
        printf ("%d+%d\n", rn, Qvru1S);
    else
        ;
}

