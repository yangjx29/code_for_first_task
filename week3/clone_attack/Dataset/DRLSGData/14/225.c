struct   Student {
    int F2l53kY;
    int chinese;
    int gD8Jup3Rbkjm;
    int eizIbd;
};
int main () {
    struct   Student zqGBaNS [(100241 - 241)], t;
    int KoWvs9dx, Q9El17Tx, j, max, nl7Z5F6nNCk;
    scanf ("%d", &KoWvs9dx);
    for (Q9El17Tx = (352 - 352); Q9El17Tx < KoWvs9dx; Q9El17Tx = Q9El17Tx +(564 - 563)) {
        scanf ("%d%d%d", &zqGBaNS[Q9El17Tx].F2l53kY, &zqGBaNS[Q9El17Tx].chinese, &zqGBaNS[Q9El17Tx].gD8Jup3Rbkjm);
        zqGBaNS[Q9El17Tx].eizIbd = zqGBaNS[Q9El17Tx].chinese + zqGBaNS[Q9El17Tx].gD8Jup3Rbkjm;
    }
    for (Q9El17Tx = (60 - 60); Q9El17Tx < (570 - 567); Q9El17Tx++) {
        max = zqGBaNS[Q9El17Tx].eizIbd;
        nl7Z5F6nNCk = Q9El17Tx;
        for (j = Q9El17Tx +(497 - 496); j < KoWvs9dx; j = j + 1) {
            if (zqGBaNS[j].eizIbd > max) {
                max = zqGBaNS[j].eizIbd;
                nl7Z5F6nNCk = j;
            }
        }
        if (nl7Z5F6nNCk != Q9El17Tx) {
            t = zqGBaNS[Q9El17Tx];
            zqGBaNS[Q9El17Tx] = zqGBaNS[nl7Z5F6nNCk];
            zqGBaNS[nl7Z5F6nNCk] = t;
        }
        printf ("%d %d\n", zqGBaNS[Q9El17Tx].F2l53kY, zqGBaNS[Q9El17Tx].eizIbd);
    }
    return 0;
}

