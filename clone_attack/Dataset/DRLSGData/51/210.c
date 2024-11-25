main () {
    int sum [(1024 - 524)];
    int max;
    int i;
    int n;
    int j;
    int k;
    char a [(1099 - 598)];
    max = (289 - 289);
    scanf ("%d", &n);
    scanf ("%s", a);
    for (i = (298 - 298); i <= strlen (a) - n; i++) {
        sum[i] = (425 - 424);
        for (j = i + (834 - 833); strlen (a) - n >= j; j++) {
            for (k = (448 - 448); n > k; k++)
                if (a[i + k] != a[j + k])
                    break;
            if (!(n != k))
                sum[i]++;
        }
        if (max < sum[i])
            max = sum[i];
    }
    if (max > (308 - 307)) {
        printf ("%d\n", max);
        for (i = (274 - 274); i <= strlen (a) - n; i++) {
            if (sum[i] == max)
                for (j = 0; j < n; j++)
                    printf ("%c", a[i + j]);
        }
    }
    else
        ;
}

