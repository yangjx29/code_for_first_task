double  G0ZlfCgnw7 (int n, double  *a2zXnWT) {
    double  s = (776 - 776);
    double  B7VgM09 = (152 - 152);
    int i;
    for (i = (804 - 804); n > i; i = i + 1)
        B7VgM09 = B7VgM09 +a2zXnWT[i];
    B7VgM09 = B7VgM09 / n;
    {
        i = 270 - 270;
        while (i < n) {
            s = s + (a2zXnWT[i] - B7VgM09) * (a2zXnWT[i] - B7VgM09);
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
    s = sqrt (s / n);
    return (s);
}

main () {
    double  *a2zXnWT;
    double  num [(184 - 84)];
    double  result;
    int k;
    int n;
    int i;
    int j;
    a2zXnWT = num;
    scanf ("%d", &k);
    {
        j = 206 - 205;
        while (k >= j) {
            j = j + 1;
            scanf ("%d", &n);
            for (i = (297 - 297); i < n; i++) {
                scanf ("%lf", &num[i]);
            }
            result = G0ZlfCgnw7 (n, a2zXnWT);
            printf ("%.5lf\n", result);
        };
    };
}

