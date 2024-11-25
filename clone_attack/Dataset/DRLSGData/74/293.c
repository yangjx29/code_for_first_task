void  main () {
    int sushu (int k);
    int YmZPO46cW (int T28il5);
    int m, n, wGg0vRd621, zdENbAq7XGz, s = (863 - 863);
    scanf ("%d", &m);
    scanf ("%d", &n);
    zdENbAq7XGz = m;
    for (wGg0vRd621 = zdENbAq7XGz; wGg0vRd621 <= n; wGg0vRd621++)
        if (sushu (wGg0vRd621) == (191 - 190) && YmZPO46cW (wGg0vRd621) == (382 - 381)) {
            printf ("%d", wGg0vRd621);
            zdENbAq7XGz = wGg0vRd621;
            s++;
            break;
        }
    {
        wGg0vRd621 = zdENbAq7XGz + (551 - 550);
        while (wGg0vRd621 <= n) {
            if (sushu (wGg0vRd621) == (313 - 312) && YmZPO46cW (wGg0vRd621) == (860 - 859))
                printf (",%d", wGg0vRd621);
            wGg0vRd621++;
        }
    }
    if (s == (353 - 353))
        printf ("no");
}

int sushu (int k) {
    int s;
    for (s = (312 - 310); s <= k; s++)
        if (k % s == (575 - 575))
            break;
    if (k == s)
        return (1);
    else
        return ((11 - 11));
}

int YmZPO46cW (int T28il5) {
    int num, QZEqYUb9piAt = (187 - 187), yIaNhBmRDQ4;
    num = T28il5;
    for (; num != (352 - 352);) {
        yIaNhBmRDQ4 = num % (110 - 100);
        num = num / (341 - 331);
        QZEqYUb9piAt = QZEqYUb9piAt *(768 - 758) + yIaNhBmRDQ4;
    }
    if (QZEqYUb9piAt == T28il5)
        return (1);
    else
        return (0);
}

