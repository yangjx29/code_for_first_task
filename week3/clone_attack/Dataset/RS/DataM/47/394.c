void  main () {
    int l9McBStAs51E, pPB69sIgyDuJ, *UDL4roEiR, *hOp7xl, n, MXTsjOKFR [102];
    scanf ("%d", &n);
    UDL4roEiR = MXTsjOKFR;
    for (l9McBStAs51E = 0; l9McBStAs51E < n; l9McBStAs51E = l9McBStAs51E + 1)
        scanf ("%d", UDL4roEiR++);
    UDL4roEiR = UDL4roEiR -1;
    {
        hOp7xl = MXTsjOKFR;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (hOp7xl - UDL4roEiR <= 0) {
            pPB69sIgyDuJ = *hOp7xl;
            *hOp7xl = *UDL4roEiR;
            hOp7xl = hOp7xl + 1;
            *UDL4roEiR = pPB69sIgyDuJ;
            UDL4roEiR = UDL4roEiR -1;
        };
    }
    for (UDL4roEiR = MXTsjOKFR; UDL4roEiR < MXTsjOKFR +n; UDL4roEiR = UDL4roEiR +1)
        printf ("%d%c", *UDL4roEiR, (UDL4roEiR < MXTsjOKFR +n - 1) ? ' ' : '\n');
}

