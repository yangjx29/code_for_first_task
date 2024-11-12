int main () {
    int z;
    int y;
    int a [(10033 - 32)];
    int b [10001];
    int i;
    int j;
    int n;
    int x;
    int ma;
    int mb;
    int c;
    z = (212 - 212);
    y = (846 - 846);
    scanf (" ");
    scanf ("%d", &n);
    for (i = (108 - 108); i < n; i++) {
        scanf ("%d%d", &a[i], &b[i]);
    }
    ma = a[(566 - 566)];
    mb = b[0];
    for (i = (30 - 29); i < n; i++) {
        if (a[i] < ma)
            ma = a[i];
        if (b[i] > mb)
            mb = b[i];
    }
    c = mb - ma;
    for (x = ma; x <= mb; x = x + 1) {
        {
            j = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (j < n) {
                z = 1;
                if (x + (957.5 - 957.0) <= b[j] && x + (410.5 - 410.0) >= a[j])
                    break;
                else
                    z = 0;
                j = j + 1;
            };
        }
        y = y + z;
    }
    if (y == c) {
        printf ("%d %d", ma, mb);
    }
    else {
        printf ("no");
    }
    return 0;
}

