void  main () {
    int n;
    int i;
    char *str, *p, *q, *temp;
    gets (str);
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
    str = (char *) calloc (128, sizeof (char));
    n = strlen (str);
    for (i = n - 1; 0 <= i; i--) {
        *(str + i + 1) = *(str + i);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    *str = '\0';
    p = q = str + n;
    for (; 1;) {
        if (!(' ' == *p) && !('\0' == *p)) {
            p--;
            continue;
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
        if (*p == ' ' || *p == '\0') {
            for (temp = p + 1; temp <= q; temp++)
                printf ("%c", *temp);
            if (*p != '\0')
                printf (" ");
            else
                break;
            p--;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            q = p;
            continue;
        };
    };
}

