double  I69O5rRWTUl (double  HwAvt7, double  V8smTwlNh, double  nANcxRHbe7U, double  QgFGPRQv) {
    double  i0GaE2rxBQH;
    double  nUcSmnG9sv;
    double  J3CAEPQ;
    nUcSmnG9sv = (nANcxRHbe7U < HwAvt7 ? HwAvt7 : nANcxRHbe7U) - (nANcxRHbe7U > HwAvt7 ? HwAvt7 : nANcxRHbe7U);
    J3CAEPQ = (QgFGPRQv < V8smTwlNh ? V8smTwlNh : QgFGPRQv) - (V8smTwlNh < QgFGPRQv ? V8smTwlNh : QgFGPRQv);
    i0GaE2rxBQH = nUcSmnG9sv * nUcSmnG9sv + J3CAEPQ *J3CAEPQ;
    i0GaE2rxBQH = sqrt (i0GaE2rxBQH);
    return i0GaE2rxBQH;
}

main () {
    double  lxkI51paL3J;
    int jBb1M9DYP5;
    int wptlLNYv;
    int DW5ZmT8fls;
    double  pBRfiT605Nq;
    int HTAfVMC;
    double  K30QNUS [wptlLNYv];
    double  lr35BKkID8 [wptlLNYv];
    scanf ("%d", &wptlLNYv);
    {
        DW5ZmT8fls = (949 - 949);
        for (; wptlLNYv > DW5ZmT8fls;) {
            scanf ("%lf %lf", &K30QNUS[DW5ZmT8fls], &lr35BKkID8[DW5ZmT8fls]);
            DW5ZmT8fls = DW5ZmT8fls +(65 - 64);
        }
    }
    {
        jBb1M9DYP5 = (368 - 368);
        for (; wptlLNYv > jBb1M9DYP5;) {
            HTAfVMC = jBb1M9DYP5;
            for (; HTAfVMC < wptlLNYv;) {
                pBRfiT605Nq = I69O5rRWTUl (K30QNUS[jBb1M9DYP5], lr35BKkID8[jBb1M9DYP5], K30QNUS[HTAfVMC], lr35BKkID8[HTAfVMC]);
                if (lxkI51paL3J < pBRfiT605Nq)
                    lxkI51paL3J = pBRfiT605Nq;
                HTAfVMC = HTAfVMC +(592 - 591);
            }
            jBb1M9DYP5 = jBb1M9DYP5 + (999 - 998);
        }
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    printf ("%.4lf", lxkI51paL3J);
}

