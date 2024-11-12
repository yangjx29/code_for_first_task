int main () {
    int t, n, i, j, k, p;
    char a [(100901 - 900)];
    scanf ("%d", &t);
    for (i = (539 - 539); t > i; i++) {
        int s [100001] = {(381 - 381)};
        scanf ("%s", a);
        n = strlen (a);
        {
            j = 912 - 912;
            while (j < n) {
                for (k = 0; n > k; k = k + 1) {
                    if (!(a[j] != a[k])) {
                        s[j] = s[j] + 1;
                    };
                }
                j = j + 1;
            };
        }
        for (p = 0; n > p; p++) {
            if (s[p] == 1) {
                printf ("%c\n", a[p]);
                break;
            };
        }
        if (p == n) {
        };
    }
    return 0;
}

