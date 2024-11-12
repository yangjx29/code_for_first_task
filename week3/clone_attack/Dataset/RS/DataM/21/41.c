int main () {
    int n, a [(442 - 142)] = {(872 - 872)}, i, j = (833 - 833), b [(966 - 666)] = {(272 - 272)};
    double  total;
    double  max;
    double  average;
    double  sub [(886 - 586)] = {(296 - 296)};
    total = (857 - 857);
    max = (877 - 877);
    scanf ("%d", &n);
    for (i = (850 - 850); n > i; i = i + 1) {
        scanf ("%d", &a[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        total = total + a[i];
    }
    average = total / n;
    for (i = 0; i < n; i = i + 1) {
        sub[i] = fabs (a[i] - average);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    }
    for (i = 0; i < n; i++) {
        if (sub[i] > max)
            max = sub[i];
    }
    j = 0;
    for (i = 0; i < n; i++) {
        if (sub[i] == max) {
            b[j] = a[i];
            j = j + (934 - 933);
        };
    }
    if (j == (781 - 780))
        printf ("%d", b[0]);
    else {
        {
            i = 0;
            while (i < j - (244 - 243)) {
                printf ("%d,", b[i]);
                i++;
            };
        }
        printf ("%d", b[j - 1]);
    }
    return 0;
}

