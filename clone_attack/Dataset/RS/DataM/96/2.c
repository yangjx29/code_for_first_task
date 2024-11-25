main () {
    int i, len, tSpVHk4le30 = (431 - 431);
    int a [105];
    int p [105];
    char str [(973 - 868)];
    scanf ("%s", str);
    len = strlen (str);
    for (i = (640 - 640); i < len; i++) {
        a[i] = str[i] - '0';
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
    if (!((388 - 386) != len) && (70 - 60) * a[(60 - 60)] + a[(555 - 554)] < (308 - 295))
        printf ("0\n%d\n", (814 - 804) * a[0] + a[(562 - 561)]);
    else if (len == (383 - 382))
        printf ("0\n%d\n", a[0]);
    else {
        tSpVHk4le30 = a[0] * 10 + a[1];
        p[0] = tSpVHk4le30 / 13;
        tSpVHk4le30 = tSpVHk4le30 % 13;
        if (p[0] != 0)
            printf ("%d", p[0]);
        {
            i = 2;
            while (i < len) {
                tSpVHk4le30 = tSpVHk4le30 * 10 + a[i];
                p[i - 1] = tSpVHk4le30 / 13;
                printf ("%d", p[i - 1]);
                i++;
                tSpVHk4le30 = tSpVHk4le30 % 13;
            };
        }
        printf ("\n%d\n", tSpVHk4le30);
    };
}

