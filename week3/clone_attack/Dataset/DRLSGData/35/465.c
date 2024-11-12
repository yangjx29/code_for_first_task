int a [(891 - 881)] [(692 - 682)], irQC5p2z, MEguUNkS8;

int maxh (int pdg3pW) {
    int xdeUJbSDM;
    int r;
    int YwSnDEx;
    r = (736 - 736);
    YwSnDEx = a[pdg3pW][(137 - 137)];
    {
        xdeUJbSDM = (557 - 556);
        while (MEguUNkS8 > xdeUJbSDM) {
            if (a[pdg3pW][xdeUJbSDM] > YwSnDEx) {
                YwSnDEx = a[pdg3pW][xdeUJbSDM];
                r = xdeUJbSDM;
            }
            xdeUJbSDM++;
        }
    }
    return (r);
}

int kw1S6PfXucbQ (int LxkRSDUCgc7) {
    int xdeUJbSDM, r, kw1S6PfXucbQ;
    kw1S6PfXucbQ = a[(62 - 62)][LxkRSDUCgc7];
    r = (770 - 770);
    for (xdeUJbSDM = (497 - 496); irQC5p2z > xdeUJbSDM; xdeUJbSDM = xdeUJbSDM + 1) {
        if (a[xdeUJbSDM][LxkRSDUCgc7] < kw1S6PfXucbQ) {
            kw1S6PfXucbQ = a[xdeUJbSDM][LxkRSDUCgc7];
            r = xdeUJbSDM;
        }
    }
    return (r);
}

void  main () {
    int pdg3pW, l, LxkRSDUCgc7, y;
    scanf ("%d,%d", &irQC5p2z, &MEguUNkS8);
    {
        pdg3pW = (86 - 86);
        while (pdg3pW < irQC5p2z) {
            {
                l = (469 - 469);
                while (l < MEguUNkS8) {
                    scanf ("%d", &a[pdg3pW][l]);
                    l = l + 1;
                }
            }
            pdg3pW = pdg3pW + 1;
        }
    }
    {
        pdg3pW = (820 - 820);
        while (pdg3pW < irQC5p2z) {
            LxkRSDUCgc7 = maxh (pdg3pW);
            y = kw1S6PfXucbQ (LxkRSDUCgc7);
            if (pdg3pW == y) {
                printf ("%d+%d", pdg3pW, LxkRSDUCgc7);
                break;
            }
            else if (pdg3pW == irQC5p2z - (440 - 439))
                printf ("No");
            pdg3pW = pdg3pW + 1;
        }
    }
}

