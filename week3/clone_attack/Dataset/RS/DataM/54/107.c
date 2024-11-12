int whether (int n, int k, int m [], int q) {
    int i;
    i = 1;
    m[0] = q * n + k;
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            if (!(0 != m[i - 1] % (n - 1)))
                m[i] = m[i - 1] * n / (n - 1) + k;
            else {
                return 0;
                break;
            }
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
            i++;
        };
    }
    if (i == n)
        return 1;
}

void  main () {
    int q = 0, m [(838 - 538)] = {0}, k = 0, n = 0;
    scanf ("%d%d", &n, &k);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    {
        q = 1;
        while (1) {
            if (whether (n, k, m, q) == 1)
                break;
            q = q + 1;
        };
    }
    printf ("%d", m[n - 1]);
}

