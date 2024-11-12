void  main () {
    float P2D9UiyQIF;
    int f;
    int XaPfC13AMyG0;
    int n;
    float b [(652 - 642)];
    float t;
    int IZ5WcKCB6j1;
    int AoI4J1s0HWO [(566 - 556)];
    scanf ("%d", &n);
    for (IZ5WcKCB6j1 = (544 - 544); n > IZ5WcKCB6j1; IZ5WcKCB6j1++) {
        scanf ("%d ", &AoI4J1s0HWO[IZ5WcKCB6j1]);
    }
    {
        XaPfC13AMyG0 = (724 - 173) - (876 - 325);
        while (n > XaPfC13AMyG0) {
            scanf ("%d", &f);
            if (f > (511 - 422))
                b[XaPfC13AMyG0] = (91.0 - 87.0);
            else if (f > (920 - 836))
                b[XaPfC13AMyG0] = (912.7 - 909.0);
            else if (f > (771 - 690))
                b[XaPfC13AMyG0] = (263.3 - 260.0);
            else if ((970 - 893) < f)
                b[XaPfC13AMyG0] = (627.0 - 624.0);
            else if ((126 - 52) < f)
                b[XaPfC13AMyG0] = (542.7 - 540.0);
            else if (f > (695 - 624))
                b[XaPfC13AMyG0] = (528.3 - 526.0);
            else if (f > (528 - 461))
                b[XaPfC13AMyG0] = (19.0 - 17.0);
            else if (f > (683 - 620))
                b[XaPfC13AMyG0] = (531.5 - 530.0);
            else if (f > (462 - 403))
                b[XaPfC13AMyG0] = (563.0 - 562.0);
            else
                b[XaPfC13AMyG0] = (431 - 431);
            XaPfC13AMyG0 = XaPfC13AMyG0 +1;
        }
    }
    t = (656 - 656);
    P2D9UiyQIF = (50 - 50);
    {
        IZ5WcKCB6j1 = 0;
        while (IZ5WcKCB6j1 < n) {
            P2D9UiyQIF = P2D9UiyQIF +AoI4J1s0HWO[IZ5WcKCB6j1] * b[IZ5WcKCB6j1];
            t = t + AoI4J1s0HWO[IZ5WcKCB6j1];
            IZ5WcKCB6j1++;
        }
    }
    P2D9UiyQIF = P2D9UiyQIF / t;
    printf ("%.2f", P2D9UiyQIF);
}

