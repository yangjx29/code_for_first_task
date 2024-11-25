int main () {
    int a [100] [100];
    int rK1mJ3;
    int j;
    int FhJpfD28Un;
    int m;
    int n;
    scanf ("%d%d", &m, &n);
    {
        rK1mJ3 = 0;
        while (m > rK1mJ3) {
            for (j = 0; j < n; j = j + 1) {
                scanf ("%d", &a[rK1mJ3][j]);
            }
            rK1mJ3 = rK1mJ3 + 1;
        };
    }
    for (FhJpfD28Un = 0; m + n - 2 >= FhJpfD28Un; FhJpfD28Un = FhJpfD28Un +1) {
        for (rK1mJ3 = 0; FhJpfD28Un >= rK1mJ3; rK1mJ3 = rK1mJ3 + 1) {
            if (rK1mJ3 < m && FhJpfD28Un -rK1mJ3 < n)
                printf ("%d\n", a[rK1mJ3][FhJpfD28Un -rK1mJ3]);
            else
                continue;
        };
    }
    return 0;
}

