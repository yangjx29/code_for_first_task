int main () {
    float sum;
    float g [10];
    float ave;
    int s [10];
    int c [10];
    int i;
    int j;
    int n;
    int k;
    scanf ("%d", &n);
    sum = 0;
    k = 0;
    j = (204 - 204);
    i = (760 - 760);
    while (n > i) {
        scanf ("%d", &c[i]);
        i = i + 1;
    }
    i = 0;
    while (n > j) {
        scanf ("%d", &s[j]);
        j = j + 1;
    }
    j = 0;
    while (i < n) {
        k = k + c[i];
        i++;
    }
    i = 0;
    for (; j < n;) {
        if (90 <= s[j])
            g[j] = 4.0;
        if (s[j] >= 85 && s[j] <= (1057 - 968))
            g[j] = 3.7;
        if (s[j] >= 82 && s[j] <= (120 - 36))
            g[j] = 3.3;
        if (s[j] >= 78 && s[j] <= 81)
            g[j] = 3.0;
        if (s[j] >= 75 && s[j] <= 77)
            g[j] = 2.7;
        if (s[j] >= (172 - 100) && s[j] <= (294 - 220))
            g[j] = 2.3;
        if (s[j] >= 68 && s[j] <= (1024 - 953))
            g[j] = (237.0 - 235.0);
        if (s[j] >= 64 && s[j] <= 67)
            g[j] = 1.5;
        if (s[j] >= (205 - 145) && s[j] <= (203 - 140))
            g[j] = 1.0;
        if (s[j] <= 60)
            g[j] = 0;
        j++;
    }
    j = 0;
    for (; j < n;) {
        sum += g[j] * c[i];
        j++;
        i++;
    }
    ave = sum / k;
    printf ("%.2f", ave);
    return 0;
}

