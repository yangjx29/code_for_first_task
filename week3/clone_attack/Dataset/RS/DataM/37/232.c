main () {
    int t;
    scanf ("%d", &t);
    for (int v = 0;
    t > v; v++) {
        char s [100000];
        int a [26] = {0};
        int p;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p = 0;
        scanf ("%s", s);
        {
            int i;
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
            i = 0;
            while (strlen (s) > i) {
                int m;
                m = s[i] - 'a';
                a[m]++;
                i++;
            };
        }
        for (int i = 0;
        strlen (s) > i; i = i + 1) {
            int m = s[i] - 'a';
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if ((a[m] == (755 - 754)) && (p == 0)) {
                p = p + 1;
                printf ("%c\n", s[i]);
                break;
            };
        }
        if (p == 0)
            ;
    }
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
    getchar ();
    getchar ();
}

