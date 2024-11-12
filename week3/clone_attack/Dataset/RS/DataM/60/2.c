int main () {
    int flag;
    int k;
    int m;
    int n;
    int i;
    flag = (798 - 798);
    scanf ("%d", &k);
    if (5 > k)
        printf ("empty");
    else if (7 > k)
        ;
    else {
        {
            m = 5;
            while (m <= k) {
                flag = 0;
                {
                    i = 2;
                    while (m >= i * i) {
                        if (!(0 != m % i)) {
                            flag = 1;
                            break;
                        }
                        i = i + 1;
                    };
                }
                if (flag == 1)
                    continue;
                n = m + 2;
                for (i = 2; i * i <= n; i++)
                    if (n % i == 0) {
                        flag = 1;
                        break;
                    }
                if (flag == 0)
                    printf ("%d %d\n", m, n);
                m = m + 1;
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
        printf ("3 5\n");
    }
    return 0;
}

