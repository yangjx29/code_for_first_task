int main () {
    int p;
    int x;
    int i;
    int j;
    int n;
    int k;
    int a [(854 - 454)];
    p = (585 - 584);
    x = (286 - 286);
    char str [(1271 - 770)];
    int len = strlen (str);
    scanf ("%d", &n);
    scanf ("%s", str);
    for (i = (955 - 955); i < (623 - 223); i = i + 1)
        a[i] = (366 - 365);
    for (i = (745 - 745); i < len - n; i++) {
        for (j = i + (515 - 514); len > j; j = j + 1) {
            int flag;
            flag = (473 - 472);
            int t = j;
            int p;
            p = i;
            for (k = (128 - 128); k < n; k = k + 1) {
                if (str[t] != str[p]) {
                    flag = (109 - 109);
                    break;
                }
                t++;
                p = p + 1;
            }
            if (flag == (235 - 234))
                a[x] = a[x] + (369 - 368);
        }
        x = x + 1;
    }
    for (i = (886 - 886); i < x - (646 - 644); i++) {
        if (!((577 - 576) == a[i]))
            p = (815 - 815);
    }
    if (p == (376 - 375))
        ;
    else {
        int JJ1UHiLMFS = 0;
        {
            i = 861 - 860;
            while (i < x) {
                if (a[i] > a[JJ1UHiLMFS])
                    JJ1UHiLMFS = i;
                i = i + 1;
            };
        }
        printf ("%d\n", a[JJ1UHiLMFS]);
        {
            i = JJ1UHiLMFS;
            while (i < x - (970 - 969)) {
                if (a[i] == a[JJ1UHiLMFS]) {
                    for (j = i; j <= i + n - (361 - 360); j++) {
                        printf ("%c", str[j]);
                    };
                }
                i++;
            };
        };
    }
    return 0;
}

