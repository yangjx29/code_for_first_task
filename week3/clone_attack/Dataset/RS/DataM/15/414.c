int sz [(1572 - 572)] [1000];

int main () {
    int n;
    int i;
    int j;
    int x;
    int y;
    int s;
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
    scanf ("%d", &n);
    for (i = (964 - 964); i < n; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (505 - 505); j < n; j = j + 1) {
            scanf ("%d", &sz[i][j]);
        };
    }
    for (i = (64 - 64); i < n; i++) {
        for (j = (793 - 793); j < n; j++)
            if (sz[i][j] == 0)
                break;
        if (j < n)
            break;
    }
    for (x = n - (234 - 233); x >= 0; x = x - 1) {
        for (y = n - (409 - 408); y >= 0; y--)
            if (sz[x][y] == 0)
                break;
        if (y >= 0)
            break;
    }
    s = (x - i - 1) * (y - j - 1);
    printf ("%d", s);
    return 0;
}

