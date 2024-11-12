int main () {
    int nglbNJSfqk3p, col;
    int a [100] [100] = {0};
    int pDbsyMUBE, j;
    int step = 0;
    int t;
    scanf ("%d %d", &nglbNJSfqk3p, &col);
    {
        pDbsyMUBE = 0;
        while (pDbsyMUBE < nglbNJSfqk3p) {
            for (j = 0; j < col; j = j + 1)
                scanf ("%d", &a[pDbsyMUBE][j]);
            pDbsyMUBE = pDbsyMUBE + 1;
        };
    }
    j = 0;
    pDbsyMUBE = 0;
    if (nglbNJSfqk3p * col > 0) {
        printf ("%d", a[0][0]);
        step = step + 1;
    }
    while (step < nglbNJSfqk3p * col) {
        if (pDbsyMUBE + 1 < 0 || j - 1 < 0) {
            t = pDbsyMUBE;
            pDbsyMUBE = j;
            j = t + 1;
            if (pDbsyMUBE < nglbNJSfqk3p && j < col) {
                step = step + 1;
                printf ("\n%d", a[pDbsyMUBE][j]);
            };
        }
        else {
            pDbsyMUBE = pDbsyMUBE + 1;
            j = j - 1;
            if (pDbsyMUBE < nglbNJSfqk3p && j < col) {
                printf ("\n%d", a[pDbsyMUBE][j]);
                step = step + 1;
            };
        };
    }
    return 0;
}

