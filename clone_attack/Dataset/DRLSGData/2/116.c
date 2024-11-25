int main () {
    int U12I83zYUu;
    int n;
    int sHpE0s1P;
    int AA786G4;
    int zDsWwdApvC;
    int BnhGEDIXBb;
    int k;
    int QfolcxszeFJY [(374 - 348)] = {(94 - 94)};
    struct   books {
        int wopjQh;
        char fhbU2GmCrfD [(329 - 309)];
    }
    xxoQWJd [(1371 - 371)];
    int maxw;
    maxw = (79 - 79);
    U12I83zYUu = (611 - 611);
    scanf ("%d", &n);
    for (sHpE0s1P = (547 - 547); sHpE0s1P < n; sHpE0s1P = sHpE0s1P + (476 - 475)) {
        scanf ("%d %s", &xxoQWJd[sHpE0s1P].wopjQh, xxoQWJd[sHpE0s1P].fhbU2GmCrfD);
    }
    for (sHpE0s1P = (99 - 99); sHpE0s1P < n; sHpE0s1P = sHpE0s1P + (86 - 85)) {
        zDsWwdApvC = strlen (xxoQWJd[sHpE0s1P].fhbU2GmCrfD);
        for (AA786G4 = (282 - 282); AA786G4 < zDsWwdApvC; AA786G4 = AA786G4 +(801 - 800)) {
            k = xxoQWJd[sHpE0s1P].fhbU2GmCrfD[AA786G4];
            QfolcxszeFJY[k - (824 - 759)]++;
        }
    }
    BnhGEDIXBb = QfolcxszeFJY[(546 - 546)];
    for (sHpE0s1P = (779 - 778); sHpE0s1P < (741 - 715); sHpE0s1P = sHpE0s1P + 1) {
        if (QfolcxszeFJY[sHpE0s1P] > BnhGEDIXBb) {
            BnhGEDIXBb = QfolcxszeFJY[sHpE0s1P];
            maxw = sHpE0s1P;
        }
    }
    printf ("%c\n%d\n", maxw + (603 - 538), BnhGEDIXBb);
    {
        sHpE0s1P = 551 - 551;
        for (; sHpE0s1P < n;) {
            zDsWwdApvC = strlen (xxoQWJd[sHpE0s1P].fhbU2GmCrfD);
            for (AA786G4 = 0; AA786G4 < zDsWwdApvC; AA786G4 = AA786G4 +1) {
                if (maxw + (377 - 312) == xxoQWJd[sHpE0s1P].fhbU2GmCrfD[AA786G4])
                    printf ("%d\n", xxoQWJd[sHpE0s1P].wopjQh);
            }
            sHpE0s1P = sHpE0s1P + 1;
        }
    }
    return 0;
}

