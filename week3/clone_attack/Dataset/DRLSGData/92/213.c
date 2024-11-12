main () {
    int qQk5NmA2vs;
    scanf ("%d", &qQk5NmA2vs);
    for (; qQk5NmA2vs != (735 - 735);) {
        int Kqu28wSpNYvV, j;
        int a [1002], wE6C5TPraym [1002], b5bN8DhxOjA = (318 - 318), mrn6XCimw = 0;
        for (int Kqu28wSpNYvV = (649 - 648);
        Kqu28wSpNYvV <= qQk5NmA2vs; Kqu28wSpNYvV = Kqu28wSpNYvV +1) {
            scanf ("%d", &a[Kqu28wSpNYvV -1]);
        }
        {
            int Kqu28wSpNYvV = 1;
            for (; Kqu28wSpNYvV <= qQk5NmA2vs;) {
                Kqu28wSpNYvV = Kqu28wSpNYvV +1;
                scanf ("%d", &wE6C5TPraym[Kqu28wSpNYvV -1]);
            };
        }
        wE6C5TPraym[qQk5NmA2vs] = 1000001;
        a[qQk5NmA2vs] = -1;
        for (int Kqu28wSpNYvV = qQk5NmA2vs - (636 - 634);
        Kqu28wSpNYvV >= 0; Kqu28wSpNYvV = Kqu28wSpNYvV -1) {
            for (int j = 0;
            j <= Kqu28wSpNYvV; j = j + 1) {
                if (a[j + 1] <= a[j]) {
                    int x = 0;
                    x = a[j + 1];
                    a[j + 1] = a[j];
                    a[j] = x;
                };
            };
        }
        for (int Kqu28wSpNYvV = qQk5NmA2vs - 2;
        Kqu28wSpNYvV >= 0; Kqu28wSpNYvV = Kqu28wSpNYvV -1) {
            int j = 0;
            while (j <= Kqu28wSpNYvV) {
                if (wE6C5TPraym[j + 1] <= wE6C5TPraym[j]) {
                    int x = 0;
                    x = wE6C5TPraym[j + 1];
                    wE6C5TPraym[j + 1] = wE6C5TPraym[j];
                    wE6C5TPraym[j] = x;
                }
                j = j + 1;
            };
        }
        {
            Kqu28wSpNYvV = 0;
            while (Kqu28wSpNYvV <= qQk5NmA2vs - 1) {
                int IXLFqcMpT, alq0rx16S = -1;
                {
                    IXLFqcMpT = 0;
                    while (IXLFqcMpT <= qQk5NmA2vs - 1) {
                        for (; wE6C5TPraym[IXLFqcMpT] == 1000000;) {
                            IXLFqcMpT = IXLFqcMpT +1;
                        }
                        if (a[Kqu28wSpNYvV] <= wE6C5TPraym[IXLFqcMpT])
                            break;
                        else
                            alq0rx16S = IXLFqcMpT;
                        IXLFqcMpT = IXLFqcMpT +1;
                    };
                }
                if (alq0rx16S != -1) {
                    wE6C5TPraym[alq0rx16S] = 1000000;
                    mrn6XCimw = mrn6XCimw + 1;
                    a[Kqu28wSpNYvV] = -1;
                }
                Kqu28wSpNYvV = Kqu28wSpNYvV +1;
            };
        }
        {
            Kqu28wSpNYvV = 0;
            while (Kqu28wSpNYvV <= qQk5NmA2vs - 1) {
                {
                    j = 0;
                    while (j <= qQk5NmA2vs - 1) {
                        if (a[Kqu28wSpNYvV] == wE6C5TPraym[j]) {
                            wE6C5TPraym[j] = 1000000;
                            a[Kqu28wSpNYvV] = -1;
                            b5bN8DhxOjA = b5bN8DhxOjA + 1;
                        }
                        j = j + 1;
                    };
                }
                Kqu28wSpNYvV = Kqu28wSpNYvV +1;
            };
        }
        qQk5NmA2vs = -(877 - 677) * qQk5NmA2vs + 400 * mrn6XCimw + 200 * b5bN8DhxOjA;
        printf ("%d\n", qQk5NmA2vs);
        scanf ("%d", &qQk5NmA2vs);
    };
}

