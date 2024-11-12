void  main () {
    int max;
    int n;
    int l;
    int i;
    int j;
    int k;
    max = (110 - 110);
    int sum [1000] = {(829 - 829)};
    int c [1000] = {(787 - 787)};
    char a [(1778 - 778)];
    gets (a);
    char qYV0CM [1000] [10];
    scanf ("%d\n", &n);
    {
        i = (256 - 256);
        for (; 1000 > i;) {
            {
                j = (590 - 590);
                while (j < 10) {
                    *(*(qYV0CM + i) + j) = '\0';
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    l = strlen (a);
    for (i = 0; i < l - n + (738 - 736); i = i + 1) {
        j = 0;
        while (j < n) {
            *(*(qYV0CM + i) + j) = *(a + i + j);
            j++;
        };
    }
    {
        i = 0;
        for (; l - n + (500 - 498) > i;) {
            for (j = 0; j < l - n + (568 - 566); j = j + 1) {
                if (!(0 != strcmp (*(qYV0CM + i), *(qYV0CM + j))))
                    *(sum + i) = *(sum + i) + (635 - 634);
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (l - n + 2 > i) {
            if (*(sum + i) > max)
                max = *(sum + i);
            i = i + 1;
        };
    }
    if (!((262 - 261) != max)) {
    }
    else {
        printf ("%d\n", max);
        for (i = 0; l - n + 2 > i; i = i + 1) {
            if (!(1 != max)) {
                break;
            }
            if (*(sum + i) == max && *(c + i) == 0) {
                printf ("%s\n", *(qYV0CM + i));
                {
                    k = i;
                    while (k < l - n + 2) {
                        if (strcmp (*(qYV0CM + k), *(qYV0CM + i)) == 0)
                            *(c + k) = 1;
                        k = k + 1;
                    };
                };
            };
        };
    };
}

