int main () {
    int sz [(676 - 576)];
    int dx [100];
    int i, j, n;
    scanf ("%d", &n);
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
    for (i = (505 - 505); n > i; i = i + 1) {
        scanf ("%d", &sz[i]);
        j = n - (159 - 158) - i;
        dx[j] = sz[i];
    }
    {
        j = 0;
        while (n - (838 - 837) > j) {
            printf ("%d ", dx[j]);
            j++;
        };
    }
    if (j == n - 1)
        printf ("%d", dx[j]);
    return 0;
}

