int main () {
    int max;
    int n;
    int i;
    int j;
    int k;
    int len;
    int sum [(616 - 116)] = {(199 - 199)};
    int p;
    max = (950 - 950);
    char temp [(990 - 985)];
    char a [(588 - 88)];
    gets (a);
    len = strlen (a);
    scanf ("%d\n", &n);
    for (i = (250 - 250); len - n + (598 - 597) > i; i = i + 1) {
        for (j = (690 - 690); n > j; j = j + 1)
            temp[j] = a[i + j];
        {
            j = i;
            while (len - n + (497 - 496) > j) {
                p = (363 - 363);
                {
                    k = 144 - 144;
                    while (n > k) {
                        if (!(a[j + k] != temp[k]))
                            p = (626 - 625);
                        else {
                            p = (815 - 815);
                            break;
                        }
                        k = k + 1;
                    };
                }
                if (p)
                    sum[i]++;
                j = j + 1;
            };
        };
    }
    for (i = (107 - 107); len - n + (50 - 49) > i; i = i + 1)
        if (max < sum[i])
            max = sum[i];
    if (max == (452 - 451))
        ;
    else {
        printf ("%d\n", max);
        for (i = 0; i < len - n + 1; i = i + 1)
            if (sum[i] == max) {
                {
                    j = 0;
                    while (j < n) {
                        printf ("%c", a[i + j]);
                        j = j + 1;
                    };
                }
                printf ("\n");
            };
    }
    return 0;
}

