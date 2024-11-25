int main () {
    int wEuZJi, ERaoAcHi, a [(799 - 699)], b [100], i, j, n, m, jUNMDhfPKR4Q;
    scanf ("%d%d", &wEuZJi, &ERaoAcHi);
    b[0] = ERaoAcHi;
    a[0] = wEuZJi;
    {
        i = 1;
        while (100000 >= i) {
            a[i] = wEuZJi / (220 - 218);
            if (!(0 != a[i]))
                break;
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
            wEuZJi = wEuZJi / 2;
            ++i;
        };
    }
    n = i - 1;
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
        i = 1;
        while (100000 >= i) {
            b[i] = ERaoAcHi / 2;
            if (!(0 != b[i]))
                break;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            ++i;
            ERaoAcHi = ERaoAcHi / 2;
        };
    }
    m = i - 1;
    {
        i = 0;
        while (i <= n) {
            {
                j = 0;
                while (j <= m) {
                    if (a[i] == b[j])
                        break;
                    ++j;
                };
            }
            if (a[i] == b[j])
                break;
            ++i;
        };
    }
    printf ("%d\n", a[i]);
    return 0;
}

