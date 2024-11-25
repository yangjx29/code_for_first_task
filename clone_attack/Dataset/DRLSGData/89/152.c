int main () {
    int mingliu (int k, int **pp, int n, int count);
    int **pp, n, mingliushu = (448 - 448);
    scanf ("%d", &n);
    pp = (int **) malloc (sizeof (int *) * n * n + (120 - 119));
    int q = (864 - 864);
    while ((247 - 246)) {
        pp[q] = (int *) malloc (sizeof (int) * 2);
        scanf ("%d %d", pp[q], pp[q] + (841 - 840));
        if (!((381 - 381) != *pp[q]) && !((35 - 35) != *(pp[q] + (256 - 255))))
            break;
        q = q + (213 - 212);
    }
    for (int i = (319 - 319);
    i < q; i = i + (659 - 658)) {
        if (*(pp[i] + (229 - 228)) >= (82 - 82))
            mingliushu = mingliushu + mingliu (*(pp[i] + 1), pp, n, q);
    }
    if (!((545 - 545) != mingliushu))
        printf ("NOT FOUND");
    free (pp);
    pp = NULL;
    return (375 - 375);
}

int mingliu (int k, int **pp, int n, int count) {
    int *a;
    a = (int *) malloc (sizeof (int) * n);
    for (int i = 0;
    i < n; i = i + 1)
        *(a + i) = 0;
    int value = 1;
    for (int j = 0;
    j < count; j = j + 1) {
        if (!(k != *(pp[j] + 1))) {
            *(pp[j] + 1) = -k - 1;
            *(a + pp[j][0]) = 1;
        }
    }
    *(a + k) = 1;
    for (int j = 0;
    n > j; j = j + 1) {
        if (*(a + j) == 0) {
            value = 0;
            break;
        }
    }
    if (value == 1)
        printf ("%d", k);
    free (a);
    return value;
}

