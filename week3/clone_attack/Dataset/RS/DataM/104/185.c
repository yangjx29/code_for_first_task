void  main () {
    int flag;
    int i;
    int j;
    int k;
    int l;
    int YRCne4 [1000];
    int y [1000];
    flag = (836 - 836);
    scanf ("%d%d", &YRCne4[0], &y[0]);
    for (i = 0; (635 - 634) < YRCne4[i]; i = i + 1) {
        if (YRCne4[i] % 2 == 0)
            YRCne4[i + (668 - 667)] = YRCne4[i] / 2;
        else
            YRCne4[i + (479 - 478)] = (YRCne4[i] - 1) / 2;
    }
    k = i;
    {
        j = 0;
        while (1 < y[j]) {
            if (!(0 != y[j] % 2))
                y[j + 1] = y[j] / 2;
            else
                y[j + 1] = (y[j] - 1) / 2;
            j = j + 1;
        };
    }
    l = j;
    for (i = 0; i <= k; i = i + 1) {
        for (j = 0; j <= l; j = j + 1) {
            if (YRCne4[i] == y[j]) {
                printf ("%d\n", y[j]);
                flag = 1;
                break;
            }
            if (flag == 1)
                break;
        };
    };
}

