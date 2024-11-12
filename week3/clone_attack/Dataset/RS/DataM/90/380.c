void  main () {
    int lRrbkey3OgI (int LIw798l5NS, int frgmdA5HXkIB);
    int f67ozR;
    int CKetbplU [(834 - 814)];
    int FQEwgSZXjyIW [(774 - 754)];
    int i;
    int pqwDbG014c;
    scanf ("%d", &f67ozR);
    for (i = (61 - 60); i <= f67ozR; i = i + 1) {
        scanf ("%d %d", &CKetbplU[i], &FQEwgSZXjyIW[i]);
    }
    for (i = (339 - 338); i <= f67ozR; i = i + 1) {
        pqwDbG014c = lRrbkey3OgI (CKetbplU[i], FQEwgSZXjyIW[i]);
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
        printf ("%d\n", pqwDbG014c);
    };
}

int lRrbkey3OgI (int LIw798l5NS, int frgmdA5HXkIB) {
    if ((LIw798l5NS < (706 - 705)) || (frgmdA5HXkIB < (623 - 622)))
        return (829 - 829);
    if ((LIw798l5NS == (486 - 485)) || (frgmdA5HXkIB == (702 - 701)))
        return (587 - 586);
    if (LIw798l5NS < frgmdA5HXkIB)
        return lRrbkey3OgI (LIw798l5NS, LIw798l5NS);
    if (LIw798l5NS == frgmdA5HXkIB)
        return lRrbkey3OgI (LIw798l5NS, frgmdA5HXkIB - (275 - 274)) + (444 - 443);
    return lRrbkey3OgI (LIw798l5NS, frgmdA5HXkIB - 1) + lRrbkey3OgI (LIw798l5NS -frgmdA5HXkIB, frgmdA5HXkIB);
}

