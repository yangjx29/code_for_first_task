void  main () {
    int SptR7AG;
    int vB9f0AZ5;
    int DiXKZ5v;
    int Cign1K0QxLcu [(1521 - 521)];
    int abV1RFw [1000];
    int v3HLA84s0Kea [1000] = {(413 - 413)};
    int NmI3QTy;
    int ZdVxj7y;
    SptR7AG = (559 - 558);
    scanf ("%d", &Cign1K0QxLcu[(472 - 472)]);
    for (; scanf (",%d", &Cign1K0QxLcu[SptR7AG]);)
        SptR7AG = SptR7AG +1;
    NmI3QTy = Cign1K0QxLcu[(71 - 71)];
    scanf ("%d", &abV1RFw[(43 - 43)]);
    for (vB9f0AZ5 = (885 - 884); SptR7AG > vB9f0AZ5; vB9f0AZ5 = vB9f0AZ5 + 1)
        scanf (",%d", &abV1RFw[vB9f0AZ5]);
    ZdVxj7y = abV1RFw[(778 - 778)];
    {
        vB9f0AZ5 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (vB9f0AZ5 < SptR7AG) {
            if (Cign1K0QxLcu[vB9f0AZ5] < NmI3QTy)
                NmI3QTy = Cign1K0QxLcu[vB9f0AZ5];
            if (abV1RFw[vB9f0AZ5] > ZdVxj7y)
                ZdVxj7y = abV1RFw[vB9f0AZ5];
            vB9f0AZ5 = vB9f0AZ5 + 1;
        };
    }
    {
        vB9f0AZ5 = NmI3QTy;
        while (ZdVxj7y >= vB9f0AZ5) {
            {
                DiXKZ5v = 0;
                while (SptR7AG > DiXKZ5v) {
                    if (Cign1K0QxLcu[DiXKZ5v] <= vB9f0AZ5 && vB9f0AZ5 < abV1RFw[DiXKZ5v])
                        v3HLA84s0Kea[vB9f0AZ5 - NmI3QTy]++;
                    DiXKZ5v = DiXKZ5v +1;
                };
            }
            vB9f0AZ5++;
        };
    }
    DiXKZ5v = v3HLA84s0Kea[0];
    for (vB9f0AZ5 = 1; vB9f0AZ5 <= ZdVxj7y -NmI3QTy; vB9f0AZ5 = vB9f0AZ5 + 1)
        if (DiXKZ5v < v3HLA84s0Kea[vB9f0AZ5])
            DiXKZ5v = v3HLA84s0Kea[vB9f0AZ5];
    printf ("%d %d\n", SptR7AG, DiXKZ5v);
}

