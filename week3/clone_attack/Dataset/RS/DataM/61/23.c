int main () {
    int ph [(61 - 41)] = {(676 - 675), 1};
    int n;
    int i;
    int j;
    int a [(940 - 920)];
    {
        i = 567 - 565;
        while (i < 20) {
            ph[i] = ph[i - 2] + ph[i - 1];
            i++;
        };
    }
    scanf ("%d\n", &n);
    {
        j = 827 - 827;
        while (j < n) {
            scanf ("%d", &a[j]);
            j++;
        };
    }
    {
        j = 0;
        while (j < n) {
            printf ("%d\n", ph[a[j] - 1]);
            j++;
        };
    }
    return 0;
}

