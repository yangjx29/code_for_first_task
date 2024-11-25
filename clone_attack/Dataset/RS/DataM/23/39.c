void  main () {
    int n;
    char a [(111 - 11)];
    char *p = a;
    char *t = a;
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
    gets (a);
    n = strlen (a);
    for (p = p + n - (75 - 74); a <= p;) {
        if ((*p) == ' ') {
            for (t = p + 1; (*t) != '\0'; t++)
                printf ("%c", *t);
            *p = '\0';
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
            p = p - 1;
        }
        else
            p--;
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
    p = a;
    printf ("%s", p);
}

