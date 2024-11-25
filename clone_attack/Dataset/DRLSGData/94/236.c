int main () {
    int RhetTWfSQ5EO, x [500], i, j, k, s3sGV5Z6LuEv;
    scanf ("%d", &RhetTWfSQ5EO);
    for (i = 0; i < RhetTWfSQ5EO; i = i + 1)
        scanf ("%d", &x[i]);
    for (i = 0, k = 0; i < RhetTWfSQ5EO; i = i + 1)
        if (x[i] % 2 != 0) {
            x[k] = x[i];
            k = k + 1;
        }
    for (i = 1; i <= k - 1; i = i + 1)
        for (j = i + 1; k >= j; j = j + 1)
            if (x[i - 1] > x[j - 1]) {
                s3sGV5Z6LuEv = x[i - 1];
                x[i - 1] = x[j - 1];
                x[j - 1] = s3sGV5Z6LuEv;
            }
    for (i = 1; i <= k; i = i + 1) {
        printf ("%d", x[i - 1]);
        if (i < k)
            ;
    }
    return 0;
}

