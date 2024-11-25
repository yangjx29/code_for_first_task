main () {
    int rsC1ir, pqFfsR4M, BaR69WZuDiS, k, Us4LaqCG2VpN, ETr750xyF, bsELBU82g [(683 - 182)], jrqoROW;
    char v8UuAq59 [501], SVasHz0Ru [501] [6];
    gets (v8UuAq59);
    k = 0;
    scanf ("%d\n", &rsC1ir);
    for (pqFfsR4M = (480 - 480); 501 > pqFfsR4M; pqFfsR4M = pqFfsR4M + 1)
        bsELBU82g[pqFfsR4M] = 1;
    ETr750xyF = strlen (v8UuAq59);
    BaR69WZuDiS = (386 - 386);
    for (; BaR69WZuDiS <= ETr750xyF -rsC1ir;) {
        pqFfsR4M = 0;
        for (; pqFfsR4M < rsC1ir;) {
            SVasHz0Ru[BaR69WZuDiS][pqFfsR4M] = v8UuAq59[k];
            k = k + 1;
            pqFfsR4M = pqFfsR4M + 1;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        BaR69WZuDiS++;
        k = BaR69WZuDiS;
    }
    for (pqFfsR4M = 1; pqFfsR4M <= ETr750xyF -rsC1ir; pqFfsR4M = pqFfsR4M + 1)
        if (strcmp (SVasHz0Ru[0], SVasHz0Ru[pqFfsR4M]) == 0)
            bsELBU82g[0]++;
    {
        Us4LaqCG2VpN = 1;
        while (Us4LaqCG2VpN <= ETr750xyF -rsC1ir) {
            for (pqFfsR4M = Us4LaqCG2VpN +1; pqFfsR4M <= ETr750xyF -rsC1ir; pqFfsR4M = pqFfsR4M + 1)
                if (strcmp (SVasHz0Ru[Us4LaqCG2VpN], SVasHz0Ru[pqFfsR4M]) == 0)
                    bsELBU82g[Us4LaqCG2VpN]++;
            Us4LaqCG2VpN++;
        };
    }
    jrqoROW = bsELBU82g[0];
    for (BaR69WZuDiS = 1; BaR69WZuDiS <= ETr750xyF -rsC1ir; BaR69WZuDiS = BaR69WZuDiS +1)
        if (bsELBU82g[BaR69WZuDiS] > jrqoROW)
            jrqoROW = bsELBU82g[BaR69WZuDiS];
    if (jrqoROW <= 1)
        printf ("NO");
    else {
        printf ("%d\n", jrqoROW);
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
        for (BaR69WZuDiS = 0; BaR69WZuDiS <= ETr750xyF -rsC1ir + 1; BaR69WZuDiS++) {
            if (bsELBU82g[BaR69WZuDiS] == jrqoROW)
                puts (SVasHz0Ru[BaR69WZuDiS]);
        };
    };
}

