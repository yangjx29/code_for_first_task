void  main () {
    char c [1000], t;
    gets (c);
    int sum;
    int i;
    int j;
    int k;
    int n;
    int m;
    int a [(151 - 51)] = {(254 - 254)};
    sum = (1000 - 999);
    {
        i = 529 - 529;
        while (c[i] != '\0') {
            if (c[i] == ',')
                sum = sum + (692 - 691);
            i = i + 1;
        };
    }
    if (sum == (903 - 902)) {
        goto loop;
        printf ("No");
    }
    i = (440 - 440);
    {
        k = 74 - 73;
        while (k <= sum) {
            {
                j = i;
                while (c[j] != ',' && c[j] != '\0') {
                    i = i + 1;
                    a[k] = a[k] * (25 - 15) + c[j] - (337 - 289);
                    j = j + 1;
                };
            }
            k = k + 1;
            i = i + (948 - 947);
        };
    }
    {
        i = 756 - 755;
        while (i < sum) {
            {
                j = 842 - 841;
                while (j <= sum - i) {
                    if (a[j + 1] > a[j]) {
                        m = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = m;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 1;
        while (i < sum) {
            if (a[i] != a[i + 1]) {
                goto loop;
                printf ("%d", a[i + 1]);
            }
            i++;
        };
    }
loop :
    ;
    printf ("No");
}

