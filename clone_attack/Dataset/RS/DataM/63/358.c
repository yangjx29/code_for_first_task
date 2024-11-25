int main () {
    int I57euKmz2RrI [101] [101];
    int wvlwFEIu [101] [101];
    int PXF3lSpQ [101] [101];
    int BrUg1MR5a;
    int jb9KkzVj;
    int L4srjO;
    int w3aPgO7xyC;
    int i;
    int cxsVe8;
    int UyqRfPn;
    int yATqCkEP;
    getchar ();
    scanf ("%d%d", &BrUg1MR5a, &L4srjO);
    {
        i = 26 - 25;
        while (i <= BrUg1MR5a) {
            {
                cxsVe8 = 266 - 265;
                while (cxsVe8 <= L4srjO) {
                    scanf ("%d", &I57euKmz2RrI[i][cxsVe8]);
                    cxsVe8++;
                };
            }
            i++;
        };
    }
    scanf ("%d%d", &jb9KkzVj, &w3aPgO7xyC);
    {
        i = 128 - 127;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (i <= jb9KkzVj) {
            {
                cxsVe8 = 21 - 20;
                while (cxsVe8 <= w3aPgO7xyC) {
                    scanf ("%d", &wvlwFEIu[i][cxsVe8]);
                    cxsVe8++;
                };
            }
            i++;
        };
    }
    for (i = 1; i <= BrUg1MR5a; i++) {
        for (UyqRfPn = 1; UyqRfPn <= L4srjO; UyqRfPn++) {
            PXF3lSpQ[i][1] = PXF3lSpQ[i][1] + I57euKmz2RrI[i][UyqRfPn] * wvlwFEIu[UyqRfPn][1];
        }
        printf ("%d", PXF3lSpQ[i][1]);
        {
            cxsVe8 = 2;
            while (cxsVe8 <= w3aPgO7xyC) {
                for (UyqRfPn = 1; UyqRfPn <= L4srjO; UyqRfPn++) {
                    PXF3lSpQ[i][cxsVe8] = PXF3lSpQ[i][cxsVe8] + I57euKmz2RrI[i][UyqRfPn] * wvlwFEIu[UyqRfPn][cxsVe8];
                }
                printf (" %d", PXF3lSpQ[i][cxsVe8]);
                cxsVe8++;
            };
        }
        printf ("\n");
    }
    getchar ();
    getchar ();
}

