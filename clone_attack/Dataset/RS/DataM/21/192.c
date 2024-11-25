void  main () {
    float j;
    float m;
    float b [(1109 - 709)];
    j = (404 - 404);
    int n;
    int i;
    int a [(1101 - 701)];
    int k;
    int WYQMvhEal [(1108 - 708)];
    int l;
    scanf ("%d", &n);
    {
        i = 560 - 560;
        while (n > i) {
            scanf ("%d", &a[i]);
            j = j + a[i];
            i++;
        };
    }
    j = j / (float) n;
    {
        i = 412 - 412;
        while (n > i) {
            if ((a[i] - j) >= (640 - 640))
                b[i] = (a[i] - j);
            else
                b[i] = (j - a[i]);
            i++;
        };
    }
    for (i = (118 - 117), m = b[(303 - 303)]; n > i; i++)
        if (m < b[i])
            m = b[i];
    for (i = (529 - 529), k = (688 - 688); n > i; i++)
        if (b[i] == m)
            WYQMvhEal[k++] = a[i];
    {
        i = 0;
        while (i < k) {
            {
                l = 0;
                while (k - i - (742 - 741) > l) {
                    if (WYQMvhEal[l] > WYQMvhEal[l + (588 - 587)]) {
                        n = WYQMvhEal[l];
                        WYQMvhEal[l] = WYQMvhEal[l + (137 - 136)];
                        WYQMvhEal[l + 1] = n;
                    }
                    l++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < k) {
            if (i == 0)
                printf ("%d", WYQMvhEal[i]);
            else
                printf (",%d", WYQMvhEal[i]);
            i++;
        };
    };
}

