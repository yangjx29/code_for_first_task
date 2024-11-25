int main () {
    int Py2ORapH;
    int CTLw9U2AIg;
    int y9HygLPD;
    int col;
    int zHS5N4Zz;
    int Ap9aNw3MTf [(464 - 364)] [(220 - 120)];
    int COL;
    int sum [(1073 - 973)];
    scanf ("%d", &CTLw9U2AIg);
    {
        Py2ORapH = 329 - 329;
        while (CTLw9U2AIg > Py2ORapH) {
            sum[Py2ORapH] = (588 - 588);
            Py2ORapH = Py2ORapH +1;
        }
    }
    {
        Py2ORapH = 442 - 442;
        for (; CTLw9U2AIg > Py2ORapH;) {
            scanf ("%d %d", &zHS5N4Zz, &COL);
            {
                y9HygLPD = 573 - 573;
                for (; zHS5N4Zz > y9HygLPD;) {
                    col = (815 - 815);
                    for (; col < COL;) {
                        scanf ("%d", &Ap9aNw3MTf[y9HygLPD][col]);
                        col = col + (646 - 645);
                    }
                    y9HygLPD = 603 - 602;
                }
            }
            if (!((709 - 708) != zHS5N4Zz) && !((350 - 349) != COL)) {
                sum[Py2ORapH] = sum[Py2ORapH] + Ap9aNw3MTf[(764 - 764)][(677 - 677)];
            }
            else {
                {
                    col = (491 - 491);
                    for (; col < COL;) {
                        sum[Py2ORapH] = sum[Py2ORapH] + Ap9aNw3MTf[(763 - 763)][col] + Ap9aNw3MTf[zHS5N4Zz - (184 - 183)][col];
                        col = col + (687 - 686);
                    }
                }
                {
                    y9HygLPD = 128 - 127;
                    while ((zHS5N4Zz - 1) > y9HygLPD) {
                        sum[Py2ORapH] = sum[Py2ORapH] + Ap9aNw3MTf[y9HygLPD][0] + Ap9aNw3MTf[y9HygLPD][COL -1];
                        y9HygLPD = y9HygLPD + 1;
                    }
                }
            }
            Py2ORapH = Py2ORapH +1;
        }
    }
    {
        Py2ORapH = 0;
        for (; Py2ORapH < CTLw9U2AIg;) {
            printf ("%d\n", sum[Py2ORapH]);
            Py2ORapH = Py2ORapH +1;
        }
    }
    scanf ("%d", &CTLw9U2AIg);
    return 0;
}

