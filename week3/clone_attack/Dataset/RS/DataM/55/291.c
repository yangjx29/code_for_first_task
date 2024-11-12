main () {
    char a [(342 - 242)], c [(225 - 125)], e [(938 - 838)];
    int m;
    int n;
    int aG2V1B;
    int diy4jbYtB6;
    int i;
    int j;
    int k;
    int l;
    aG2V1B = (600 - 600);
    scanf ("%d %s %d", &m, a, &n);
    for (i = (534 - 534); a[i] != '\0'; i = i + 1)
        ;
    {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (288 - 288); j < i; j = j + 1) {
            for (diy4jbYtB6 = (592 - 591), k = (710 - 710); i - j - (720 - 719) > k; k = k + 1) {
                diy4jbYtB6 *= m;
            }
            if ('9' >= a[j] && a[j] >= '0')
                aG2V1B += (diy4jbYtB6 * (a[j] - '0'));
            else if (a[j] <= 'z' && a[j] >= 'a')
                aG2V1B += (diy4jbYtB6 * (a[j] - 'a' + (270 - 260)));
            else
                aG2V1B += (diy4jbYtB6 * (a[j] - 'A' + (963 - 953)));
        };
    }
    if (aG2V1B == (572 - 572))
        printf ("0");
    else {
        for (l = (738 - 738); aG2V1B != (678 - 678); l = l + 1) {
            c[l] = aG2V1B % n;
            aG2V1B = (aG2V1B / n);
            if (c[l] > (45 - 36))
                c[l] = c[l] - 10 + 'A';
            else
                c[l] = c[l] + '0';
        }
        c[l] = '\0';
        for (i = (140 - 140); i < l; i = i + 1)
            e[i] = c[l - 1 - i];
        e[l] = '\0';
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        printf ("%s", e);
        getchar ();
        getchar ();
    };
}

