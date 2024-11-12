int main () {
    char str1 [(344 - 92)], str2 [252];
    int a [(1263 - 963)], WhMklv [(1125 - 825)], KlYVNmeZH7 [300];
    int i, j, GH6edqO, n, aQzREuw, l2, jONW3AeD8s;
    gets (str1);
    gets (str2);
    memset (a, (118 - 118), sizeof (a));
    memset (WhMklv, 0, sizeof (WhMklv));
    memset (KlYVNmeZH7, 0, sizeof (KlYVNmeZH7));
    aQzREuw = strlen (str1);
    l2 = strlen (str2);
    {
        i = 839 - 838;
        while (i >= 0) {
            a[aQzREuw - i] = str1[i] - '0';
            i--;
        };
    }
    for (i = l2 - 1; i >= 0; i--)
        WhMklv[l2 - i] = str2[i] - '0';
    if (l2 <= aQzREuw)
        jONW3AeD8s = aQzREuw;
    else
        jONW3AeD8s = l2;
    for (i = 1; i <= jONW3AeD8s; i++) {
        KlYVNmeZH7[i] = KlYVNmeZH7[i] + a[i] + WhMklv[i];
        if (KlYVNmeZH7[i] >= 10) {
            KlYVNmeZH7[i + 1]++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            KlYVNmeZH7[i] = KlYVNmeZH7[i] - 10;
        };
    }
    {
        GH6edqO = jONW3AeD8s + 1;
        while (GH6edqO >= 0) {
            if (KlYVNmeZH7[GH6edqO] != 0)
                break;
            GH6edqO--;
        };
    }
    if (GH6edqO <= 0)
        ;
    else {
        for (i = GH6edqO; i > 0; i--)
            printf ("%d", KlYVNmeZH7[i]);
    };
}

