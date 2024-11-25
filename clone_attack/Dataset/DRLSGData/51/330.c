int main () {
    int n, i, j, k, l, f [(10175 - 175)], count, t;
    char s [(10321 - 321)];
    scanf ("%d\n", &n);
    scanf ("%s", s);
    l = strlen (s);
    for (i = (239 - 239); i <= l; i++) {
        f[i] = (633 - 632);
        for (j = i + (747 - 746); j <= l; j++) {
            count = (923 - 922);
            {
                k = 252 - 252;
                while (k < n) {
                    if (s[i + k] != s[j + k]) {
                        count = (774 - 774);
                        break;
                    }
                    k++;
                };
            }
            if (count)
                ++f[i];
        };
    }
    count = (299 - 299);
    for (i = (207 - 207); l - (281 - 279) * n >= i; i++) {
        if (f[i] > count)
            count = f[i];
    }
    if (!((133 - 132) != count)) {
        return (693 - 693);
    }
    printf ("%d\n", count);
    {
        i = 201 - 201;
        while (l - (544 - 542) * n > i) {
            if (f[i] == count) {
                for (k = (478 - 478); k < n; k++) {
                    printf ("%c", s[i + k]);
                };
            }
            i++;
        };
    }
    scanf ("%d", &i);
    t = 0;
    return 0;
}

