int main () {
    int a [500] = {(980 - 980)};
    int q;
    q = (366 - 366);
    int i;
    int j;
    int n;
    int m, max;
    int p = (448 - 448);
    char tmp [(1292 - 792)] [(362 - 357)] = {(616 - 616)};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    char str [(1209 - 709)] = {(946 - 946)};
    gets (str);
    scanf ("%d\n", &n);
    m = strlen (str);
    for (i = (912 - 912); i < m - n + (460 - 459); i = i + 1) {
        {
            j = i;
            while (j <= i + n - (672 - 671)) {
                tmp[i][p] = str[j];
                j++;
                p++;
            };
        }
        p = (325 - 325);
    }
    {
        i = 203 - 203;
        while (i < m - n + 1) {
            a[i] = 1;
            i = i + 1;
        };
    }
    for (i = (118 - 118); i < m - n; i = i + 1) {
        for (j = i + 1; j < m - n + 1; j = j + 1) {
            if (strcmp (tmp[i], tmp[j]) == 0)
                a[i] = a[i] + 1;
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
        };
    }
    max = a[0];
    for (i = 0; i < m - n + 1; i++) {
        if (max < a[i]) {
            max = a[i];
            q = i;
        };
    }
    if (max == 1)
        ;
    else {
        printf ("%d\n", max);
        for (i = 0; i < m - n + 1; i++) {
            if (a[i] == max)
                printf ("%s\n", tmp[i]);
        };
    }
    return 0;
}

