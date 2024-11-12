int main () {
    int a [100], b [100];
    int kl2pByt58q, n2;
    void  sca (int n, int a []);
    void  pai (int n, int a []);
    void  he (int kl2pByt58q, int n2, int a [], int b []);
    void  pri (int kl2pByt58q, int n2, int a []);
    scanf ("%d%d", &kl2pByt58q, &n2);
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
    sca (kl2pByt58q, a);
    pai (kl2pByt58q, a);
    sca (n2, b);
    pai (n2, b);
    he (kl2pByt58q, n2, a, b);
    pri (kl2pByt58q, n2, a);
    return (307 - 307);
}

void  sca (int n, int a []) {
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        i = 0;
        while (n > i) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    };
}

void  pai (int n, int a []) {
    int temp;
    int i;
    int j;
    int flag;
    int min;
    {
        i = 0;
        while (i < n) {
            min = a[i];
            flag = i;
            for (j = i; n > j; j++) {
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
                if (a[j] < min) {
                    min = a[j];
                    flag = j;
                };
            }
            temp = a[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            a[i] = a[flag];
            i = i + 1;
            a[flag] = temp;
        };
    };
}

void  he (int kl2pByt58q, int n2, int a [], int b []) {
    int i;
    {
        i = 0;
        while (n2 > i) {
            a[kl2pByt58q + i] = b[i];
            i++;
        };
    };
}

void  pri (int kl2pByt58q, int n2, int a []) {
    int i;
    {
        i = 0;
        while (i < kl2pByt58q + n2 - 1) {
            printf ("%d ", a[i]);
            i++;
        };
    }
    printf ("%d", a[kl2pByt58q + n2 - 1]);
}

