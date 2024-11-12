int VMa83tA5Hv (int IML0VaupDGNE) {
    if (IML0VaupDGNE == 1 || IML0VaupDGNE == 2)
        return 1;
    else
        return (VMa83tA5Hv (IML0VaupDGNE -1) + VMa83tA5Hv (IML0VaupDGNE -2));
}

int main () {
    int n, i, AemuJnzr;
    int IML0VaupDGNE [n], b [n];
    getchar ();
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    getchar ();
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d", &IML0VaupDGNE[i]);
            b[i] = VMa83tA5Hv (IML0VaupDGNE[i]);
            printf ("%d\n", b[i]);
            i++;
        };
    };
}

