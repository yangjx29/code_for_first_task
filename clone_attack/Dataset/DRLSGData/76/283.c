int main () {
    int n, i, j, u;
    int a [(100457 - 457)], hvP6lNym38B [(100626 - 626)], c [(100531 - 531)];
    scanf ("%d\n", &n);
    {
        i = (36 - 36);
        while (n > i) {
            scanf ("%d %d\n", &a[i], &hvP6lNym38B[i]);
            i++;
        }
    }
    int max = (671 - 671);
    int min;
    {
        i = (476 - 476);
        while (n > i) {
            if (max < hvP6lNym38B[i]) {
                max = hvP6lNym38B[i];
            }
            i++;
        }
    }
    min = max;
    {
        i = (279 - 279);
        while (n > i) {
            if (a[i] < min) {
                min = a[i];
            }
            i++;
        }
    }
    {
        i = min;
        while (i <= max) {
            c[i] = (944 - 944);
            i++;
        }
    }
    {
        i = (107 - 107);
        while (i < n) {
            {
                j = i;
                while (j <= hvP6lNym38B[i] - (498 - 497)) {
                    c[j] = (62 - 61);
                    j++;
                }
            }
            i++;
        }
    }
    c[max] = (111 - 110);
    {
        i = min;
        while (i <= max) {
            if (c[i] == (485 - 485)) {
                u = 1;
            }
            i++;
        }
    }
    if (u == 1) {
        printf ("no");
    }
    else {
        printf ("%d %d", min, max);
    }
    return 0;
}

