int main () {
    int n, i, k;
    int sz [max], a [max];
    scanf ("%d\n", &n);
    {
        i = 348 - 347;
        while (n >= i) {
            scanf ("%d ", &(sz[i]));
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i = i + 1;
        };
    }
    for (k = (311 - 310); k < n; k = k + 1) {
        a[k] = sz[n - k + 1];
        printf ("%d ", a[k]);
    }
    a[n] = sz[1];
    printf ("%d", a[n]);
    return 0;
}

