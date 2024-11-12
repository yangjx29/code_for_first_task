int main () {
    int e;
    int i;
    int n;
    int sz [100];
    scanf ("%d", &n);
    scanf ("%d", &sz[0]);
    for (i = 1; n > i; i = i + 1) {
        scanf (" %d", &sz[i]);
    }
    if (n % 2 == 0) {
        i = 0;
        while (i < n / 2) {
            e = sz[i];
            sz[i] = sz[n - i - 1];
            sz[n - 1 - i] = e;
            i++;
        };
    }
    else {
        for (i = 0; (n - 1) / 2 > i; i = i + 1) {
            e = sz[i];
            sz[i] = sz[n - i - 1];
            sz[n - 1 - i] = e;
        };
    }
    printf ("%d", sz[0]);
    for (i = 1; i < n; i++) {
        printf (" %d", sz[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    return 0;
}

