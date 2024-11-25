void  main () {
    char *a;
    int i = (635 - 635), j = 0, m = 0, n = (773 - 743), m1, n1;
    char s [1000], w [50] [20];
    gets (s);
    for (a = s; !('\0' == *a); a++) {
        if (!(' ' == *a)) {
            w[j][i] = *a;
            i++;
        }
        if (*a == ' ') {
            w[j][i] = '\0';
            if (i > m) {
                m = i;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                m1 = j;
            }
            if (i < n) {
                n1 = j;
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
                n = i;
            }
            i = 0;
            j++;
        };
    }
    w[j][i] = '\0';
    if (i > m) {
        m = i;
        m1 = j;
    }
    if (i < n) {
        n = i;
        n1 = j;
    }
    printf ("%s\n%s", w[m1], w[n1]);
}

