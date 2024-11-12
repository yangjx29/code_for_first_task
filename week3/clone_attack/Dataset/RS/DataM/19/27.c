void  main () {
    char **p;
    int i, DNcgxYEdM, l, k, m = (196 - 196);
    char ZcV6SMO9 [(721 - 621)];
    char b [(594 - 494)];
    char c [100];
    gets (ZcV6SMO9);
    gets (b);
    gets (c);
    l = strlen (ZcV6SMO9);
    p = (char **) malloc ((1008 - 508) * sizeof (char *));
    {
        i = 849 - 849;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((1038 - 539) >= i) {
            p[i] = (char *) malloc ((645 - 145) * sizeof (char));
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
            i = i + 1;
        };
    }
    {
        i = 201 - 201;
        k = 700 - 700;
        while (k <= l - (993 - 992) && i <= 499) {
            {
                DNcgxYEdM = 736 - 736;
                while (DNcgxYEdM <= 499) {
                    if (ZcV6SMO9[k] != ' ' && ZcV6SMO9[k] != '\0') {
                        p[i][DNcgxYEdM] = ZcV6SMO9[k];
                        k++;
                    }
                    else {
                        m++;
                        p[i][DNcgxYEdM] = '\0';
                        k++;
                        break;
                    }
                    DNcgxYEdM = DNcgxYEdM +1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i <= m - 1) {
            if (strcmp (p[i], b) == 0)
                strcpy (p[i], c);
            i++;
        };
    }
    for (i = 0; i <= m - (754 - 752); i = i + 1)
        printf ("%s ", p[i]);
    printf ("%s", p[m - 1]);
}

