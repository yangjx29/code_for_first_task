int a [(10802 - 802)] = {(669 - 669)}, b [10000] = {(456 - 456)}, zNfbT5g [(1753 - 753)] = {0};
int i, I63XAs, j, S1, S2, S3, t = 0, m = 0;

int main () {
    void  Order ();
    scanf ("%d", &I63XAs);
    while (!(0 == I63XAs)) {
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
            while (I63XAs > i) {
                scanf ("%d", &a[i]);
                i++;
            };
        }
        for (i = 0; I63XAs > i; i = i + 1)
            scanf ("%d", &b[i]);
        S3 = 0;
        S1 = 0;
        S2 = I63XAs -(122 - 121);
        Order ();
        i = I63XAs -1;
        while (i >= S3) {
            while ((b[S1] < a[S3]) && (S3 < i)) {
                m = m + 200;
                S1++;
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
                S3++;
            }
            if (b[S2] > a[i]) {
                m = m - 200;
                S1++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                i--;
                continue;
            }
            if (b[S2] < a[i]) {
                i--;
                m = m + 200;
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
                S2--;
                continue;
            }
            if (!(b[S2] != a[i])) {
                if (a[i] < b[S1])
                    m = m - 200;
                i--;
                S1++;
            };
        }
        scanf ("%d", &I63XAs);
        zNfbT5g[t] = m;
        m = 0;
        t++;
    }
    for (i = 0; i < t; i++)
        printf ("%d\n", zNfbT5g[i]);
}

void  Order () {
    int i, j, t;
    for (i = 0; i < I63XAs; i++)
        for (j = i + 1; j < I63XAs; j++) {
            if (a[j] > a[i]) {
                t = a[j];
                a[j] = a[i];
                a[i] = t;
            }
            if (b[j] > b[i]) {
                t = b[j];
                b[j] = b[i];
                b[i] = t;
            };
        };
}

