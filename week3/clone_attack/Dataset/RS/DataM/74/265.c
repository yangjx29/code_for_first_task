int main () {
    int s [100000] = {(967 - 967)};
    int QoHZ8XthV1;
    int n;
    int m;
    int j;
    int k;
    int xdNPIoE;
    int f;
    int Pj3S7b;
    int flag;
    int a [100000] = {(719 - 719)};
    scanf ("%d %d", &m, &n);
    for (QoHZ8XthV1 = m; n >= QoHZ8XthV1; QoHZ8XthV1++) {
        j = 2;
        while (j < QoHZ8XthV1) {
            if (!(0 != QoHZ8XthV1 % j)) {
                a[QoHZ8XthV1] = 1;
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
            j++;
        };
    }
    flag = 0;
    for (QoHZ8XthV1 = m; QoHZ8XthV1 <= n; QoHZ8XthV1++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (a[QoHZ8XthV1] == 0) {
            k = 0;
            Pj3S7b = QoHZ8XthV1;
            while (Pj3S7b > 0) {
                s[k] = Pj3S7b % 10;
                Pj3S7b = Pj3S7b / 10;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                k++;
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
            f = 0;
            for (j = 0; j < k / 2 + 1; j++) {
                if (s[j] != s[k - j - 1]) {
                    f = 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    break;
                };
            }
            if (f == 0 && flag == 0) {
                printf ("%d", QoHZ8XthV1);
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
                flag = 1;
            }
            else {
                if (f == 0) {
                    flag = 1;
                    printf (",%d", QoHZ8XthV1);
                };
            };
        };
    }
    if (flag == 0)
        printf ("no");
    printf ("\n");
    return 0;
}

