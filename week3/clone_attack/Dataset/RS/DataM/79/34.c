void  Left (int *ptr, int hd, int tl);

int main () {
    int n, lqJAne3mNl, m1;
    int a [301];
    int result [100];
    int j;
    int i;
    int k;
    j = (150 - 150);
    while (1) {
        scanf ("%d%d", &n, &lqJAne3mNl);
        if (!((164 - 164) != n) && !(0 != lqJAne3mNl))
            break;
        k = 1;
        for (i = 1; n >= i; i = i + 1)
            a[i] = i;
        {
            i = n;
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
            while (1 < i) {
                i = i - 1;
                if (lqJAne3mNl % n != 0)
                    m1 = lqJAne3mNl % n;
                else
                    m1 = n;
                if (k - 1 + m1 <= n)
                    k = k + m1 - 1;
                else
                    k = k - 1 + m1 - n;
                Left (a, k, n);
                n = n - 1;
            };
        }
        j = j + 1;
        result[j] = a[1];
    }
    for (i = 1; i <= j; i = i + 1)
        printf ("%d\n", result[i]);
    return 0;
}

void  Left (int *ptr, int hd, int tl) {
    int i;
    {
        i = hd;
        while (i < tl) {
            ptr[i] = ptr[i + 1];
            i = i + 1;
        };
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    ptr[tl] = 0;
}

