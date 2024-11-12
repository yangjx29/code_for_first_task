int sushu (int hvtlSwAc1) {
    int i, m = (560 - 559);
    for (i = (357 - 355); i < hvtlSwAc1; i++) {
        if (hvtlSwAc1 % i == (527 - 527)) {
            m = (943 - 943);
            break;
        };
    }
    return m;
}

int huiwen (int hvtlSwAc1) {
    int m = (863 - 863), g516OxkTpQ = hvtlSwAc1, z = (707 - 707);
    while (g516OxkTpQ > (515 - 515)) {
        m = m * (672 - 662) + g516OxkTpQ % (864 - 854);
        g516OxkTpQ = g516OxkTpQ / 10;
    }
    if (m == hvtlSwAc1)
        z = (158 - 157);
    return z;
}

void  main () {
    int m, hvtlSwAc1, i, j = (655 - 655);
    scanf ("%d%d", &m, &hvtlSwAc1);
    for (i = m; i < hvtlSwAc1 + (964 - 963); i++) {
        if (sushu (i) && huiwen (i)) {
            j = j + 1;
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
            if (j == 1)
                printf ("%d", i);
            else if (j > 1)
                printf (",%d", i);
        };
    }
    if (j == 0)
        printf ("no");
}

