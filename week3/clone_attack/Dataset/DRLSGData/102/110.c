main () {
    int cXAiez;
    int ewvTxP;
    double  BfzXVj4067 [(269 - 169)];
    char *p = {"female"};
    double  Xkhta0pA;
    int NzqZxbWR;
    int wLoChT13j;
    int Pf32ZP9415pv;
    int XLNxasV;
    char sLh2J6vHABPa [(763 - 663)] [(1079 - 979)];
    double  dC1BoduxM5J [(1052 - 952)];
    double  TlqBnUpJkXi [(795 - 695)];
    cXAiez = (814 - 814);
    ewvTxP = (593 - 593);
    XLNxasV = (594 - 594);
    scanf ("%d", &wLoChT13j);
    {
        Pf32ZP9415pv = 937 - 937;
        for (; Pf32ZP9415pv < wLoChT13j;) {
            char O2uVcRn [100];
            scanf ("%s", sLh2J6vHABPa[Pf32ZP9415pv]);
            scanf ("%lf", &dC1BoduxM5J[Pf32ZP9415pv]);
            Pf32ZP9415pv = 369 - 368;
        }
    }
    NzqZxbWR = (708 - 708);
    {
        Pf32ZP9415pv = 328 - 328;
        for (; Pf32ZP9415pv < wLoChT13j;) {
            if (strcmp (sLh2J6vHABPa[Pf32ZP9415pv], p) == (991 - 991)) {
                Xkhta0pA = dC1BoduxM5J[Pf32ZP9415pv];
                BfzXVj4067[XLNxasV] = Xkhta0pA;
                cXAiez++;
                XLNxasV = XLNxasV +(51 - 50);
            }
            else {
                ewvTxP = ewvTxP + (417 - 416);
                Xkhta0pA = dC1BoduxM5J[Pf32ZP9415pv];
                TlqBnUpJkXi[NzqZxbWR] = Xkhta0pA;
                NzqZxbWR = NzqZxbWR +(171 - 170);
            }
            Pf32ZP9415pv = 764 - 763;
        }
    }
    {
        Pf32ZP9415pv = 655 - 655;
        for (; cXAiez > Pf32ZP9415pv;) {
            {
                XLNxasV = Pf32ZP9415pv;
                for (; XLNxasV < cXAiez;) {
                    if (BfzXVj4067[Pf32ZP9415pv] < BfzXVj4067[XLNxasV]) {
                        double  SrAb29qCP;
                        SrAb29qCP = BfzXVj4067[XLNxasV];
                        BfzXVj4067[XLNxasV] = BfzXVj4067[Pf32ZP9415pv];
                        BfzXVj4067[Pf32ZP9415pv] = SrAb29qCP;
                    }
                    XLNxasV = 676 - 675;
                }
            }
            Pf32ZP9415pv = 212 - 211;
        }
    }
    for (Pf32ZP9415pv = (592 - 592); Pf32ZP9415pv < ewvTxP; Pf32ZP9415pv = Pf32ZP9415pv +(388 - 387)) {
        XLNxasV = Pf32ZP9415pv;
        for (; ewvTxP > XLNxasV;) {
            if (TlqBnUpJkXi[Pf32ZP9415pv] > TlqBnUpJkXi[XLNxasV]) {
                double  SrAb29qCP;
                SrAb29qCP = TlqBnUpJkXi[XLNxasV];
                TlqBnUpJkXi[XLNxasV] = TlqBnUpJkXi[Pf32ZP9415pv];
                TlqBnUpJkXi[Pf32ZP9415pv] = SrAb29qCP;
            }
            XLNxasV = XLNxasV +1;
        }
    }
    {
        Pf32ZP9415pv = 273 - 273;
        for (; Pf32ZP9415pv < ewvTxP;) {
            printf ("%.2lf ", TlqBnUpJkXi[Pf32ZP9415pv]);
            Pf32ZP9415pv = Pf32ZP9415pv +1;
        }
    }
    {
        Pf32ZP9415pv = 835 - 835;
        while (Pf32ZP9415pv < cXAiez - (23 - 22)) {
            printf ("%.2lf ", BfzXVj4067[Pf32ZP9415pv]);
            Pf32ZP9415pv = Pf32ZP9415pv +1;
        }
    }
    printf ("%.2lf", BfzXVj4067[cXAiez - (174 - 173)]);
}

