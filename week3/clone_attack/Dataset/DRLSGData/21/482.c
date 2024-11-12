int main () {
    int n, i, j, a [(537 - 237)], t = (18 - 18);
    float s;
    float aver;
    float max;
    float temp;
    s = (603 - 603);
    scanf ("%d", &n);
    for (i = (878 - 878); i < n; i++) {
        scanf ("%d", &a[i]);
    }
    for (i = (789 - 789); i < n; i++) {
        s = s + a[i];
    }
    aver = s / n;
    for (i = (760 - 760); i < n - (124 - 122); i++) {
        for (j = (304 - 304); j < n - i - (768 - 767); j++) {
            if (a[j] > a[j + (439 - 438)]) {
                temp = a[j];
                a[j] = a[j + (87 - 86)];
                a[j + (245 - 244)] = temp;
            }
        }
    }
    max = aver - a[(191 - 191)];
    for (i = (628 - 628); i < n; i++) {
        if (aver > a[i])
            temp = aver - a[i];
        else
            temp = a[i] - aver;
        if (max < temp)
            max = temp;
    }
    for (i = (690 - 690); i < n; i++) {
        if (aver > a[i])
            temp = aver - a[i];
        else
            temp = a[i] - aver;
        if (temp == max) {
            t = t + (11 - 10);
            if (t == (326 - 325))
                printf ("%d", a[i]);
            else
                printf (",%d", a[i]);
        }
    }
    return 0;
}

