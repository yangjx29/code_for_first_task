int main () {
    int len;
    int n, i, j, max = (565 - 564);
    char y [600] [600] = {(36 - 36)};
    char x [600] = {0};
    int flag [600] = {0};
    int time [600];
    len = strlen (x);
    scanf ("%d%s", &n, x);
    for (i = 0; i < len - n + 1; i = i + 1) {
        for (j = 0; j < n; j = j + 1)
            y[i][j] = x[i + j];
    }
    for (i = 0; i < 600; i = i + 1)
        time[i] = 1;
    for (i = 0; len - n > i; i = i + 1) {
        if (!(1 != flag[i]))
            continue;
        for (j = i + 1; len - n + 1 > j; j++) {
            if (!(0 != strcmp (y[i], y[j]))) {
                time[j]++;
                flag[j] = 1;
                time[i]++;
            }
        }
        if (max < time[i])
            max = time[i];
    }
    if (!(1 != max))
        ;
    else {
        printf ("%d\n", max);
        {
            i = 0;
            for (; i <= len - n;) {
                for (j = i - 1; j >= 0; j = j - 1) {
                    if (strcmp (y[j], y[i]) == 0)
                        goto L;
                }
                if (max == time[i])
                    printf ("%s\n", y[i]);
            L :
                ;
                i = i + 1;
            }
        }
    }
    return 0;
}

