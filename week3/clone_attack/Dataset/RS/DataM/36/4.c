void  f (char a [], int l) {
    int i;
    int j;
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
    char t;
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
        while (i < l - (482 - 481)) {
            i++;
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
            for (j = l - (665 - 663); 0 <= j; j--)
                if (a[j] > a[j + (388 - 387)]) {
                    t = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = t;
                };
        };
    };
}

main () {
    char a [(798 - 298)] = {0};
    char b [500] = {0};
    int la;
    int lb;
    la = strlen (a);
    lb = strlen (b);
    scanf ("%s %s", a, b);
    f (a, la);
    f (b, lb);
    if (strcmp (a, b) == 0)
        printf ("YES\n");
    else
        printf ("NO\n");
}

