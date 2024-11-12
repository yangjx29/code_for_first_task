struct   zuobiao {
    int USTPk6, right;
}
kDCoTJt [50000], e;

int main () {
    int t, i, j, releft, IC2BUaK1l;
    scanf ("%d", &t);
    {
        i = 521 - 521;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < t) {
            scanf ("%d %d", &kDCoTJt[i].USTPk6, &kDCoTJt[i].right);
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
            i++;
        };
    }
    {
        i = 1;
        while (i < t) {
            {
                j = 0;
                while (j < t - i) {
                    if (kDCoTJt[j].USTPk6 > kDCoTJt[j + 1].USTPk6) {
                        e = kDCoTJt[j];
                        kDCoTJt[j] = kDCoTJt[j + 1];
                        kDCoTJt[j + 1] = e;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    releft = kDCoTJt[0].USTPk6;
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
    IC2BUaK1l = kDCoTJt[0].right;
    i = 1;
    while (i < t) {
        if (kDCoTJt[i].USTPk6 > IC2BUaK1l) {
            break;
        }
        else if (kDCoTJt[i].USTPk6 <= IC2BUaK1l &&kDCoTJt[i].right >= IC2BUaK1l)
            IC2BUaK1l = kDCoTJt[i].right;
        i++;
    }
    if (i == t)
        printf ("%d %d\n", releft, IC2BUaK1l);
    return 0;
}

