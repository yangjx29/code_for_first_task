void  main () {
    int z0doDBLjb;
    int FEGMyBSq1cxu;
    int Iq0H4TYoI5A;
    int a [(1002 - 901)] [101];
    int KLI8euv4 [101];
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
    int uJg6oUE;
    char aomM0OibZ3C [101], gEq0rf [101], SxWs12k [101], Tempstr2 [101];
    scanf ("%d\n", &z0doDBLjb);
    for (Iq0H4TYoI5A = (731 - 731); z0doDBLjb > Iq0H4TYoI5A; Iq0H4TYoI5A = Iq0H4TYoI5A +1) {
        gets (aomM0OibZ3C);
        gets (gEq0rf);
        if (!(z0doDBLjb - 1 == Iq0H4TYoI5A))
            gets (SxWs12k);
        KLI8euv4[Iq0H4TYoI5A] = strlen (aomM0OibZ3C);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        uJg6oUE = strlen (gEq0rf);
        for (FEGMyBSq1cxu = 0; FEGMyBSq1cxu < KLI8euv4[Iq0H4TYoI5A] - uJg6oUE; FEGMyBSq1cxu = FEGMyBSq1cxu +1)
            Tempstr2[FEGMyBSq1cxu] = '0';
        for (; KLI8euv4[Iq0H4TYoI5A] > FEGMyBSq1cxu; FEGMyBSq1cxu++)
            Tempstr2[FEGMyBSq1cxu] = gEq0rf[FEGMyBSq1cxu -(KLI8euv4[Iq0H4TYoI5A] - uJg6oUE)];
        for (FEGMyBSq1cxu = 0; KLI8euv4[Iq0H4TYoI5A] > FEGMyBSq1cxu; FEGMyBSq1cxu++)
            a[Iq0H4TYoI5A][FEGMyBSq1cxu] = aomM0OibZ3C[FEGMyBSq1cxu] - Tempstr2[FEGMyBSq1cxu];
        for (FEGMyBSq1cxu = KLI8euv4[Iq0H4TYoI5A] - 1; 0 <= FEGMyBSq1cxu; FEGMyBSq1cxu--) {
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
            if (a[Iq0H4TYoI5A][FEGMyBSq1cxu] < 0) {
                a[Iq0H4TYoI5A][FEGMyBSq1cxu] = a[Iq0H4TYoI5A][FEGMyBSq1cxu] + 10;
                a[Iq0H4TYoI5A][FEGMyBSq1cxu -1] = a[Iq0H4TYoI5A][FEGMyBSq1cxu -1] - 1;
            };
        };
    }
    for (Iq0H4TYoI5A = 0; Iq0H4TYoI5A < z0doDBLjb; Iq0H4TYoI5A = Iq0H4TYoI5A +1) {
        {
            FEGMyBSq1cxu = 0;
            while (KLI8euv4[Iq0H4TYoI5A] > FEGMyBSq1cxu) {
                if (a[Iq0H4TYoI5A][FEGMyBSq1cxu] != 0)
                    break;
                FEGMyBSq1cxu++;
            };
        }
        for (; FEGMyBSq1cxu < KLI8euv4[Iq0H4TYoI5A]; FEGMyBSq1cxu++)
            printf ("%d", a[Iq0H4TYoI5A][FEGMyBSq1cxu]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        printf ("\n");
    };
}

