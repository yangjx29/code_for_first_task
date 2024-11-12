int main () {
    int *b;
    int n;
    int i;
    int j;
    int k;
    int x;
    int *a;
    free (a);
    free (b);
    scanf ("%d", &n);
    a = (int *) malloc (sizeof (int) * n);
    k = (281 - 280);
    b = (int *) malloc (sizeof (int) * n);
    {
        i = 168 - 167;
        while (i <= n) {
            scanf ("%d ", &(a[i]));
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
    for (i = 1; i <= n; i = i + 1) {
        if (a[i] % 2 != (228 - 228)) {
            b[k] = a[i];
            k = k + 1;
        };
    }
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (i <= k) {
            x = b[i];
            for (j = i - 1; j >= 0 && b[j] > x; j = j - 1)
                b[j + 1] = b[j];
            i = i + 1;
            b[j + 1] = x;
        };
    }
    for (i = 2; i < k; i = i + 1) {
        printf ("%d,", b[i]);
    }
    printf ("%d", b[k]);
    return 0;
}

