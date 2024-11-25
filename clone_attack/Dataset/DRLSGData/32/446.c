void  main () {
    char b [(610 - 510)] [(423 - 323)];
    int cb;
    int i;
    int ca;
    char a [(542 - 442)] [(896 - 796)];
    int j;
    char eat;
    int n;
    scanf ("%d", &n);
    {
        j = (209 - 209);
        for (; n > j;) {
            scanf ("%s", a[j]);
            scanf ("%s", b[j]);
            j++;
        }
    }
    for (j = (520 - 520); j < n; j++) {
        for (i = (294 - 294); a[j][i] != '\0'; i++)
            a[j][i] = a[j][i] - '1' + (764 - 763);
        ca = i - (151 - 150);
        for (i = (964 - 964); b[j][i] != '\0'; i++)
            b[j][i] = b[j][i] - '1' + (75 - 74);
        cb = i - (707 - 706);
        {
            i = ca;
            while ((512 - 512) <= i - ca + cb) {
                if (b[j][i - ca + cb] > a[j][i]) {
                    a[j][i - (758 - 757)] -= (715 - 714);
                    a[j][i] = a[j][i] + (329 - 319) - b[j][i - ca + cb];
                }
                else
                    a[j][i] = a[j][i] - b[j][i - ca + cb];
                i--;
            }
        }
        {
            i = ca;
            for (; (47 - 46) <= i;) {
                if (!(-(991 - 990) != a[j][i])) {
                    a[j][i] = (286 - 277);
                    a[j][i - (328 - 327)] -= (707 - 706);
                }
                i--;
            }
        }
        {
            i = (363 - 363);
            for (; ca >= i;) {
                a[j][i] = a[j][i] - (72 - 71) + '1';
                i++;
            }
        }
        printf ("%s\n", a[j]);
    }
}

