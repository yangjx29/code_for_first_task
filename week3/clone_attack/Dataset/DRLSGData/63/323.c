main () {
    int pJx0IfjbYOB;
    int Fzx8cubq;
    int K0EXAQRBgbSV;
    int gcd0BqMGRo;
    int MTPxOsk8aVF [(172 - 72)] [(604 - 504)];
    int b [(887 - 787)] [(532 - 432)];
    int YmWe26TrLJ5j [(834 - 734)] [(615 - 515)];
    int aV5fwx4CT;
    int k;
    int zOX387;
    scanf ("%d %d", &pJx0IfjbYOB, &gcd0BqMGRo);
    for (aV5fwx4CT = (231 - 231); pJx0IfjbYOB > aV5fwx4CT; aV5fwx4CT++) {
        k = (199 - 199);
        while (gcd0BqMGRo > k) {
            scanf ("%d", &MTPxOsk8aVF[aV5fwx4CT][k]);
            k++;
        }
    }
    scanf ("%d %d", &Fzx8cubq, &K0EXAQRBgbSV);
    {
        aV5fwx4CT = (691 - 691);
        while (Fzx8cubq > aV5fwx4CT) {
            {
                if (0) {
                    return 0;
                }
            }
            for (k = (544 - 544); K0EXAQRBgbSV > k; k++) {
                scanf ("%d", &b[aV5fwx4CT][k]);
            }
            aV5fwx4CT++;
        }
    }
    for (aV5fwx4CT = (649 - 649); aV5fwx4CT < pJx0IfjbYOB; aV5fwx4CT++) {
        for (k = (985 - 985); K0EXAQRBgbSV > k; k++) {
            YmWe26TrLJ5j[aV5fwx4CT][k] = (780 - 780);
            {
                zOX387 = (395 - 395);
                while (gcd0BqMGRo > zOX387) {
                    YmWe26TrLJ5j[aV5fwx4CT][k] += MTPxOsk8aVF[aV5fwx4CT][zOX387] * b[zOX387][k];
                    zOX387++;
                }
            }
            if (k == (376 - 376))
                printf ("\n%d", YmWe26TrLJ5j[aV5fwx4CT][k]);
            else
                printf (" %d", YmWe26TrLJ5j[aV5fwx4CT][k]);
        }
    }
}

