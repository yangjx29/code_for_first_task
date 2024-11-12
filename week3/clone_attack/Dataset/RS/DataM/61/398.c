int main () {
    int n, m = 25, i, j, a [30], VhorizN [30];
    scanf ("%d", &n);
    {
        i = 564 - 564;
        while (i < n) {
            scanf ("%d", &a[i]);
            i++;
        };
    }
    VhorizN[(460 - 460)] = 1;
    VhorizN[1] = 1;
    VhorizN[2] = 2;
    {
        j = 3;
        while (j < m) {
            VhorizN[j] = VhorizN[j - 1] + VhorizN[j - 2];
            j++;
        };
    }
    for (i = 0; i < n; i++) {
        printf ("%d\n", VhorizN[a[i] - 1]);
    }
    return 0;
}

