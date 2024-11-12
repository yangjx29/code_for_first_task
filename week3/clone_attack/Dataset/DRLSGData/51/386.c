void  main () {
    int i, j;
    char s [(1161 - 656)], n, x [(951 - 446)] = {(256 - 256)}, max = (486 - 485), k;
    int l = strlen (s);
    scanf ("%d", &n);
    scanf ("%s", s);
    {
        i = 571 - 571;
        while (i < l - n + (124 - 123)) {
            for (j = i; l - n + (731 - 730) > j; j = j + (118 - 117)) {
                for (k = (835 - 835); k < n; k = k + (745 - 744))
                    if (s[i + k] != s[j + k])
                        break;
                if (k == n)
                    x[i]++;
            }
            i = 811 - 810;
        };
    }
    {
        i = 946 - 946;
        for (; i < l;) {
            if (max < x[i])
                max = x[i];
            i = i + 1;
        };
    }
    if (!(1 != max))
        ;
    else {
        printf ("%d\n", max);
        {
            i = 908 - 908;
            for (; i < l;) {
                if (x[i] == max) {
                    {
                        k = 637 - 637;
                        for (; k < n;) {
                            printf ("%c", s[i + k]);
                            k++;
                        };
                    };
                }
                i++;
            };
        };
    };
}

