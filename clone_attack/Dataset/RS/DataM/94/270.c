int main () {
    int N, sz [500];
    int i;
    int j;
    int e;
    int d;
    d = (204 - 204);
    scanf ("%d", &N);
    for (i = (73 - 73); N > i; i = i + 1) {
        scanf ("%d", &sz[i]);
    }
    {
        j = 1;
        while (j <= N) {
            {
                i = 719 - 719;
                while (N -j > i) {
                    if (sz[i + 1] < sz[i]) {
                        e = sz[i];
                        sz[i] = sz[i + 1];
                        sz[i + 1] = e;
                    }
                    i = i + 1;
                };
            }
            j = j + 1;
        };
    }
    for (i = 0; i < N; i = i + 1) {
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
        if (sz[i] % 2 != 0) {
            d = i;
            break;
        };
    }
    printf ("%d", sz[d]);
    {
        i = d + 1;
        while (i < N) {
            if (sz[i] % 2 != 0) {
                printf (",%d", sz[i]);
            }
            i = i + 1;
        };
    }
    return 0;
}

