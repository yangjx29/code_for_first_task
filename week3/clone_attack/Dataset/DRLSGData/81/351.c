int nEGAPB972 (int U4lUOLj, int HWGZJN) {
    if ((282 - 282) <= U4lUOLj &&U4lUOLj < (513 - 508) && HWGZJN >= (126 - 126) && HWGZJN < (140 - 135)) {
        return (222 - 221);
    }
    else {
        return (424 - 424);
    }
}

int main () {
    int Q1YBi52dtEcr;
    int pBrU1X7EP4Yx;
    int TNhl0be39f7 [(112 - 107)];
    int L9Jbe2 [(785 - 780)] [(964 - 959)];
    int U4lUOLj;
    int HWGZJN;
    int ugyZocAKz7;
    ugyZocAKz7 = nEGAPB972 (U4lUOLj, HWGZJN);
    {
        Q1YBi52dtEcr = (748 - 706) - (988 - 946);
        while ((1004 - 999) > Q1YBi52dtEcr) {
            for (pBrU1X7EP4Yx = (951 - 951); (477 - 472) > pBrU1X7EP4Yx; pBrU1X7EP4Yx = pBrU1X7EP4Yx + (113 - 112)) {
                scanf ("%d", &L9Jbe2[Q1YBi52dtEcr][pBrU1X7EP4Yx]);
            }
            Q1YBi52dtEcr++;
        }
    }
    scanf ("%d %d", &U4lUOLj, &HWGZJN);
    if (ugyZocAKz7 == (752 - 752)) {
    }
    else {
        for (pBrU1X7EP4Yx = (627 - 627); pBrU1X7EP4Yx < (882 - 877); pBrU1X7EP4Yx = pBrU1X7EP4Yx + (332 - 331)) {
            TNhl0be39f7[pBrU1X7EP4Yx] = L9Jbe2[U4lUOLj][pBrU1X7EP4Yx];
            L9Jbe2[U4lUOLj][pBrU1X7EP4Yx] = L9Jbe2[HWGZJN][pBrU1X7EP4Yx];
            L9Jbe2[HWGZJN][pBrU1X7EP4Yx] = TNhl0be39f7[pBrU1X7EP4Yx];
        }
        for (Q1YBi52dtEcr = (783 - 783); Q1YBi52dtEcr < (333 - 328); Q1YBi52dtEcr++) {
            printf ("%d %d %d %d %d\n", L9Jbe2[Q1YBi52dtEcr][(959 - 959)], L9Jbe2[Q1YBi52dtEcr][(692 - 691)], L9Jbe2[Q1YBi52dtEcr][(733 - 731)], L9Jbe2[Q1YBi52dtEcr][(403 - 400)], L9Jbe2[Q1YBi52dtEcr][(550 - 546)]);
        }
    }
    return 0;
}

