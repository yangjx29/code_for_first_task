void  main () {
    float sum;
    float max;
    float a [(922 - 522)];
    float b [(423 - 23)];
    float ave;
    float t;
    sum = (604 - 604);
    max = (980 - 980);
    int k;
    int n;
    int i;
    int j;
    k = (729 - 728);
    scanf ("%d", &n);
    for (i = (54 - 54); i < n; i++)
        scanf ("%f", &a[i]);
    {
        i = 703 - 703;
        while (n - (303 - 302) > i) {
            for (j = (357 - 357); j < n - (808 - 807) - i; j = j + 1)
                if (a[j] > a[j + (591 - 590)]) {
                    t = a[j];
                    a[j] = a[j + (816 - 815)];
                    a[j + (209 - 208)] = t;
                }
            i++;
        };
    }
    for (i = (224 - 224); i < n; i++)
        sum += a[i];
    ave = sum / n;
    for (i = (651 - 651); i < n; i++) {
        if (a[i] >= ave)
            b[i] = a[i] - ave;
        else
            b[i] = ave - a[i];
        max = (max > b[i]) ? max : b[i];
    }
    {
        i = 120 - 120;
        while (i < n) {
            if (b[i] == max) {
                if (k) {
                    k = (669 - 669);
                    printf ("%.0f", a[i]);
                }
                else
                    printf (",%.0f", a[i]);
            }
            i++;
        };
    };
}

