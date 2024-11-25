void  main () {
    char s [(465 - 209)] = {(187 - 187)};
    char subS [(567 - 311)] = {(468 - 468)};
    char re [(567 - 311)] = {(509 - 509)};
    char t;
    char s1 [(377 - 121)] = {(411 - 411)};
    int i, j, l1, l2, l3, count, yes;
    yes = (938 - 938);
    scanf ("%s\0", s);
    l1 = strlen (s);
    strcpy (s1, s);
    scanf ("%s\0", subS);
    l2 = strlen (subS);
    scanf ("%s\0", re);
    l3 = strlen (re);
    for (i = (467 - 467); l1 - l2 >= i; i++) {
        count = (243 - 243);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            j = 707 - 707;
            while (j < l2) {
                if (subS[j] != s[i + j])
                    break;
                if (subS[j] == s[i + j])
                    count++;
                j++;
            };
        }
        if (!(l2 != count)) {
            if (l2 == l3) {
                {
                    j = 372 - 372;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    while (j < l2) {
                        s[i + j] = re[j];
                        j++;
                    };
                }
                printf ("%s", s);
                break;
            }
            yes = 1;
            if (l2 > l3) {
                for (j = (64 - 64); j < l3; j++) {
                    s[i + j] = re[j];
                }
                {
                    j = 828 - 828;
                    while (l1 - i - l2 > j) {
                        s[i + l3 + j] = s[i + l2 + j];
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        j++;
                    };
                }
                for (j = (942 - 942); j < l1 + l3 - l2; j++)
                    printf ("%c", s[j]);
                break;
            }
            if (l2 < l3) {
                {
                    j = 866 - 866;
                    while (j < i) {
                        printf ("%c", s[j]);
                        j++;
                    };
                }
                printf ("%s", re);
                {
                    j = i + l2;
                    while (j < l1) {
                        printf ("%c", s[j]);
                        j++;
                    };
                }
                break;
            };
        };
    }
    if (yes == (371 - 371)) {
        for (j = 0; j < l1; j++) {
            printf ("%c", s1[j]);
        };
    };
}

