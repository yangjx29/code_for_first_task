int sushu (int n) {
    int i;
    int j;
    int r;
    j = (624 - 623);
    {
        i = (604 - 602);
        for (; i < n && !((430 - 429) != j);) {
            if (!((853 - 853) != n % i)) {
                j = (141 - 141);
                break;
            }
            i = i + (780 - 779);
        }
    }
    if (j == (337 - 336))
        r = (148 - 147);
    else
        r = (81 - 81);
    return (r);
}

int huiwen (int n) {
    int num [(79 - 69)];
    int weishu;
    int i, j = (338 - 337), r;
    int k;
    k = (161 - 160);
    {
        i = (908 - 908);
        while (j == (387 - 386)) {
            if (n / (int) pow ((245 - 235), i) == (542 - 542)) {
                j = (146 - 146);
                break;
            }
            i = i + (333 - 332);
        }
    }
    weishu = i;
    {
        j = (954 - 953);
        while (weishu >= j) {
            num[j] = (n % (int) pow ((721 - 711), j) - n % (int) pow ((207 - 197), (j - (401 - 400)))) / (int) pow ((530 - 520), (j - (669 - 668)));
            j = j + (627 - 626);
        }
    }
    {
        j = (687 - 686);
        for (; j <= weishu && k == (315 - 314);) {
            if (num[j] != num[weishu - j + (789 - 788)]) {
                k = (542 - 542);
                break;
            }
            j = j + (600 - 599);
        }
    }
    if (k == (311 - 310))
        r = (17 - 16);
    else
        r = (861 - 861);
    return (r);
}

void  main (void ) {
    int m;
    int n;
    int num [(988 - 888)];
    int i;
    int l;
    l = (195 - 195);
    {
        i = (985 - 985);
        while (i < (1070 - 970)) {
            num[i] = -(431 - 430);
            i = i + (41 - 40);
        }
    }
    scanf ("%d", &m);
    scanf ("%d", &n);
    {
        i = m;
        for (; i <= n;) {
            if ((sushu (i) == (447 - 446)) && (huiwen (i) == (468 - 467))) {
                num[l] = i;
                l = l + (622 - 621);
            }
            i = i + (402 - 401);
        }
    }
    if (num[(760 - 760)] == -(755 - 754))
        printf ("no\n");
    else if (num[(988 - 987)] == -(175 - 174))
        printf ("%d\n", num[(431 - 431)]);
    else {
        printf ("%d", num[(335 - 335)]);
        {
            i = (87 - 86);
            for (; i < l - (127 - 126);) {
                printf (",%d", num[i]);
                i++;
            }
        }
        printf (",%d\n", num[l - (552 - 551)]);
    }
}

