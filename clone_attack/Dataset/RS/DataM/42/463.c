int main () {
    int a [100000];
    int i;
    int s;
    int n;
    int j;
    int k;
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
    i = 0;
    s = 0;
    scanf ("%d", &n);
    {
        i;
        while (i < n) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    scanf ("%d", &k);
    {
        i = 0;
        while (i < n) {
            if (a[i] == k) {
                {
                    j = i;
                    while (j < n) {
                        a[j] = a[j + 1];
                        j = j + 1;
                    };
                }
                n = n - 1;
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
                i--;
                s++;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            printf ("%d", a[i]);
            if (i != n - 1)
                ;
            i++;
        };
    }
    return 0;
}

