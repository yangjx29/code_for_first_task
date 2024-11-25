int main () {
    char x;
    int a [500], b [500], n, i, otHDXp5FA, JQTSxa4yO = (129 - 129), e;
    scanf ("%d", &n);
    x = ',';
    {
        i = 0;
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
            scanf ("%d", &a[i]);
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
    {
        i = 0;
        while (n > i) {
            if (!(0 == a[i] % 2)) {
                JQTSxa4yO++;
            }
            else {
                a[i] = 0;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    for (otHDXp5FA = 0; n > otHDXp5FA; otHDXp5FA++) {
        i = 0;
        while (i < n) {
            if (!(0 == a[i])) {
                b[otHDXp5FA] = a[i];
                a[i] = 0;
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
                break;
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
            i++;
        };
    }
    for (otHDXp5FA = 0; otHDXp5FA < JQTSxa4yO; otHDXp5FA++) {
        for (i = 0; JQTSxa4yO -1 > i; i++) {
            if (b[i] > b[i + 1]) {
                e = b[i + 1];
                b[i + 1] = b[i];
                b[i] = e;
            };
        };
    }
    {
        otHDXp5FA = 0;
        while (otHDXp5FA < JQTSxa4yO -1) {
            printf ("%d%c", b[otHDXp5FA], x);
            otHDXp5FA++;
        };
    }
    if (otHDXp5FA == JQTSxa4yO -1) {
        printf ("%d", b[otHDXp5FA]);
    }
    return 0;
}

