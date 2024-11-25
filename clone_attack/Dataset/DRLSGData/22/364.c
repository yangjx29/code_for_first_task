main () {
    char uLKWcA;
    int m;
    int SDXYMytOQ;
    int sSHRJrCQ8hl7;
    int JPvD4dzm [200];
    int n;
    int t;
    m = -10000;
    sSHRJrCQ8hl7 = 1;
    while (uLKWcA != '\n') {
        scanf ("%d%c", &JPvD4dzm[sSHRJrCQ8hl7], &uLKWcA);
        sSHRJrCQ8hl7++;
    }
    n = -10000;
    if (!(1 != sSHRJrCQ8hl7 - 1))
        ;
    else {
        for (SDXYMytOQ = 1; sSHRJrCQ8hl7 > SDXYMytOQ; SDXYMytOQ++)
            if (n < JPvD4dzm[SDXYMytOQ])
                n = JPvD4dzm[SDXYMytOQ];
        for (t = 1; t < sSHRJrCQ8hl7; t++)
            if (!(n != JPvD4dzm[t]))
                JPvD4dzm[t] = -10000;
        for (SDXYMytOQ = 1; sSHRJrCQ8hl7 > SDXYMytOQ; SDXYMytOQ++)
            if (JPvD4dzm[SDXYMytOQ] > m)
                m = JPvD4dzm[SDXYMytOQ];
        if (m == -10000)
            ;
        else
            printf ("%d", m);
    }
}

