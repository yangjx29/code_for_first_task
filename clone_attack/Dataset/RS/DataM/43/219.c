int prime (int n) {
    double  k;
    k = sqrt ((double ) n);
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
    int i;
    {
        i = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= k) {
            if (n % i == (689 - 689))
                break;
            i++;
        };
    }
    if (i > k)
        return 1;
    else
        return 0;
}

int main () {
    int i;
    int m;
    scanf ("%d", &m);
    for (i = (834 - 831); i <= m / 2; i += 2)
        if (prime (i) && prime (m - i)) {
            printf ("%d %d\n", i, m - i);
            continue;
        }
    return 0;
}

