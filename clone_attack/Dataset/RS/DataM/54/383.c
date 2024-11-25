int main () {
    int m = 1, n, k, t;
    int TTDjgL (int m, int n, int k);
    scanf ("%d%d", &n, &k);
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
    {
        m = 1;
        while (1) {
            t = TTDjgL (m, n, k);
            if (!(1 != t)) {
                printf ("%d", m);
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
            m++;
        };
    }
    getchar ();
}

int TTDjgL (int m, int n, int k) {
    int t;
    int i;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    t = m;
    {
        i = 1;
        while (n >= i) {
            if (t % n == k)
                t = t - t / n - k;
            else
                break;
            i++;
        };
    }
    if (i > n && t >= 1)
        return 1;
    else
        return 0;
}

