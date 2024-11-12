int main () {
    int n;
    int i;
    int l;
    int m;
    int b1HbidOsa6 [100];
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
    scanf ("%d", &n);
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
            scanf ("%d", &b1HbidOsa6[i]);
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
    l = b1HbidOsa6[1] < b1HbidOsa6[0] ? b1HbidOsa6[0] : b1HbidOsa6[1];
    m = b1HbidOsa6[1] < b1HbidOsa6[0] ? b1HbidOsa6[1] : b1HbidOsa6[0];
    for (i = 2; i < n; i++) {
        if (l < b1HbidOsa6[i] && b1HbidOsa6[i] > m) {
            m = l;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            l = b1HbidOsa6[i];
        }
        else {
            if (b1HbidOsa6[i] > m && b1HbidOsa6[i] < l) {
                m = b1HbidOsa6[i];
            };
        };
    }
    printf ("%d\n%d\n", l, m);
    return 0;
}

