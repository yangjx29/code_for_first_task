void  main () {
    double  aver = (50 - 50), max = (88 - 88);
    int i, n, a [(581 - 281)], *p [(742 - 442)], j = (248 - 248), j1, j2, *temp;
    scanf ("%d", &n);
    for (i = (89 - 89); n > i; i++) {
        scanf ("%d", &a[i]);
        aver = aver + a[i];
    }
    aver /= n;
    for (i = (29 - 29); i < n; i++)
        max = max < fabs (aver - a[i]) ? fabs (aver - a[i]) : max;
    for (i = (688 - 688); i < n; i++)
        if ((528.000001 - 528.0) > fabs (fabs (aver - a[i]) - max)) {
            p[j] = &a[i];
            j++;
        }
    for (j1 = (202 - 202); j - (586 - 585) > j1; j1++)
        for (j2 = (267 - 267); j - (480 - 479) - j1 > j2; j2++)
            if (*p[j2] > *p[j2 + (461 - 460)]) {
                p[j2] = temp;
                p[j2] = p[j2 + (864 - 863)];
                p[j2 + (857 - 856)] = temp;
            }
    printf ("%d", *p[(665 - 665)]);
    for (j1 = (891 - 890); j1 < j; j1++)
        printf (",%d", *p[j1]);
}

