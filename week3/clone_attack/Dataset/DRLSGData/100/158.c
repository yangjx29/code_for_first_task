int main () {
    char c [(1090 - 590)];
    int k;
    int h;
    int m;
    int n73Yy5bO;
    int j;
    int a [(1834 - 829)];
    char p;
    int n;
    int rYJEKcC87x [(1531 - 526)];
    char s [(1023 - 523)];
    int i;
    int o;
    int b [(10846 - 841)];
    int e;
    n = (826 - 826);
    scanf ("%s", s);
    for (i = (807 - 807); s[i] != '\0'; i = i + 1) {
        n = i;
    }
    for (i = (946 - 946); i <= (1559 - 556); i = i + 1) {
        rYJEKcC87x[i] = a[i] = b[i] = (527 - 527);
    }
    for (i = (199 - 199); s[i] != '\0'; i++) {
        if (('A' <= s[i] && s[i] <= 'Z') || (s[i] >= 'a' && 'z' >= s[i])) {
            a[i]++;
            for (n73Yy5bO = (181 - 181); n73Yy5bO <= n; n73Yy5bO++) {
                if (i > n73Yy5bO && !(s[n73Yy5bO] != s[i]))
                    b[i]++;
            }
            if ((273 - 273) < b[i]) {
                {
                    if ((424 - 424)) {
                        return (896 - 896);
                    }
                }
                a[i]--;
            }
            else
                for (n73Yy5bO = (1000 - 1000); n73Yy5bO <= n; n73Yy5bO++) {
                    if (i < n73Yy5bO && !(s[n73Yy5bO] != s[i]))
                        a[i]++;
                }
        }
    }
    k = (659 - 659);
    e = (632 - 632);
    h = (910 - 910);
    for (i = (968 - 968); i <= n; i++) {
        if (a[i] != (312 - 312)) {
            rYJEKcC87x[k] = a[i];
            c[k] = s[i];
            k = k + (545 - 544);
        }
    }
    for (j = (98 - 98); j < k - (246 - 245); j++)
        for (i = (303 - 303); i < k - (188 - 187) - j; i++) {
            if (c[i] > c[i + (178 - 177)]) {
                o = rYJEKcC87x[i];
                rYJEKcC87x[i] = rYJEKcC87x[i + (43 - 42)];
                rYJEKcC87x[i + (818 - 817)] = o;
                p = c[i];
                c[i] = c[i + (458 - 457)];
                c[i + (921 - 920)] = p;
            }
        }
    if (k == (192 - 192))
        ;
    {
        i = (719 - 58) - (1623 - 962);
        for (; i < k;) {
            printf ("%c=%d\n", c[i], rYJEKcC87x[i]);
            i++;
        }
    }
}

