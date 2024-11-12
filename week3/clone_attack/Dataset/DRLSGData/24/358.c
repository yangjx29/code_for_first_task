void  main () {
    char j8jpMqd [500];
    int num;
    int j1KrPiIj [50];
    int lBCvw5SJd;
    int y8mzvgLHw;
    int hbIphX67vg9x;
    int N7orMw [50];
    int Xoxw8yHZ7;
    int vuT67MDyI;
    int ncpEi1r;
    int gsnOLBE;
    gets (j8jpMqd);
    hbIphX67vg9x = 0;
    lBCvw5SJd = 0;
    num = 0;
    vuT67MDyI = 0;
    Xoxw8yHZ7 = 0;
    gsnOLBE = 20;
    y8mzvgLHw = 0;
    for (ncpEi1r = 0; ncpEi1r < 50; ncpEi1r = ncpEi1r + 1)
        N7orMw[ncpEi1r] = 1;
    for (ncpEi1r = 0; j8jpMqd[ncpEi1r] != '\0'; ncpEi1r = ncpEi1r + 1) {
        if (!(' ' != j8jpMqd[ncpEi1r])) {
            vuT67MDyI = 0;
            lBCvw5SJd = lBCvw5SJd + 1;
        }
        else {
            if (!(0 != vuT67MDyI)) {
                num = num + 1;
                vuT67MDyI = 1;
                j1KrPiIj[lBCvw5SJd] = ncpEi1r;
            }
            else {
                if (vuT67MDyI)
                    N7orMw[lBCvw5SJd]++;
            }
        }
    }
    for (ncpEi1r = 0; ncpEi1r < num; ncpEi1r = ncpEi1r + 1) {
        if (N7orMw[ncpEi1r] > Xoxw8yHZ7) {
            Xoxw8yHZ7 = N7orMw[ncpEi1r];
            hbIphX67vg9x = j1KrPiIj[ncpEi1r];
        }
        if (N7orMw[ncpEi1r] < gsnOLBE) {
            gsnOLBE = N7orMw[ncpEi1r];
            y8mzvgLHw = j1KrPiIj[ncpEi1r];
        }
    }
    for (ncpEi1r = hbIphX67vg9x; ncpEi1r < hbIphX67vg9x + Xoxw8yHZ7; ncpEi1r = ncpEi1r + 1)
        printf ("%c", j8jpMqd[ncpEi1r]);
    for (ncpEi1r = y8mzvgLHw; y8mzvgLHw + gsnOLBE > ncpEi1r; ncpEi1r = ncpEi1r + 1)
        printf ("%c", j8jpMqd[ncpEi1r]);
}

