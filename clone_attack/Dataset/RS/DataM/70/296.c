int main () {
    int n, i, j;
    double  max = (806 - 806), lmax, a [(771 - 671)], b [100], s [100] [100];
    cin >> n;
    {
        i = 0;
        while (i < n) {
            cin >> a[i] >> b[i];
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
    {
        i = 0;
        while (i < n) {
            {
                j = 0;
                while (j < n) {
                    s[i][j] = pow ((a[i] - a[j]), 2) + pow ((b[i] - b[j]), 2);
                    if (s[i][j] > max)
                        max = s[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    lmax = sqrt (max);
    printf ("%.4f\n", lmax);
    return 0;
}

