int main () {
    int n, i, j, o, p, q, B [300], C [10], A [300], k;
    scanf ("%d\n", &n);
    for (i = 0; i < n; i++) {
        scanf (" %d", &A[i]);
    }
    B[0] = A[0];
    for (i = 1; n > i; i++) {
        for (j = 0, k = 1; j < i; j++) {
            if (!(A[i] != B[j]))
                k = 0;
        }
        if (k != 0)
            B[i] = A[i];
        else
            B[i] = '\0';
    }
    for (q = 0, p = 0; p < n; p++) {
        if (B[p] != '\0') {
            C[q] = B[p];
            q++;
        }
    }
    for (i = -1, o = 0; o < q; o++, i++) {
        if (0 <= i)
            ;
        printf ("%d", C[o]);
    }
    return 0;
}

