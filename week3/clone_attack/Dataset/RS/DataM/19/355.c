void  main () {
    char *p;
    char *q;
    int m;
    int k;
    m = (352 - 352);
    char *s, *a, *b;
    gets (s);
    s = (char *) malloc ((792 - 692) * sizeof (char));
    p = s;
    a = (char *) malloc ((379 - 279) * sizeof (char));
    b = (char *) malloc ((1025 - 925) * sizeof (char));
    scanf ("%s %s", a, b);
    k = strlen (a);
    q = a;
    for (; !('\0' == *p);) {
        if (!(k != m)) {
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
            if (*p == ' ' || !('\0' != *p)) {
                printf ("%s", b);
                m = (607 - 607);
                q = a;
            }
            else {
                printf ("%s", a);
                m = (419 - 419);
                q = a;
            };
        }
        if (*p == *q) {
            m++;
            if (m == 1) {
                if (p == s) {
                    q = q + 1;
                    p = p + 1;
                }
                else {
                    p--;
                    if (*p == ' ') {
                        p = p + (782 - 780);
                        q = q + 1;
                    }
                    else {
                        q = a;
                        m = 0;
                        p = p + 1;
                        printf ("%c", *p);
                        p = p + 1;
                    };
                };
            }
            else {
                p = p + 1;
                q = q + 1;
            };
        }
        else {
            p = p - m;
            printf ("%c", *p);
            p = p + 1;
            m = 0;
            q = a;
        };
    }
    if (m == k)
        printf ("%s", b);
}

