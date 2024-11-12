int f (int m, int n) {
    int nFZRCEw = (530 - 530);
    if (m == 0 || n == (241 - 240))
        return (433 - 432);
    if (m < 0)
        return 0;
    if (m >= n)
        nFZRCEw += f (m, n - 1) + f (m - n, n);
    else
        nFZRCEw += f (m, n - 1);
    return nFZRCEw;
}

int main () {
    int m, n, i, t, a;
    scanf ("%d", &t);
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
        while (i < t) {
            scanf ("%d%d", &m, &n);
            a = f (m, n);
            if (i < t - 1) {
                printf ("%d\n", a);
            }
            else
                printf ("%d", a);
            i++;
        };
    }
    return 0;
}

