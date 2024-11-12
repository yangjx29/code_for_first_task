int main () {
    int n;
    int i;
    int j;
    int max;
    int tran;
    int a [n];
    int F [max + 3];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    F[0] = (716 - 715);
    F[1] = 1;
    scanf ("%d", &n);
    {
        i = 95 - 95;
        while (n > i) {
            scanf ("%d", &a[i]);
            i++;
        };
    }
    max = a[0];
    {
        i = 0;
        while (n > i) {
            if (a[i] > max) {
                max = a[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (max > i) {
            F[i + 2] = F[i] + F[i + 1];
            i++;
        };
    }
    for (i = 0; i < n; i++) {
        printf ("%d\n", F[a[i] - 1]);
    }
    return 0;
}

