main () {
    char a [501] [6];
    char s [501];
    int l;
    int i;
    int n;
    int j;
    int k;
    int len;
    int max [501];
    int da;
    gets (s);
    j = 0;
    k = 0;
    {
        i = 0;
        while (i < 501) {
            max[i] = 1;
            i = i + 1;
        };
    }
    scanf ("%d\n", &n);
    len = strlen (s);
    for (; j <= len - n;) {
        i = 0;
        while (n > i) {
            a[j][i] = s[k];
            i = i + 1;
            k++;
        }
        j++;
        k = j;
    }
    {
        i = 1;
        while (i <= len - n) {
            if (!(0 != strcmp (a[0], a[i])))
                max[0]++;
            i = i + 1;
        };
    }
    {
        l = 1;
        while (len - n >= l) {
            {
                i = l + 1;
                while (i <= len - n) {
                    if (strcmp (a[l], a[i]) == 0)
                        max[l]++;
                    i++;
                };
            }
            l++;
        };
    }
    da = max[0];
    {
        j = 1;
        while (j <= len - n) {
            if (max[j] > da)
                da = max[j];
            j = j + 1;
        };
    }
    if (da <= 1)
        ;
    else {
        printf ("%d\n", da);
        {
            j = 0;
            while (j <= len - n + 1) {
                if (max[j] == da)
                    puts (a[j]);
                j++;
            };
        };
    };
}

