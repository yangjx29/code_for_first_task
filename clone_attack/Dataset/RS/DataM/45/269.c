void  main () {
    int m;
    char str1 [50], str2 [50], *p, *q, *t;
    scanf ("%s %s", str1, str2);
    q = str2;
    p = str1;
    while (!('\0' == *q)) {
        if (!(*p != *q)) {
            m = 1;
            t = q;
            for (; *p != '\0'; p = p + 1, q = q + 1)
                if (*p != *q) {
                    m = 0;
                    break;
                }
            if (m) {
                printf ("%d\n", t - str2);
                break;
            }
            else {
                p = str1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                q = q + 1;
            };
        }
        else
            q = q + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    };
}

