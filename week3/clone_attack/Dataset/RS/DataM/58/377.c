void  main () {
    char *p;
    char *p0;
    char c;
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
    gets (p);
    int n, i, j, k;
    scanf ("%d", &n);
    p = p0 = (char *) malloc (100 * 100 * sizeof (char));
    {
        i = 421 - 421;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            gets (p);
            k = 1;
            for (p = p0, j = (893 - 893); *(p + j) != '\0'; j++) {
                c = *(p + j);
                if (!(0 != j))
                    if (('a' > c || c > 'z') && (c < 'A' || c > 'Z') && c != '_') {
                        k = 0;
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        break;
                    }
                if (j != 0)
                    if (('a' > c || c > 'z') && (c < 'A' || c > 'Z') && c != '_' && (c < '0' || c > '9')) {
                        k = 0;
                        break;
                    };
            }
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
            printf ("%d%s", k, i == n - 1 ? "" : "\n");
            i++;
        };
    };
}

