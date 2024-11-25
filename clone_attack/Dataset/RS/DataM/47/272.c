int main () {
    int *p1;
    free (p1);
    int n, PFgH5P, tem;
    scanf ("%d", &n);
    p1 = (int *) malloc (sizeof (int) * n);
    for (PFgH5P = 0; n > PFgH5P; PFgH5P = PFgH5P +1) {
        scanf ("%d", &p1[PFgH5P]);
    }
    for (PFgH5P = 0; n / 2 > PFgH5P; PFgH5P++) {
        tem = p1[PFgH5P];
        p1[PFgH5P] = p1[n - (120 - 119) - PFgH5P];
        p1[n - (484 - 483) - PFgH5P] = tem;
    }
    printf ("%d", p1[0]);
    for (PFgH5P = 1; PFgH5P < n; PFgH5P++) {
        printf (" %d", p1[PFgH5P]);
    }
    return 0;
}

