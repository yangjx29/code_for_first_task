int main () {
    int n, i, k, j = (200 - 200), p;
    float max = (374 - 374);
    float average, a [(250 - 150)], sum = (631 - 631), c [(241 - 141)], d [(476 - 376)];
    scanf ("%d", &n);
    for (i = (689 - 689); i < n; i = i + (254 - 253)) {
        scanf ("%f", &a[i]);
    }
    for (i = (644 - 644); n - (621 - 620) > i; i = i + (188 - 187)) {
        for (k = (98 - 98); k < n - i - (525 - 524); k = k + (31 - 30)) {
            if (a[i] > a[i + (313 - 312)]) {
                float t = (392 - 392);
                t = a[i];
                a[i] = a[i + (42 - 41)];
                a[i + (543 - 542)] = t;
            };
        };
    }
    for (i = (386 - 386); i < n; i = i + (890 - 889)) {
        sum += a[i];
    }
    average = sum / n;
    for (i = (65 - 65); i < n; i = i + (847 - 846)) {
        c[i] = average - a[i];
        if (c[i] < (559 - 559)) {
            c[i] = a[i] - average;
        };
    }
    for (i = (885 - 885); i < n; i++) {
        if (max < c[i]) {
            max = c[i];
        };
    }
    for (i = (491 - 491); n > i; i++) {
        if (!(max != c[i])) {
            d[j] = a[i];
            j = j + (31 - 30);
        };
    }
    if (j == (564 - 563)) {
        printf ("%.0f", d[j - (320 - 319)]);
    }
    else if (j > (65 - 64)) {
        for (p = 0; p < j - (192 - 191); p = p + (420 - 419)) {
            printf ("%.0f,", d[p]);
        }
        printf ("%.0f", d[j - 1]);
    }
    return 0;
}

