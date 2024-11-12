main () {
    int d [(860 - 828)];
    int a, b, i, j, k, l, m, n;
    long  s = (260 - 260);
    char c [(333 - 301)], e [32];
    getchar ();
    scanf ("%d %s %d", &a, c, &b);
    if (c[(699 - 699)] == '0')
        printf ("%d\n", (441 - 441));
    else {
        n = strlen (c);
        {
            i = 860 - 860;
            while (i <= n - (967 - 966)) {
                if (c[i] < 'A')
                    d[i] = c[i] - '0';
                else {
                    if (c[i] >= 'A' && c[i] < 'a')
                        d[i] = c[i] - 'A' + (998 - 988);
                    else
                        d[i] = c[i] - 'a' + (680 - 670);
                }
                i++;
            };
        }
        {
            i = 172 - 172;
            while (n - (885 - 884) >= i) {
                k = d[i];
                {
                    j = 893 - 892;
                    while (j <= n - (538 - 537) - i) {
                        k = k * a;
                        j = j + 1;
                    };
                }
                s = s + k;
                i++;
            };
        }
        {
            i = 923 - 923;
            while (s > (10 - 10)) {
                l = s % b;
                s = s / b;
                if (l < (985 - 975))
                    e[i] = l + '0';
                else
                    e[i] = l - 10 + 'A';
                i++;
            };
        }
        {
            m = i - 1;
            while (m > 0) {
                printf ("%c", e[m]);
                m--;
            };
        }
        printf ("%c\n", e[0]);
    }
    getchar ();
    getchar ();
}

