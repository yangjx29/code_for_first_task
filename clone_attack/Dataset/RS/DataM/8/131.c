int a, zlGndHczfFrw, cGjExsyCYB2d [20], c7mxDlrXH [20], s [20], l, MZN0YUCag, eJFwpP;

void  TthuY0y () {
    scanf ("%d%d", &a, &zlGndHczfFrw);
    {
        MZN0YUCag = 854 - 854;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (MZN0YUCag < a) {
            scanf ("%d", &cGjExsyCYB2d[MZN0YUCag]);
            MZN0YUCag = MZN0YUCag +1;
        };
    }
    {
        MZN0YUCag = 0;
        while (MZN0YUCag < zlGndHczfFrw) {
            scanf ("%d", &c7mxDlrXH[MZN0YUCag]);
            MZN0YUCag = MZN0YUCag +1;
        };
    };
}

int FHvZfNQ9eI (int s []) {
    {
        MZN0YUCag = 0;
        while (MZN0YUCag < a + zlGndHczfFrw - (481 - 480)) {
            printf ("%d ", s[MZN0YUCag]);
            MZN0YUCag = MZN0YUCag +1;
        };
    }
    printf ("%d", s[a + zlGndHczfFrw - 1]);
    return 0;
}

int sRIDj9kweTs4 (int cRGSlCEfL [], int k) {
    for (MZN0YUCag = 1; MZN0YUCag < k; MZN0YUCag = MZN0YUCag +1) {
        eJFwpP = 0;
        while (eJFwpP < k - MZN0YUCag) {
            if (cRGSlCEfL[eJFwpP + 1] <= cRGSlCEfL[eJFwpP]) {
                l = cRGSlCEfL[eJFwpP];
                cRGSlCEfL[eJFwpP] = cRGSlCEfL[eJFwpP + 1];
                cRGSlCEfL[eJFwpP + 1] = l;
            }
            eJFwpP = eJFwpP + 1;
        };
    }
    return 0;
}

int pDvXnfI (int cGjExsyCYB2d [], int c7mxDlrXH []) {
    {
        MZN0YUCag = 0;
        while (MZN0YUCag < a) {
            s[MZN0YUCag] = cGjExsyCYB2d[MZN0YUCag];
            MZN0YUCag++;
        };
    }
    {
        MZN0YUCag = a;
        while (MZN0YUCag < zlGndHczfFrw + a) {
            s[MZN0YUCag] = c7mxDlrXH[MZN0YUCag -a];
            MZN0YUCag++;
        };
    }
    return 0;
}

void  main () {
    FHvZfNQ9eI (s);
    TthuY0y ();
    sRIDj9kweTs4 (cGjExsyCYB2d, a);
    sRIDj9kweTs4 (c7mxDlrXH, zlGndHczfFrw);
    pDvXnfI (cGjExsyCYB2d, c7mxDlrXH);
}

