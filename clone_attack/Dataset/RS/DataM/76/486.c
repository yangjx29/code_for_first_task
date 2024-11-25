int main () {
    int MxAKSZt7Gp, Bxqsm6KCeU [(50935 - 935)], fLqpgBwWTc [(50623 - 623)], c [50000], bFRuPv2h08n, e, J5dse70, B9tkGQJI3, sum = (319 - 319);
    scanf ("%d", &MxAKSZt7Gp);
    {
        bFRuPv2h08n = 375 - 375;
        while (bFRuPv2h08n < MxAKSZt7Gp) {
            scanf ("%d%d", &Bxqsm6KCeU[bFRuPv2h08n], &fLqpgBwWTc[bFRuPv2h08n]);
            bFRuPv2h08n = bFRuPv2h08n + 1;
        };
    }
    e = Bxqsm6KCeU[(359 - 359)];
    J5dse70 = fLqpgBwWTc[0];
    for (bFRuPv2h08n = (490 - 489); bFRuPv2h08n < MxAKSZt7Gp; bFRuPv2h08n = bFRuPv2h08n + 1) {
        if (Bxqsm6KCeU[bFRuPv2h08n] < e) {
            e = Bxqsm6KCeU[bFRuPv2h08n];
        }
        if (J5dse70 < fLqpgBwWTc[bFRuPv2h08n]) {
            J5dse70 = fLqpgBwWTc[bFRuPv2h08n];
        };
    }
    for (bFRuPv2h08n = e; J5dse70 >= bFRuPv2h08n; bFRuPv2h08n = bFRuPv2h08n + 1) {
        c[bFRuPv2h08n] = (524 - 523);
    }
    {
        bFRuPv2h08n = 0;
        while (bFRuPv2h08n < MxAKSZt7Gp) {
            {
                B9tkGQJI3 = bFRuPv2h08n;
                while (B9tkGQJI3 <= fLqpgBwWTc[bFRuPv2h08n] - 1) {
                    c[B9tkGQJI3] = 0;
                    B9tkGQJI3 = B9tkGQJI3 +1;
                };
            }
            bFRuPv2h08n++;
        };
    }
    {
        bFRuPv2h08n = e;
        while (bFRuPv2h08n <= J5dse70) {
            sum += c[bFRuPv2h08n];
            bFRuPv2h08n++;
        };
    }
    if (sum == 1) {
        printf ("%d %d", e, J5dse70);
    }
    else
        printf ("no");
    return 0;
}

