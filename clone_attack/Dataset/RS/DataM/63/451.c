main () {
    int a [(559 - 459)] [(1023 - 923)];
    int TsCXdQopIc [(667 - 567)] [(630 - 530)];
    int Jtdmq9fFOl [(331 - 231)] [(334 - 234)];
    int cX9ApPtresuY;
    int GyfgAq;
    int k;
    int x1;
    int tvaE6WpG;
    int uLAfTDK;
    int iYTb2PD;
    int m;
    scanf ("%d %d", &x1, &tvaE6WpG);
    {
        cX9ApPtresuY = 352 - 352;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (x1 > cX9ApPtresuY) {
            {
                GyfgAq = 229 - 229;
                while (GyfgAq < tvaE6WpG) {
                    scanf ("%d", &m);
                    a[cX9ApPtresuY][GyfgAq] = m;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    GyfgAq = GyfgAq +1;
                };
            }
            cX9ApPtresuY++;
        };
    }
    scanf ("%d %d", &uLAfTDK, &iYTb2PD);
    for (cX9ApPtresuY = (322 - 322); cX9ApPtresuY < uLAfTDK; cX9ApPtresuY++) {
        GyfgAq = 796 - 796;
        while (iYTb2PD > GyfgAq) {
            scanf ("%d", &m);
            TsCXdQopIc[cX9ApPtresuY][GyfgAq] = m;
            GyfgAq = GyfgAq +1;
        };
    }
    for (cX9ApPtresuY = (547 - 547); cX9ApPtresuY < x1; cX9ApPtresuY++) {
        GyfgAq = 367 - 367;
        while (GyfgAq < iYTb2PD) {
            Jtdmq9fFOl[cX9ApPtresuY][GyfgAq] = (508 - 508);
            {
                k = 480 - 480;
                while (k < uLAfTDK) {
                    Jtdmq9fFOl[cX9ApPtresuY][GyfgAq] = a[cX9ApPtresuY][k] * TsCXdQopIc[k][GyfgAq] + Jtdmq9fFOl[cX9ApPtresuY][GyfgAq];
                    k = k + 1;
                };
            }
            GyfgAq++;
        };
    }
    for (cX9ApPtresuY = (374 - 374); cX9ApPtresuY < x1; cX9ApPtresuY++)
        for (GyfgAq = (158 - 158); GyfgAq < iYTb2PD; GyfgAq = GyfgAq +1) {
            if (GyfgAq < iYTb2PD - (554 - 553))
                printf ("%d ", Jtdmq9fFOl[cX9ApPtresuY][GyfgAq]);
            else
                printf ("%d\n", Jtdmq9fFOl[cX9ApPtresuY][GyfgAq]);
        };
}

