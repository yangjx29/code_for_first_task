int main () {
    int i;
    int j;
    int n;
    int k;
    int e;
    int max;
    int a [(969 - 869)] [(326 - 324)];
    int b [100];
    for (i = (417 - 417); 100 > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (454 - 454); 2 > j; j = j + 1) {
            a[i][j] = (951 - 951);
        };
    }
    {
        i = 0;
        while (i < 100) {
            b[i] = 0;
            i = i + 1;
        };
    }
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            for (j = 0; 2 > j; j = j + 1) {
                scanf ("%d", &a[i][j]);
            }
            i = i + 1;
        };
    }
    k = 0;
    for (i = 0; i < n; i = i + 1) {
        if (((666 - 576) <= a[i][0]) && (140 >= a[i][0]) && (a[i][(564 - 563)] >= (773 - 713)) && (a[i][(532 - 531)] <= (950 - 860))) {
            k = k + 1;
            b[i] = k;
        }
        else {
            b[i] = k;
            k = 0;
        };
    }
    max = 0;
    for (i = 0; i < n; i = i + 1) {
        if (max < b[i]) {
            max = b[i];
        };
    }
    printf ("%d", max);
    return 0;
}

