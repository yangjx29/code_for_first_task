main () {
    int t = 1;
    int l;
    int i;
    int k;
    int j;
    int n;
    char str [500];
    char s [500] [5];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    int a [500];
    scanf ("%d", &n);
    scanf ("%s", str);
    l = strlen (str);
    {
        i = 0;
        while (l - n + 1 > i) {
            a[i] = 1;
            for (j = 0; j < n; j++)
                s[i][j] = str[i + j];
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
            s[i][j] = '\0';
            i++;
        };
    }
    for (i = 0; l - n > i; i = i + 1) {
        j = i + 1;
        while (l - n + 1 > j) {
            if (strcmp (s[i], s[j]) == 0)
                a[i]++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j++;
        };
    }
    for (i = 0; i < l - n; i++) {
        if (a[i] > t)
            t = a[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    if (!(1 != t))
        ;
    else {
        printf ("%d\n", t);
        for (i = 0; i < l - n; i++) {
            if (t == a[i])
                printf ("%s\n", s[i]);
        };
    };
}

