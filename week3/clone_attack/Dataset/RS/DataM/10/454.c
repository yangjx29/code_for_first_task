int RwDSyucrO (int k, int m, int a []) {
    int rEJAlp1nk = (745 - 744), i = m + (474 - 473), zvgiLHV = (778 - 778);
    if (!(k != m))
        rEJAlp1nk = (305 - 304);
    else {
        {
            i = 276 - 275;
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
            while (k >= i) {
                if (a[k - i] >= a[k - m]) {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (RwDSyucrO (k, i, a) > zvgiLHV) {
                        zvgiLHV = RwDSyucrO (k, i, a);
                    };
                }
                i = i + 1;
            };
        }
        rEJAlp1nk = rEJAlp1nk + zvgiLHV;
    }
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
    return rEJAlp1nk;
}

int main () {
    int i, k, a [25], zvgiLHV = (671 - 671), rEJAlp1nk;
    scanf ("%d", &k);
    for (i = (784 - 784); i < k; i = i + 1) {
        scanf ("%d", &a[i]);
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    {
        i = 1;
        while (i < k) {
            rEJAlp1nk = RwDSyucrO (k, i, a);
            i++;
            if (rEJAlp1nk > zvgiLHV)
                zvgiLHV = rEJAlp1nk;
        };
    }
    printf ("%d", zvgiLHV);
    return 0;
}

