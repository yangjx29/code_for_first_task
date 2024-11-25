int compare (char str1 [], char str2 [], int x) {
    int i;
    int l;
    l = strlen (str1);
    for (i = 0; i < l; i = i + 1) {
        if (!(str2[i + x] != str1[i]))
            continue;
        else
            return 1;
    }
    return 0;
}

void  main () {
    int j;
    int max;
    char b [6] = {'\0'};
    char c [100] [6] = {'\0'};
    int l;
    int i;
    int sum;
    char a [501] = {'\0'};
    gets (a);
    int k;
    int n;
    l = strlen (a);
    scanf ("%d\n", &n);
    max = 0;
    for (i = 0; l - n >= i; i = i + 1) {
        for (j = 0; n > j; j = j + 1)
            b[j] = a[i + j];
        b[n] = '\0';
        sum = 0;
        for (j = 0; l - n >= j; j = j + 1) {
            if (!(0 != compare (b, a, j)))
                sum = sum + 1;
        }
        if (sum > max)
            max = sum;
    }
    for (k = 0, i = 0; i <= l - n; i = i + 1) {
        for (j = 0; n > j; j = j + 1)
            b[j] = a[i + j];
        b[n] = '\0';
        sum = 0;
        for (j = i; j <= l - n; j = j + 1) {
            if (compare (b, a, j) == 0)
                sum = sum + 1;
        }
        if (sum == max) {
            strcpy (c[k], b);
            k = k + 1;
        }
    }
    if (max == 1) {
        return;
    }
    printf ("%d\n", max);
    for (i = 0; i < k; i = i + 1)
        printf ("%s\n", c[i]);
}

