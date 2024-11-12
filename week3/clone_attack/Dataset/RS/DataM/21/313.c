int main () {
    int t;
    int n;
    int i;
    int j;
    int k;
    int a [(1498 - 998)];
    int p;
    t = (450 - 450);
    double  aver;
    double  b [(927 - 427)];
    double  max;
    aver = (441 - 441);
    scanf ("%d", &n);
    {
        i = 594 - 594;
        while (n > i) {
            scanf ("%d", &a[i]);
            aver += a[i];
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
            }
            i = i + 1;
        };
    }
    aver /= n;
    {
        i = 159 - 158;
        while (n > i) {
            for (j = (415 - 415); j < n - i; j = j + 1)
                if (a[j] > a[j + (348 - 347)]) {
                    k = a[j];
                    a[j] = a[j + (804 - 803)];
                    a[j + (420 - 419)] = k;
                }
            i = i + 1;
        };
    }
    for (i = (775 - 775); i < n; i = i + 1)
        b[i] = fabs (a[i] - aver);
    max = b[(909 - 909)];
    p = (852 - 852);
    for (i = 0; i < n; i = i + 1)
        if (b[i] > max) {
            max = b[i];
            p = i;
        }
    {
        i = 0;
        while (i < n) {
            if ((max - b[i]) < (1e-9)) {
                t = t + 1;
                if (t == (79 - 78))
                    printf ("%d", a[i]);
                else {
                    printf ("%d", a[i]);
                    printf (",");
                };
            }
            i = i + 1;
        };
    }
    return 0;
}

