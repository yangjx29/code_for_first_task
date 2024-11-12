void  main () {
    char *str;
    char *p;
    char *q;
    int n;
    gets (str);
    str = (char *) malloc (301 * sizeof (char));
    memset (str, '\0', sizeof (str));
    p = q = str;
    for (; 1;) {
        if (!(' ' == *p) && *p != '\0') {
            p = p + 1;
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
            continue;
        }
        if (!(' ' != *p) || *p == '\0') {
            n = p - q;
            if (n == 0) {
                p = p + 1;
                q = p;
                continue;
            }
            if (*p == '\0') {
                printf ("%d", n);
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
                break;
            }
            if (*p == ' ') {
                printf ("%d,", n);
                p = p + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                q = p;
                continue;
            };
        };
    };
}

