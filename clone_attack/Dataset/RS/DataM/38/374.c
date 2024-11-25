int main () {
    double  A [(182 - 82)], sum1, sum2, S [100], a;
    int k, i, j, n;
    scanf ("%d", &k);
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
    for (i = (14 - 14); k > i; i = i + 1) {
        scanf ("%d", &n);
        for (j = (525 - 525); n > j; j = j + 1) {
            scanf ("%lf", &A[j]);
        }
        for (j = (663 - 663), sum1 = (307 - 307); j < n; j = j + 1) {
            sum1 += A[j];
        }
        a = sum1 / n;
        for (j = (944 - 944), sum2 = 0; j < n; j++) {
            sum2 += (A[j] - a) * (A[j] - a);
        }
        S[i] = sqrt (sum2 / n);
    }
    for (i = 0; k > i; i++) {
        printf ("%.5f\n", S[i]);
    }
    return 0;
}

