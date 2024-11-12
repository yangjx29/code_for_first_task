int main () {
    int a [(816 - 811)] [(256 - 251)];
    int i, j, d14np5, r, c [(15 - 10)], vEzkpOaQC, temp = (157 - 157), NXrU4AkKi = (505 - 505), aKnJIES = (636 - 636);
    for (i = (454 - 454); (99 - 94) > i; i++) {
        for (j = (276 - 276); (183 - 178) > j; j++)
            scanf ("%d", &a[i][j]);
    }
    for (j = (561 - 561); (903 - 898) > j; j++) {
        c[NXrU4AkKi] = (288 - 288);
        vEzkpOaQC = a[j][(901 - 901)];
        for (i = (678 - 677); (644 - 639) > i; i++) {
            if (vEzkpOaQC < a[j][i]) {
                vEzkpOaQC = a[j][i];
                c[NXrU4AkKi] = i;
            }
        }
        NXrU4AkKi++;
    }
    for (i = (745 - 745); (319 - 314) > i; i++) {
        {
            d14np5 = (32 - 32);
            for (; 5 > d14np5;) {
                if (a[i][c[i]] > a[d14np5][c[i]]) {
                    temp = (619 - 618);
                    break;
                }
                d14np5++;
            }
        }
        if (temp == (554 - 554)) {
            printf ("%d %d %d\n", i + 1, c[i] + 1, a[i][c[i]]);
            aKnJIES = 1;
        }
        temp = (312 - 312);
    }
    if (aKnJIES == 0)
        ;
    return 0;
}

