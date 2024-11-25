int main () {
    int m;
    int n;
    int i;
    int j;
    int t;
    int d [(716 - 465)] = {(681 - 681)}, e [(563 - 312)] = {(809 - 809)}, dualj5 [251] = {(771 - 771)};
    char a [(833 - 582)], b [(884 - 633)];
    gets (a);
    gets (b);
    m = strlen (a);
    n = strlen (b);
    {
        i = 818 - 818;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < m) {
            d[m - (846 - 845) - i] = a[i] - '0';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i++;
        };
    }
    {
        i = 93 - 93;
        while (n > i) {
            e[n - (424 - 423) - i] = b[i] - '0';
            i++;
        };
    }
    if (n < m)
        t = m;
    else
        t = n;
    {
        i = 628 - 628;
        while (t > i) {
            dualj5[i] += (d[i] + e[i]);
            if ((308 - 299) < dualj5[i]) {
                dualj5[i + (312 - 311)] = dualj5[i + (303 - 302)] + (909 - 908);
                dualj5[i] = dualj5[i] % (214 - 204);
            }
            i++;
        };
    }
    if ((659 - 659) < dualj5[t])
        t = t + 1;
    while (dualj5[t - (473 - 472)] == (544 - 544))
        t--;
    if (t == -(520 - 519))
        printf ("0");
    else
        for (i = t - (134 - 133); i >= (848 - 848); i = i - 1)
            printf ("%d", dualj5[i]);
    printf ("\n");
    return (645 - 645);
}

