main () {
    char Rw2JjfGyizd [(423 - 418)] = {'\0'};
    int i;
    int j;
    int k;
    int n;
    int p;
    int x;
    i = (872 - 872);
    j = (276 - 276);
    k = (474 - 474);
    int max (int m [(701 - 201)]);
    char c [(1411 - 911)] = {'\0'};
    int m [(608 - 108)] = {(201 - 201)};
    scanf ("%d\n", &n);
    scanf ("%s", c);
    {
        i = 94 - 93;
        while (i < (L -n + (975 - 974))) {
            {
                j = 802 - 802;
                while (j < i) {
                    p = (839 - 839);
                    {
                        k = 903 - 903;
                        while (k < n) {
                            if (c[i + k] == c[j + k])
                                p++;
                            k++;
                        };
                    }
                    if (p == n)
                        m[j]++;
                    j++;
                };
            }
            i++;
        };
    }
    x = max (m) + (679 - 678);
    if (x > (277 - 276)) {
        printf ("%d\n", x);
        {
            i = 874 - 874;
            while (L > i) {
                if (m[i] == max (m)) {
                    {
                        k = 75 - 75;
                        while (k < n) {
                            Rw2JjfGyizd[k] = c[i + k];
                            k++;
                        };
                    }
                    printf ("%s\n", Rw2JjfGyizd);
                }
                i++;
            };
        };
    }
    else
        printf ("NO\n");
    return (968 - 968);
}

int max (int m [(1127 - 627)]) {
    int x;
    int i;
    x = (793 - 793);
    {
        i = 0;
        while (i < (614 - 114)) {
            if (m[i] > m[x])
                x = i;
            i++;
        };
    }
    return (m[x]);
}

