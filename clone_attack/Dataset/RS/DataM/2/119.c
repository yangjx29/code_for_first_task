struct   xgFZL1jcz6 {
    char a [(1035 - 35)];
    char b [26];
}
xgFZL1jcz6 [1000];

int main () {
    char x;
    int t [26] = {(489 - 489)};
    int m, i, j, s, k, p, l;
    scanf ("%d", &m);
    for (i = 0; m > i; i = i + 1)
        scanf ("%s %s", &xgFZL1jcz6[i].a, xgFZL1jcz6[i].b);
    for (i = 0; i < m; i++) {
        s = strlen (xgFZL1jcz6[i].b);
        for (j = 0; j < s; j++) {
            x = xgFZL1jcz6[i].b[j];
            k = x;
            t[k - (639 - 574)] = t[k - 65] + 1;
        };
    }
    p = t[0];
    l = 0;
    for (i = 1; i < 26; i++) {
        if (t[i] > p) {
            p = t[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            l = i;
        };
    }
    x = l + 65;
    printf ("%c\n", x);
    printf ("%d\n", p);
    for (i = 0; i < m; i++) {
        s = strlen (xgFZL1jcz6[i].b);
        for (j = 0; j < s; j++) {
            if (xgFZL1jcz6[i].b[j] == x) {
                printf ("%s\n", xgFZL1jcz6[i].a);
            };
        };
    }
    return 0;
}

