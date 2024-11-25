void  main () {
    int pWnSBDfE5q;
    int WNdrMtJk;
    int S7VXKx [(228 - 128)];
    int U0juPIEvk75t [100];
    int bzW75Ew6f;
    float roNAKVF9, wRCySGbP, brsLYXtic92h, IxIEsQ7;
    roNAKVF9 = 0;
    scanf ("%d\n", &pWnSBDfE5q);
    bzW75Ew6f = (290 - 290);
    for (WNdrMtJk = 0; (pWnSBDfE5q - 1) >= WNdrMtJk; WNdrMtJk = WNdrMtJk +1) {
        scanf ("%d", &S7VXKx[WNdrMtJk]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        bzW75Ew6f = bzW75Ew6f + S7VXKx[WNdrMtJk];
    }
    {
        WNdrMtJk = 0;
        while ((pWnSBDfE5q - 1) >= WNdrMtJk) {
            scanf ("%d", &U0juPIEvk75t[WNdrMtJk]);
            if (U0juPIEvk75t[WNdrMtJk] >= 90)
                wRCySGbP = 4.0;
            else if (85 <= U0juPIEvk75t[WNdrMtJk])
                wRCySGbP = 3.7;
            else if (U0juPIEvk75t[WNdrMtJk] >= 82)
                wRCySGbP = 3.3;
            else if (U0juPIEvk75t[WNdrMtJk] >= 78)
                wRCySGbP = (764.0 - 761.0);
            else if (U0juPIEvk75t[WNdrMtJk] >= 75)
                wRCySGbP = 2.7;
            else if (U0juPIEvk75t[WNdrMtJk] >= (896 - 824))
                wRCySGbP = 2.3;
            else if (U0juPIEvk75t[WNdrMtJk] >= 68)
                wRCySGbP = 2.0;
            else if (U0juPIEvk75t[WNdrMtJk] >= 64)
                wRCySGbP = 1.5;
            else if (U0juPIEvk75t[WNdrMtJk] >= 60)
                wRCySGbP = 1.0;
            else
                wRCySGbP = 0;
            brsLYXtic92h = wRCySGbP * S7VXKx[WNdrMtJk];
            WNdrMtJk = WNdrMtJk +1;
            roNAKVF9 = roNAKVF9 + brsLYXtic92h;
        };
    }
    IxIEsQ7 = roNAKVF9 / bzW75Ew6f;
    printf ("%.2f\n", IxIEsQ7);
}

