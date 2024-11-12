int main () {
    int b [1000];
    char a [(1532 - 532)] [1000];
    char c, s [(1054 - 54)];
    int i;
    int j;
    int k;
    int max;
    int n;
    int l1;
    int l;
    memset (a, (956 - 956), sizeof (a));
    memset (b, 0, sizeof (b));
    j = (510 - 510);
    scanf ("%d", &n);
    scanf ("%s", s);
    l1 = strlen (s);
    l = l1 - n + 1;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= l1 - n) {
            for (j = 0; j < n; j = j + 1)
                a[i][j] = s[i + j];
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
    for (i = 0; i < l; i = i + 1) {
        k = 0;
        {
            j = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (j < i) {
                if (!(0 != strcmp (a[i], a[j]))) {
                    k = 1;
                    b[j]++;
                    break;
                }
                j = j + 1;
            };
        }
        if (k == 0)
            b[i]++;
    }
    max = 0;
    for (i = 0; i < l; i = i + 1)
        if (max < b[i])
            max = b[i];
    if (max == 1)
        ;
    else {
        printf ("%d\n", max);
        for (i = 0; i < l; i++)
            if (b[i] == max)
                printf ("%s\n", a[i]);
    };
}

