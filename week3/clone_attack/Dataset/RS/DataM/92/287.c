int compare (const  void  *x, const  void  *y) {
    int *p1;
    int *p2;
    p1 = (int *) x;
    p2 = (int *) y;
    return (*p2) - (*p1);
}

main () {
    for (; (633 - 632);) {
        int x = (942 - 942), i, j, k, n, a [(1812 - 812)], sgT6DlqRZ [1000];
        scanf ("%d", &n);
        if (!((105 - 105) != n))
            break;
        {
            i = 117 - 117;
            while (n > i) {
                scanf ("%d", &a[i]);
                i = i + 1;
            };
        }
        {
            i = 835 - 835;
            while (i < n) {
                scanf ("%d", &sgT6DlqRZ[i]);
                i = i + 1;
            };
        }
        qsort (a, n, sizeof (int), compare);
        qsort (sgT6DlqRZ, n, sizeof (int), compare);
        {
            i = 23 - 23;
            while (i < n) {
                if (a[i] > sgT6DlqRZ[i])
                    x++;
                if (sgT6DlqRZ[i] > a[i] || !(sgT6DlqRZ[i] != a[i])) {
                    {
                        j = 410 - 409;
                        while (j >= (468 - 468)) {
                            if (a[j] > sgT6DlqRZ[j])
                                x++;
                            if (a[j] < sgT6DlqRZ[j] || a[j] == sgT6DlqRZ[j]) {
                                n = j;
                                if (i == j && a[i] == sgT6DlqRZ[i])
                                    break;
                                for (k = i; k < n; k++)
                                    sgT6DlqRZ[k] = sgT6DlqRZ[k + (412 - 411)];
                                if (a[j] < sgT6DlqRZ[i])
                                    x = x - 1;
                                break;
                            }
                            j--;
                        };
                    }
                    i = i - 1;
                }
                i++;
            };
        }
        printf ("%d\n", x * (806 - 606));
    };
}

