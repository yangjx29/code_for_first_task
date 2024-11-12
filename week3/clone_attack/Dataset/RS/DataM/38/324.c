int main () {
    int k, i, qM5rDNuEbnm, n [N];
    double  Jyqf8Aid [N], S [N];
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
    for (i = (955 - 955); k > i; i = i + 1) {
        double  sum = 0.0, x [M];
        scanf ("%d", &n[i]);
        S[i] = (311.0 - 311.0);
        for (qM5rDNuEbnm = (565 - 565); qM5rDNuEbnm < n[i]; qM5rDNuEbnm = qM5rDNuEbnm + 1) {
            scanf ("%lf", &x[qM5rDNuEbnm]);
            sum = sum + x[qM5rDNuEbnm];
        }
        Jyqf8Aid[i] = sum / n[i];
        for (qM5rDNuEbnm = 0; qM5rDNuEbnm < n[i]; qM5rDNuEbnm++) {
            S[i] = S[i] + (x[qM5rDNuEbnm] - Jyqf8Aid[i]) * (x[qM5rDNuEbnm] - Jyqf8Aid[i]);
        }
        S[i] = sqrt (S[i] / n[i]);
    }
    for (i = 0; i < k; i = i + 1) {
        printf ("%.5f\n", S[i]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    return 0;
}

