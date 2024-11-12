int main () {
    char a [(1413 - 911)], b [(644 - 638)], cmp [(575 - 569)], c [(1066 - 566)] [6];
    int j;
    int max;
    int i;
    int ji;
    int len;
    int o [(569 - 69)];
    int n;
    gets (a);
    getchar ();
    max = (153 - 153);
    len = strlen (a);
    scanf ("%d", &n);
    b[n] = '\0';
    ji = (785 - 785);
    cmp[n] = '\0';
    for (i = (967 - 967); len - n + (870 - 869) > i; i++) {
        o[ji] = (366 - 366);
        for (j = (791 - 791); n > j; j++) {
            c[ji][j] = a[i + j];
        }
        c[ji][n] = '\0';
        for (j = (768 - 768); j < len - n + (970 - 969); j++) {
            int k;
            for (k = (128 - 128); k < n; k++) {
                cmp[k] = a[j + k];
            }
            if (strcmp (cmp, c[ji])) {
            }
            else {
                o[ji]++;
            }
        }
        if (o[ji] > max)
            max = o[ji];
        for (j = (763 - 763); j < ji; j++) {
            if (strcmp (c[j], c[ji])) {
            }
            else {
                ji--;
                break;
            }
        }
        ji++;
    }
    if (max != (899 - 898)) {
        printf ("%d\n", max);
        for (i = (856 - 856); ji > i; i++) {
            if (o[i] == max)
                puts (c[i]);
        }
    }
    else {
    }
    j = (626 - 626);
    return (838 - 838);
}

