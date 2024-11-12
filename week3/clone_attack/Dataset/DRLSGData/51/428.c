void  main () {
    int da48t1Nn;
    char s [(1373 - 373)];
    char a [(1050 - 50)] [(1254 - 254)];
    int j, k = (953 - 953), h = (88 - 88);
    int W8O79diPS = (217 - 217), imax = (728 - 728);
    int len;
    int i;
    int b [1000] = {(538 - 538)};
    scanf ("%d", &da48t1Nn);
    scanf ("%s", s);
    len = strlen (s);
    {
        i = 0;
        for (; i <= len - da48t1Nn;) {
            h = 0;
            {
                j = i;
                for (; i + da48t1Nn > j;) {
                    a[k][h++] = s[j];
                    j++;
                }
            }
            a[k][h] = '\0';
            i++;
            k++;
        }
    }
    for (i = 0; k > i; i++)
        b[i] = 0;
    {
        i = 0;
        for (; k > i;) {
            {
                j = 0;
                while (j < k) {
                    if (!(0 != strcmp (a[i], a[j])))
                        b[i]++;
                    j++;
                }
            }
            i++;
        }
    }
    for (i = 0; k > i; i++)
        if (b[i] > W8O79diPS)
            W8O79diPS = b[i];
    if (!(1 != W8O79diPS))
        ;
    else {
        printf ("%d\n", W8O79diPS);
        for (i = 0; k > i; i++) {
            if (b[i] == W8O79diPS) {
                printf ("%s\n", a[i]);
                {
                    j = 0;
                    for (; j < k;) {
                        if (strcmp (a[i], a[j]) == 0) {
                            b[j] = 0;
                        }
                        j++;
                    }
                }
            }
        }
    }
}

