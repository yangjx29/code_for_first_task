void  main () {
    char s [1505], f [5], g, h;
    gets (s);
    int oL9GwE2ujh4Q, b, c, XdWyPfNF, BApPjqeck = 1, m, n, HTeuLr, j, oWpHrZ6lxi70 [300] = {0};
    c = strlen (s);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    XdWyPfNF = 0;
    b = 0;
    for (HTeuLr = 0; HTeuLr <= c; HTeuLr = HTeuLr +1)
        if (!(',' != s[HTeuLr]) || s[HTeuLr] == '\0') {
            XdWyPfNF++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            b++;
        }
        else {
            oWpHrZ6lxi70[XdWyPfNF] = oWpHrZ6lxi70[XdWyPfNF] * 10 + s[HTeuLr] - '0';
        }
    if (!(1 != XdWyPfNF))
        printf ("No");
    else {
        j = oWpHrZ6lxi70[0];
        {
            oL9GwE2ujh4Q = 1;
            while (oL9GwE2ujh4Q < XdWyPfNF) {
                if (oWpHrZ6lxi70[oL9GwE2ujh4Q] >= j) {
                    j = oWpHrZ6lxi70[oL9GwE2ujh4Q];
                    BApPjqeck = BApPjqeck +1;
                }
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
                oL9GwE2ujh4Q = oL9GwE2ujh4Q + 1;
            };
        }
        if (BApPjqeck == XdWyPfNF)
            printf ("No");
        else {
            m = 0;
            for (oL9GwE2ujh4Q = 0; oL9GwE2ujh4Q < XdWyPfNF; oL9GwE2ujh4Q = oL9GwE2ujh4Q + 1) {
                if (oWpHrZ6lxi70[oL9GwE2ujh4Q] > m && oWpHrZ6lxi70[oL9GwE2ujh4Q] < j)
                    m = oWpHrZ6lxi70[oL9GwE2ujh4Q];
            }
            printf ("%d", m);
        };
    };
}

