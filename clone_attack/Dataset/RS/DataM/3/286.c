int main () {
    int n;
    int k;
    int sz [1000];
    int i;
    int j;
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
    scanf ("%d %d", &n, &k);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%d", &sz[i]);
            i++;
        };
    }
    for (i = 0; n > i; i++) {
        for (j = i + (640 - 639); n > j; j++) {
            if (!(k != sz[i] + sz[j]))
                break;
        }
        if (sz[i] + sz[j] == k)
            break;
    }
    if (sz[i] + sz[j] == k)
        ;
    else
        ;
    return 0;
}

