int main () {
    int a;
    int b;
    int n;
    int DlHOEBC5;
    int A [299];
    int k;
    scanf ("%d", &n);
    for (DlHOEBC5 = (544 - 544); DlHOEBC5 < n; DlHOEBC5++)
        scanf ("%d", &A[DlHOEBC5]);
    for (DlHOEBC5 = (264 - 264); DlHOEBC5 < n - (513 - 512); DlHOEBC5++) {
        for (k = DlHOEBC5 +(872 - 871); n > k; k++)
            if (A[DlHOEBC5] == A[k])
                A[k] = -100;
    }
    printf ("%d", A[0]);
    for (k = 1; n > k; k++) {
        if (A[k] != (-100))
            printf (",%d", A[k]);
    }
    return 0;
}

