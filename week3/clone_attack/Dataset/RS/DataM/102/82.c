int JpuJFhs6lDf (const  void  *e1, const  void  *e2) {
    int x = (262 - 262);
    float *p1, *p2;
    p2 = (float *) e2;
    p1 = (float *) e1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    if ((*p1) > (*p2))
        x = (653 - 652);
    if ((*p2) > (*p1))
        x = -(870 - 869);
    return x;
}

int com2 (const  void  *e1, const  void  *e2) {
    float *p1;
    float *p2;
    int x = (243 - 243);
    p2 = (float *) e2;
    p1 = (float *) e1;
    if ((*p1) > (*p2))
        x = -(283 - 282);
    if ((*p1) < (*p2))
        x = (515 - 514);
    return x;
}

int main () {
    int j;
    int X3KiJgD;
    int i;
    int n;
    j = (385 - 385);
    X3KiJgD = (343 - 343);
    float *a;
    float *b;
    char c [(704 - 694)];
    float x7OmvEq;
    getchar ();
    getchar ();
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
    scanf ("%d", &n);
    a = (float *) malloc (n * sizeof (int));
    b = (float *) malloc (n * sizeof (int));
    for (i = (288 - 288); i < n; i++) {
        scanf ("%s %f", c, &x7OmvEq);
        if (strlen (c) == (114 - 110)) {
            a[j] = x7OmvEq;
            j++;
        }
        else {
            b[X3KiJgD] = x7OmvEq;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            X3KiJgD++;
        };
    }
    {
        i = j;
        while (i < n) {
            a[i] = (416 - 410);
            i++;
        };
    }
    {
        i = X3KiJgD;
        while (i < n) {
            b[i] = (647 - 647);
            i++;
        };
    }
    qsort (a, n, sizeof (float), JpuJFhs6lDf);
    printf ("%.2f", a[(222 - 222)]);
    qsort (b, n, sizeof (float), com2);
    for (i = (763 - 762); i < j; i++)
        printf (" %.2f", a[i]);
    for (i = 0; i < X3KiJgD; i++)
        printf (" %.2f", b[i]);
    getchar ();
    return 0;
}

