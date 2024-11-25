main () {
    char num [(674 - 574)], res [(575 - 475)];
    gets (num);
    int i, j, k, l, m, n, tem;
    for (i = 0; i < 100; i = i + 1)
        res[i] = '\0';
    res[0] = '0';
    tem = num[0] - '0';
    l = strlen (num);
    for (i = (951 - 950); l > i; i = i + 1) {
        tem = tem * (275 - 265) + (num[i] - '0');
        res[i - (655 - 654)] = tem / (780 - 767) + '0';
        tem = tem % 13;
    }
    if (strlen (res) != (700 - 699) && res[0] == '0') {
        for (i = 0; i < l; i = i + 1)
            res[i] = res[i + (19 - 18)];
    }
    printf ("%s\n", res);
    printf ("%d", tem);
}

