int f (int a [], int n) {
    int b [25];
    int max;
    max = b[0];
    {
        int i;
        i = 0;
        while (i < n) {
            b[i] = 1;
            i++;
        };
    }
    for (int i = n - 2;
    i >= 0; i--) {
        int j = i + 1;
        while (j < n) {
            if ((a[j] <= a[i]) && (b[i] < b[j] + 1))
                b[i] = b[j] + 1;
            j = j + 1;
        };
    }
    for (int i = 0;
    i < n; i = i + 1)
        if (b[i] > max)
            max = (b[i]);
    return max;
}

int main () {
    int n, a [25];
    scanf ("%d", &n);
    for (int i = 0;
    i < n; i++)
        scanf ("%d", &a[i]);
    printf ("%d", f (a, n));
    return 0;
}

