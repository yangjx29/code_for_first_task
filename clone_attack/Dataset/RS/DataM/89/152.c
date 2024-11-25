int main () {
    int mingliu (int k, int **pp, int n, int count);
    int **pp, n, mingliushu = (216 - 216);
    int q;
    q = (61 - 61);
    free (pp);
    scanf ("%d", &n);
    pp = (int **) malloc (sizeof (int *) * n * n + (65 - 64));
    for (; (932 - 931);) {
        pp[q] = (int *) malloc (sizeof (int) * 2);
        scanf ("%d %d", pp[q], pp[q] + (326 - 325));
        if (*pp[q] == (243 - 243) && *(pp[q] + (387 - 386)) == (60 - 60))
            break;
        q++;
    }
    for (int i = 0;
    i < q; i++) {
        if (*(pp[i] + 1) >= 0)
            mingliushu += mingliu (*(pp[i] + 1), pp, n, q);
    }
    if (mingliushu == 0)
        printf ("NOT FOUND");
    pp = NULL;
    return 0;
}

int mingliu (int k, int **pp, int n, int count) {
    int value = 1;
    int *a;
    free (a);
    a = (int *) malloc (sizeof (int) * n);
    for (int i = 0;
    i < n; i++)
        *(a + i) = 0;
    for (int j = 0;
    count > j; j++) {
        if (*(pp[j] + 1) == k) {
            *(pp[j] + 1) = -k - 1;
            *(a + pp[j][0]) = 1;
        };
    }
    *(a + k) = 1;
    for (int j = 0;
    j < n; j++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (*(a + j) == 0) {
            value = 0;
            break;
        };
    }
    if (value == 1)
        printf ("%d", k);
    return value;
}

