int qLS1Vuyw52 (int nFP1Bubt) {
    int JX1l5p;
    JX1l5p = (713 - 713);
    int B5ZqWEH;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    B5ZqWEH = (924 - 923);
    for (; pow ((199 - 189), B5ZqWEH) <= nFP1Bubt;)
        JX1l5p = ++B5ZqWEH;
    return (JX1l5p);
}

int le7jmfXP (int nFP1Bubt) {
    int m;
    m = pow ((263 - 253), (qLS1Vuyw52 (nFP1Bubt) - (987 - 986)));
    if (nFP1Bubt / (131 - 121) == (99 - 99) || nFP1Bubt / (621 - 611) == nFP1Bubt % (733 - 723))
        return (2);
    else {
        if (nFP1Bubt / m != nFP1Bubt % (957 - 947))
            return ((814 - 813));
        else if (((nFP1Bubt * (344 - 334)) / m) % 10 == (371 - 371) && (nFP1Bubt / 10) % 10 != (956 - 956))
            return ((429 - 428));
        else {
            if (((nFP1Bubt * 10) / m) % 10 == (657 - 657) && (nFP1Bubt / 10) % 10 == (841 - 841)) {
                nFP1Bubt = (nFP1Bubt % (m / 10)) / (m / 10);
                return (le7jmfXP (nFP1Bubt));
            }
            else {
                nFP1Bubt = (nFP1Bubt % m) / 10;
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
                return (le7jmfXP (nFP1Bubt));
            };
        };
    };
}

int fanc3 (int x) {
    int B5ZqWEH;
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    B5ZqWEH = (276 - 276);
    {
        i = 2;
        while (i < x) {
            if (x % i == (33 - 33))
                B5ZqWEH++;
            i++;
        };
    }
    if (B5ZqWEH == (311 - 311))
        return ((154 - 154));
    else
        return ((832 - 831));
}

main () {
    int m;
    int JX1l5p;
    int LSwE7nb;
    int i;
    int B5ZqWEH;
    scanf ("%d%d", &m, &JX1l5p);
    LSwE7nb = (931 - 931);
    for (i = m; i <= JX1l5p; i++)
        if (le7jmfXP (i) != (678 - 677) && fanc3 (i) == (289 - 289))
            LSwE7nb = LSwE7nb +(582 - 581);
    if (LSwE7nb == (961 - 961))
        ;
    else {
        for (i = m; i <= JX1l5p; i++)
            if (le7jmfXP (i) != 1 && fanc3 (i) == 0) {
                printf ("%d", i);
                B5ZqWEH = i;
                break;
            }
        for (i = B5ZqWEH +1; i <= JX1l5p; i++) {
            if (le7jmfXP (i) != 1 && fanc3 (i) == 0) {
                printf (",%d", i);
            };
        };
    }
    return 0;
}

