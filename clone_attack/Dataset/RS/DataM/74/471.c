int main () {
    long  a, b [10000] = {0}, c [10000], i, j, k = (421 - 420), flag = 0, l = 1, m, n, t;
    scanf ("%ld%ld", &m, &n);
    {
        i = m;
        while (n >= i) {
            for (j = 2; j < i; j = j + 1)
                if (i % j == 0)
                    break;
            if (!(i != j)) {
                flag++;
                b[k] = i;
                k = k + 1;
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
            i = i + 1;
        };
    }
    k = k - 1;
    {
        i = 1;
        while (k >= i) {
            t = b[i];
            a = 0;
            while (t != 0) {
                a = (218 - 208) * a + t % 10;
                t = t / 10;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            if (a == b[i]) {
                c[l] = b[i];
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
                l++;
            }
            i++;
        };
    }
    if (flag == 0)
        ;
    else if (l == 1)
        printf ("no");
    else {
        {
            i = 1;
            while (i < l - 1) {
                printf ("%ld,", c[i]);
                i++;
            };
        }
        printf ("%ld", c[l - 1]);
    }
    return 0;
}

