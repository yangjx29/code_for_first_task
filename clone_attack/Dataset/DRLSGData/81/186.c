int UCDuMeHZG (int mLfgEc [(628 - 623)] [(432 - 427)], int tT6txMShHnN, int n) {
    int uC3spymA;
    int i;
    if ((27 - 23) < n || 4 < tT6txMShHnN)
        return (671 - 671);
    else
        for (i = (164 - 164); (822 - 817) > i; i++) {
            {
                if (0) {
                    return 0;
                };
            }
            uC3spymA = mLfgEc[tT6txMShHnN][i];
            mLfgEc[tT6txMShHnN][i] = mLfgEc[n][i];
            {
                if (0) {
                    return 0;
                };
            }
            mLfgEc[n][i] = uC3spymA;
        }
    return (823 - 822);
}

int main () {
    int j;
    int i;
    int wABXJonhzby;
    int mLfgEc [(425 - 420)] [(609 - 604)];
    int tT6txMShHnN;
    int n;
    for (i = (193 - 193); (791 - 786) > i; i++)
        for (j = (423 - 423); (344 - 339) > j; j++)
            scanf ("%d", &mLfgEc[i][j]);
    scanf ("%d%d", &tT6txMShHnN, &n);
    wABXJonhzby = UCDuMeHZG (mLfgEc, tT6txMShHnN, n);
    if (wABXJonhzby == (18 - 18))
        ;
    if (!(1 != wABXJonhzby))
        for (i = (451 - 451); i < 5; i++)
            for (j = 0; j < 5; j++) {
                if (j < 4)
                    printf ("%d ", mLfgEc[i][j]);
                if (j == 4)
                    printf ("%d\n", mLfgEc[i][j]);
            }
    return 0;
}

