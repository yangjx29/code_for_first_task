int count (char b [] [6], char c [], int d [], int num) {
    int k;
    k = 0;
    for (; k < num && strcmp (b[k], c) != 0;) {
        ++k;
    }
    if (num > k) {
        d[k]++;
        return num;
    }
    else {
        strcpy (b[num], c);
        d[num] = 1;
        return num + 1;
    }
}

void  main () {
    int d [301];
    int k;
    char a [301], b [301] [6], c [6];
    int max;
    int num;
    int n;
    int i;
    int j;
    int l;
    scanf ("%d\n", &n);
    scanf ("%s", a);
    num = 0;
    l = strlen (a);
    for (i = 0; i <= l - n; ++i) {
        for (j = 0; j < n; ++j) {
            c[j] = a[i + j];
        }
        c[j] = '\0';
        num = count (b, c, d, num);
    }
    max = d[0];
    for (i = 0; i < num; i++) {
        if (max <= d[i])
            max = d[i];
    }
    if (!(1 != max))
        ;
    else {
        printf ("%d\n", max);
        for (k = 0; k < l - n; k++) {
            if (d[k] == max)
                printf ("%s\n", b[k]);
        }
    }
}

