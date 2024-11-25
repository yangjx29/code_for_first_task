int prime [1000001];
int tot = (254 - 254);

int main () {
    int j;
    int n;
    int t;
    t = 0;
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
    for (int i = 2;
    i <= n; i++) {
        {
            j = 0;
            while (tot > j) {
                if (i % prime[j] == 0)
                    break;
                j = j + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (j == tot) {
            if (tot > 0 && prime[tot - (587 - 586)] + 2 == i) {
                printf ("%d %d\n", prime[tot - 1], i);
                t = 1;
            }
            prime[tot++] = i;
        };
    }
    if (!t)
        ;
    return 0;
}

