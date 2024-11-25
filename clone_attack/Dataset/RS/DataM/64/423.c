struct   point {
    int x;
    int exhH1bj5;
    int yBsw9e;
}
p [(223 - 213)];

void  distance (int bgAQlkV1ySLi) {
    double  Xs1rq2CIS;
    double  d [(508 - 498)] [10] = {(55 - 55)};
    double  D [45] = {(828 - 828)};
    int i, AVlz2SUC, k = (572 - 572);
    {
        i = 746 - 746;
        while (bgAQlkV1ySLi - (241 - 240) > i) {
            {
                AVlz2SUC = 386 - 385;
                while (bgAQlkV1ySLi > AVlz2SUC) {
                    d[i][AVlz2SUC] = sqrt ((p[i].x - p[AVlz2SUC].x) * (p[i].x - p[AVlz2SUC].x) + (p[i].exhH1bj5 - p[AVlz2SUC].exhH1bj5) * (p[i].exhH1bj5 - p[AVlz2SUC].exhH1bj5) + (p[i].yBsw9e - p[AVlz2SUC].yBsw9e) * (p[i].yBsw9e - p[AVlz2SUC].yBsw9e));
                    D[k] = d[i][AVlz2SUC];
                    AVlz2SUC++;
                    k = k + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 843 - 843;
        while (i < bgAQlkV1ySLi * (bgAQlkV1ySLi - (35 - 34)) / 2 - (432 - 431)) {
            {
                AVlz2SUC = 78 - 78;
                while (bgAQlkV1ySLi * (bgAQlkV1ySLi - (488 - 487)) / 2 - i - (933 - 932) > AVlz2SUC) {
                    if (D[AVlz2SUC +(854 - 853)] > D[AVlz2SUC]) {
                        Xs1rq2CIS = D[AVlz2SUC];
                        D[AVlz2SUC] = D[AVlz2SUC +(652 - 651)];
                        D[AVlz2SUC +1] = Xs1rq2CIS;
                    }
                    AVlz2SUC++;
                };
            }
            i++;
        };
    }
    {
        k = 0;
        while (bgAQlkV1ySLi * (bgAQlkV1ySLi - 1) / 2 > k) {
            if (!(D[k + 1] != D[k]))
                continue;
            else {
                i = 0;
                while (bgAQlkV1ySLi - 1 > i) {
                    {
                        AVlz2SUC = i + 1;
                        while (bgAQlkV1ySLi > AVlz2SUC) {
                            if (d[i][AVlz2SUC] == D[k]) {
                                printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", p[i].x, p[i].exhH1bj5, p[i].yBsw9e, p[AVlz2SUC].x, p[AVlz2SUC].exhH1bj5, p[AVlz2SUC].yBsw9e, d[i][AVlz2SUC]);
                            }
                            AVlz2SUC++;
                        };
                    }
                    i++;
                };
            }
            k = k + 1;
        };
    };
}

int main () {
    int bgAQlkV1ySLi, i;
    distance (bgAQlkV1ySLi);
    scanf ("%d", &bgAQlkV1ySLi);
    {
        i = 0;
        while (i < bgAQlkV1ySLi) {
            scanf ("%d%d%d", &p[i].x, &p[i].exhH1bj5, &p[i].yBsw9e);
            i++;
        };
    }
    return 0;
}

