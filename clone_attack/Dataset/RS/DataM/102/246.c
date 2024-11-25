struct   photo {
    char gen [10];
    double  height;
};
main () {
    int k;
    int i;
    int j;
    k = (955 - 955);
    struct   photo a [50];
    int n;
    struct   photo b;
    scanf ("%d", &n);
    {
        i = 731 - 731;
        while (n > i) {
            scanf ("%s %lf", a[i].gen, &a[i].height);
            i++;
        };
    }
    {
        i = 734 - 734;
        while (n > i) {
            {
                j = 0;
                while (j < n - 1 - i) {
                    if (a[j + 1].height > a[j].height) {
                        b = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = b;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = n - 1;
        while (i >= 0) {
            if (!(0 != strcmp (a[i].gen, "male")) && !(0 == k))
                printf (" %.2f", a[i].height);
            if (strcmp (a[i].gen, "male") == 0 && k == 0) {
                printf ("%.2f", a[i].height);
                k = k + 1;
            }
            i--;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (strcmp (a[i].gen, "female") == 0)
                printf (" %.2f", a[i].height);
            i++;
        };
    };
}

