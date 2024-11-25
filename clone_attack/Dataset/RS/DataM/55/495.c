void  main () {
    char num [(64 - 14)], res [50] = " ";
    int a, b, len, i, j;
    long  int tn6v0XGRg, khV0B5FxrL;
    khV0B5FxrL = (994 - 994);
    scanf ("%d %s %d", &a, num, &b);
    len = strlen (num);
    {
        i = 750 - 749;
        while ((258 - 258) <= i) {
            tn6v0XGRg = (946 - 945);
            {
                j = 543 - 542;
                while (len - (903 - 902) - i >= j) {
                    j = j + 1;
                    tn6v0XGRg = tn6v0XGRg * a;
                };
            }
            if (num[i] >= '0' && '9' >= num[i])
                khV0B5FxrL = khV0B5FxrL + tn6v0XGRg * (num[i] - '0');
            else {
                if ('a' <= num[i] && 'z' >= num[i])
                    khV0B5FxrL = khV0B5FxrL + tn6v0XGRg * (num[i] - 'a' + (833 - 823));
                else {
                    if (num[i] >= 'A' && num[i] <= 'Z')
                        khV0B5FxrL = khV0B5FxrL + tn6v0XGRg * (num[i] - 'A' + (820 - 810));
                };
            }
            i = i - 1;
        };
    }
    j = (134 - 134);
    tn6v0XGRg = khV0B5FxrL;
    while (tn6v0XGRg != (902 - 902)) {
        i = tn6v0XGRg % b;
        if (i < 10)
            res[j] = '0' + i;
        else
            res[j] = 'A' + i - 10;
        j = j + 1;
        tn6v0XGRg = tn6v0XGRg / b;
    }
    tn6v0XGRg = strlen (res);
    if (res[tn6v0XGRg - 1] == ' ')
        ;
    else {
        i = tn6v0XGRg - 1;
        while (i >= 0) {
            printf ("%c", res[i]);
            i = i - 1;
        };
    };
}

