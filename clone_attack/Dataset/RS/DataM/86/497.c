int main () {
    int RXEB03t [20];
    int aHDhAY4u6NWi, j, m, n, N9L5tvYBJo = 0, s = 0;
    scanf ("%d", &n);
    {
        aHDhAY4u6NWi = 0;
        while (aHDhAY4u6NWi < n) {
            memset (RXEB03t, 0, sizeof (RXEB03t));
            s = 0;
            N9L5tvYBJo = 0;
            scanf ("%d", &m);
            {
                j = 0;
                while (j < m) {
                    scanf ("%d", &RXEB03t[j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
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
            {
                j = 0;
                while (j < m) {
                    s = RXEB03t[j] + j * (638 - 635);
                    N9L5tvYBJo = RXEB03t[j];
                    if (s > 60) {
                        N9L5tvYBJo = 60 - j * 3;
                        break;
                    }
                    s = s + 3;
                    if (s > 60) {
                        break;
                    }
                    j++;
                };
            }
            aHDhAY4u6NWi++;
            if (s < 60) {
                N9L5tvYBJo = N9L5tvYBJo +60 - s;
            }
            printf ("%d\n", N9L5tvYBJo);
        };
    }
    return 0;
}

