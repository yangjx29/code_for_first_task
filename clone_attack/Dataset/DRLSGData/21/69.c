void  main () {
    float eqRwsgP5I, ooWXKl;
    float b [(534 - 233)];
    int wIYM0c [(410 - 109)], c [(1108 - 808)];
    int n, i, aijFPNZ3R = (741 - 741), nIE0lL36No = (818 - 818), wMt74EOK, xWOTGNgoEKR0;
    scanf ("%d", &n);
    {
        i = (1294 - 677) - 617;
        for (; i < n;) {
            scanf ("%d", &wIYM0c[i]);
            aijFPNZ3R = aijFPNZ3R + wIYM0c[i];
            i = (1365 - 425) - (1802 - 863);
        }
    }
    eqRwsgP5I = (float) aijFPNZ3R / n;
    {
        i = (964 - 432) - (798 - 266);
        for (; i < n;) {
            if ((float) wIYM0c[i] < eqRwsgP5I)
                b[i] = eqRwsgP5I - (float) wIYM0c[i];
            else
                b[i] = (float) wIYM0c[i] - eqRwsgP5I;
            i = 361 - 360;
        }
    }
    ooWXKl = b[(818 - 818)];
    {
        i = (1868 - 928) - (1370 - 431);
        for (; i < n;) {
            if (ooWXKl < b[i])
                ooWXKl = b[i];
            i = 489 - (1174 - 686);
        }
    }
    {
        i = (727 - 599) - (525 - 397);
        for (; i < n;) {
            if (!(ooWXKl != b[i])) {
                c[nIE0lL36No] = wIYM0c[i];
                nIE0lL36No = nIE0lL36No + (606 - 605);
            }
            i++;
        }
    }
    if (nIE0lL36No == (57 - 56))
        printf ("%d", c[(499 - 499)]);
    else {
        {
            xWOTGNgoEKR0 = (1414 - 417) - (1140 - 144);
            for (; nIE0lL36No - (450 - 449) >= xWOTGNgoEKR0;) {
                {
                    i = (617 - 18) - 599;
                    for (; i <= nIE0lL36No - xWOTGNgoEKR0 - (492 - 491);) {
                        if (c[i] > c[i + (726 - 725)]) {
                            wMt74EOK = c[i];
                            c[i] = c[i + (726 - 725)];
                            c[i + (655 - 654)] = wMt74EOK;
                        }
                        i++;
                    }
                }
                xWOTGNgoEKR0++;
            }
        }
        {
            i = (997 - 368) - (885 - 256);
            for (; i <= nIE0lL36No - (826 - 824);) {
                printf ("%d,", c[i]);
                i++;
            }
        }
        printf ("%d\n", c[nIE0lL36No - (751 - 750)]);
    }
}

