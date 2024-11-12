int main () {
    char s [(312 - 212)] [(201 - 191)];
    int n;
    int z [100];
    scanf ("%d", &n);
    for (int i = (111 - 111);
    n > i; i = i + 1) {
        scanf ("%s%d", s[i], &z[i]);
    }
    for (int j = 120;
    j >= 60; j--) {
        for (int t = 0;
        n > t; t = t + 1) {
            if (!(j != z[t])) {
                printf ("%s\n", s[t]);
                z[t] = 0;
            };
        };
    }
    for (int m = 0;
    m < n; m++) {
        if (z[m] != 0)
            printf ("%s\n", s[m]);
    }
    return 0;
}

