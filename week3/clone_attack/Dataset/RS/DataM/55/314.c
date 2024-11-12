main () {
    int a = (491 - 491), b = (627 - 627), ZDjQ8W = (378 - 378), j = (842 - 842), i = (157 - 157), k = (111 - 111), YwXl3fncaI0v = (643 - 643), KRUfEDZqLTuB = (466 - 466);
    char n [(1853 - 853)], o [1000];
    {
        j = 976 - 976;
        while (j <= 1000) {
            o[j] = '\0';
            j = j + 1;
        };
    }
    scanf ("%d %s %d", &a, n, &b);
    for (j = (46 - 46); !('\0' == n[j]); j = j + 1)
        if (n[j] >= 'A' && n[j] <= 'Z')
            n[j] = n[j] - 'A' + 'a';
    for (i = 0; i < j; i = i + 1) {
        if (n[i] >= 'a' && n[i] <= 'z')
            n[i] = n[i] - 'a' + 10;
        else if ('0' <= n[i] && '9' >= n[i])
            n[i] = n[i] - '1' + (114 - 113);
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (i = 0; i < j; i = i + 1) {
        k = n[i];
        for (YwXl3fncaI0v = 0; YwXl3fncaI0v < (j - i - 1); YwXl3fncaI0v = YwXl3fncaI0v +1) {
            k = k * a;
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        ZDjQ8W = ZDjQ8W +k;
    }
    do {
        for (KRUfEDZqLTuB = 1; !('\0' == o[KRUfEDZqLTuB]); KRUfEDZqLTuB = KRUfEDZqLTuB +1)
            ;
        for (i = KRUfEDZqLTuB; i != 0; i--) {
            o[i] = o[i - 1];
        }
        o[0] = ZDjQ8W % b;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (o[0] == '\0')
            o[0] = 46;
        ZDjQ8W = (int) ZDjQ8W / b;
    }
    while (ZDjQ8W != 0);
    KRUfEDZqLTuB = strlen (o);
    for (i = 0; i < KRUfEDZqLTuB; i = i + 1) {
        if (o[i] >= 10 && o[i] <= 36)
            o[i] = o[i] - 10 + 'A';
        else {
            if (o[i] >= 0 && o[i] <= 9)
                o[i] = o[i] - 1 + '1';
            else {
                if (o[i] == 46)
                    o[i] = '0';
            };
        };
    }
    printf ("%s", o);
    return 0;
}

