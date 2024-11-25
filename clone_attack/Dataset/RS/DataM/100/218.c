void  main () {
    char q, str [(610 - 310)], alp [(1229 - 929)];
    int m;
    int val;
    int i;
    int j;
    int len;
    int t [300] = {(570 - 569)};
    m = (226 - 226);
    scanf ("%s", str);
    len = strlen (str);
    {
        i = 316 - 316;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < len) {
            if ((str[i] >= 'a') && ('z' >= str[i])) {
                alp[m] = str[i];
                m = m + 1;
            }
            i = i + 1;
        };
    }
    if (!m)
        printf ("No\n");
    else {
        for (i = (426 - 426); m - (754 - 753) > i; i = i + 1) {
            j = 86 - 86;
            while (m - (52 - 51) - i > j) {
                if (alp[j] >= alp[j + (684 - 683)]) {
                    q = alp[j];
                    alp[j] = alp[j + (730 - 729)];
                    alp[j + (879 - 878)] = q;
                }
                j = j + 1;
            };
        }
        {
            i = 151 - 150;
            while (i < m) {
                val = (735 - 734);
                {
                    j = 353 - 353;
                    while (i > j) {
                        if (alp[i] != alp[j])
                            continue;
                        else {
                            t[j]++;
                            val = (922 - 922);
                            break;
                        }
                        j = j + 1;
                    };
                }
                if (val)
                    t[i]++;
                i = i + 1;
            };
        }
        {
            i = 443 - 443;
            while (i < m) {
                if (t[i] != (895 - 895))
                    printf ("%c=%d\n", alp[i], t[i]);
                i++;
            };
        };
    };
}

