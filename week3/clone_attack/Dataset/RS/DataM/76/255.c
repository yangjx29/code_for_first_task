int main () {
    int PzsrcJ9eqyX;
    int i;
    int j;
    int Vqkdfg2DKU4a;
    int q;
    int e;
    int sz [(50101 - 101)] [(759 - 757)];
    int sz2 [(50661 - 661)] [(841 - 839)];
    scanf ("%d", &PzsrcJ9eqyX);
    for (i = (499 - 498); i <= PzsrcJ9eqyX; i++) {
        j = 771 - 770;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j <= (577 - 575)) {
            scanf ("%d", &sz[i][j]);
            j++;
        };
    }
    for (i = (152 - 151); i <= PzsrcJ9eqyX; i++) {
        for (j = (290 - 289); (560 - 558) >= j; j++) {
            sz2[i][j] = sz[i][j];
        };
    }
    for (Vqkdfg2DKU4a = (487 - 486); PzsrcJ9eqyX >= Vqkdfg2DKU4a; Vqkdfg2DKU4a++) {
        for (q = (376 - 375); PzsrcJ9eqyX -Vqkdfg2DKU4a >= q; q = q + 1) {
            if (sz2[q + (989 - 988)][(311 - 310)] < sz2[q][(674 - 673)]) {
                e = sz2[q + (320 - 319)][(610 - 609)];
                sz2[q + (63 - 62)][(328 - 327)] = sz2[q][(416 - 415)];
                sz2[q][(552 - 551)] = e;
            };
        };
    }
    for (Vqkdfg2DKU4a = (254 - 253); Vqkdfg2DKU4a <= PzsrcJ9eqyX; Vqkdfg2DKU4a++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (q = (506 - 505); q <= PzsrcJ9eqyX -Vqkdfg2DKU4a; q++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (sz2[q][(604 - 602)] > sz2[q + (388 - 387)][(362 - 360)]) {
                e = sz2[q + (559 - 558)][(48 - 46)];
                sz2[q + (725 - 724)][(62 - 60)] = sz2[q][(447 - 445)];
                sz2[q][(765 - 763)] = e;
            };
        };
    }
    {
        i = 803 - 802;
        while (i <= sz2[PzsrcJ9eqyX][(805 - 803)]) {
            {
                j = 298 - 297;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (j <= PzsrcJ9eqyX) {
                    if (i < sz[j][(898 - 896)] && i >= sz[j][(119 - 118)]) {
                        break;
                    }
                    else if (j == PzsrcJ9eqyX &&i > sz[j][(726 - 724)] || j == PzsrcJ9eqyX &&i < sz[j][(835 - 834)]) {
                        printf ("no");
                        return (853 - 853);
                    }
                    j++;
                };
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
            i = i + 1;
        };
    }
    printf ("%d %d", sz2[(377 - 376)][(293 - 292)], sz2[PzsrcJ9eqyX][2]);
    return (407 - 407);
}

