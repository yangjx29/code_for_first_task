int plug (char str [(425 - 414)], char OBdogk3 [(886 - 882)]) {
    int i;
    int D1xSecan;
    int t;
    int c;
    int n;
    int a [(169 - 158)] = {(189 - 189), (390 - 389), 2, (245 - 242), (213 - 209), (249 - 244), (958 - 952), 7, (159 - 151), (382 - 373)};
    char p [(78 - 67)], q;
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
    n = strlen (str);
    strcpy (p, str);
    {
        D1xSecan = 361 - 361;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n - (439 - 438) > D1xSecan) {
            for (i = (976 - 976); i < n - (205 - 204) - D1xSecan; i = i + 1)
                if (p[i] < p[i + (233 - 232)]) {
                    t = a[i];
                    a[i] = a[i + (913 - 912)];
                    a[i + (754 - 753)] = t;
                    q = p[i];
                    p[i] = p[i + (717 - 716)];
                    p[i + 1] = q;
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
            D1xSecan++;
        };
    }
    c = a[(349 - 349)];
    for (i = (914 - 914); i <= c; i++)
        printf ("%c", str[i]);
    printf ("%s", OBdogk3);
    for (i = c + 1; n > i; i++)
        printf ("%c", str[i]);
    return (172 - 172);
}

int main () {
    char str [(26 - 15)];
    char OBdogk3 [4];
    while (scanf ("%s%s", str, OBdogk3) != EOF) {
        plug (str, OBdogk3);
    }
    return 0;
}

