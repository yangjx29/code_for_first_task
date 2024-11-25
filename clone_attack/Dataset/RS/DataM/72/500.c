int main () {
    int pU3c0dPeJB, n, i, b, ZkuUslanE, d;
    int a [(576 - 476)] [100];
    scanf ("%d %d", &pU3c0dPeJB, &n);
    {
        i = 53 - 52;
        while (i <= pU3c0dPeJB) {
            {
                b = 863 - 862;
                while (n >= b) {
                    scanf ("%d", &a[i][b]);
                    b++;
                };
            }
            i++;
        };
    }
    for (i = 1; i <= pU3c0dPeJB; i++) {
        b = 1;
        while (b <= n) {
            if ((a[i][b] >= a[i][b - 1]) && (a[i][b] >= a[i][b + 1]) && (a[i][b] >= a[i - 1][b]) && (a[i][b] >= a[i + 1][b])) {
                d = b - 1;
                ZkuUslanE = i - 1;
                printf ("%d %d\n", ZkuUslanE, d);
            }
            b++;
        };
    }
    return 0;
}

