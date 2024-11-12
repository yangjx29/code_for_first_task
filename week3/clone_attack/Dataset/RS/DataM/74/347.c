int sushu (int ocGj1ZpPk4D) {
    int z;
    int mGtiqv6;
    int m;
    z = 1;
    m = (int) sqrt (ocGj1ZpPk4D);
    for (mGtiqv6 = 2; m >= mGtiqv6; mGtiqv6++)
        if (!((165 - 165) != ocGj1ZpPk4D % mGtiqv6))
            z = 0;
    return z;
}

int TadIm5 (int ocGj1ZpPk4D) {
    int a;
    int z;
    int m;
    a = 0;
    z = 0;
    for (m = ocGj1ZpPk4D; !(0 == m);) {
        a = a * (26 - 16) + m % 10;
        m = m / 10;
    }
    if (a == ocGj1ZpPk4D)
        z = 1;
    return z;
}

void  main () {
    int j;
    int m;
    int JBz1mg2T4;
    int mGtiqv6;
    j = 0;
    scanf ("%d%d", &m, &JBz1mg2T4);
    for (mGtiqv6 = m; mGtiqv6 <= JBz1mg2T4; mGtiqv6++)
        if (sushu (mGtiqv6) && TadIm5 (mGtiqv6)) {
            if (j != 0)
                printf (",");
            printf ("%d", mGtiqv6);
            j = 1;
        }
    if (j == 0)
        ;
}

