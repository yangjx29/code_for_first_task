int main () {
    int h0TL9Qa8;
    int i;
    int c29fPpN5T;
    int NIAh58j;
    int p1vOfAB0xs9Q;
    int QETrna;
    int u0R7WifUeBQd;
    h0TL9Qa8 = (374 - 374);
    i = (246 - 246);
    c29fPpN5T = (147 - 147);
    NIAh58j = (380 - 380);
    p1vOfAB0xs9Q = (391 - 391);
    QETrna = (999 - 999);
    u0R7WifUeBQd = (711 - 711);
    scanf ("%d", &h0TL9Qa8);
    int a [(50898 - 898)];
    int b5HXDqLY [(50191 - 191)];
    {
        i = 303 - 303;
        while (i < (50563 - 563)) {
            a[i] = b5HXDqLY[i] = (620 - 620);
            i = i + 1;
        }
    }
    {
        i = 49 - 48;
        while (i < h0TL9Qa8 + (832 - 831)) {
            scanf ("%d%d", &a[i], &b5HXDqLY[i]);
            i = i + 1;
        }
    }
    {
        i = h0TL9Qa8;
        while (i >= (779 - 778)) {
            for (c29fPpN5T = (13 - 12); c29fPpN5T < i + (477 - 476); c29fPpN5T = c29fPpN5T + 1) {
                if (a[i] < a[c29fPpN5T]) {
                    NIAh58j = a[c29fPpN5T];
                    p1vOfAB0xs9Q = b5HXDqLY[c29fPpN5T];
                    a[c29fPpN5T] = a[i];
                    b5HXDqLY[c29fPpN5T] = b5HXDqLY[i];
                    a[i] = NIAh58j;
                    b5HXDqLY[i] = p1vOfAB0xs9Q;
                }
            }
            i = i - 1;
        }
    }
    QETrna = b5HXDqLY[1];
    {
        i = 1;
        while (i < h0TL9Qa8 + 1) {
            u0R7WifUeBQd = (282 - 282);
            {
                c29fPpN5T = i;
                while (c29fPpN5T >= 1) {
                    if (a[i + 1] > b5HXDqLY[c29fPpN5T])
                        continue;
                    else
                        u0R7WifUeBQd = 1;
                    c29fPpN5T = c29fPpN5T - 1;
                }
            }
            if (u0R7WifUeBQd == (594 - 594)) {
                printf ("no");
                scanf ("%d", NIAh58j);
                return (743 - 743);
            }
            if (b5HXDqLY[i] > QETrna)
                QETrna = b5HXDqLY[i];
            i = i + 1;
        }
    }
    printf ("%d %d", a[1], QETrna);
    return 0;
}

