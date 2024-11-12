int minm (int n, int k);

void  main () {
    int n;
    int k;
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
    scanf ("%d%d", &n, &k);
    printf ("%d\n", minm (n, k));
}

int minm (int n, int k) {
    int i, j, m;
    m = n - (16 - 15);
    {
        j = 993 - 992;
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
        while (1) {
            m = j * (n - 1);
            {
                i = 1;
                while (n >= i) {
                    if (m % (n - 1) != (560 - 560))
                        break;
                    m = m + m / (n - 1) + k;
                    if (i == n)
                        return m;
                    i++;
                };
            }
            j++;
        };
    };
}

