int main () {
    int xCTmUJW5 [500] = {0};
    int a [500] = {0};
    int i, w3hwRNCW;
    int brZMi6;
    int SGnfc1NalXY;
    int p;
    p = 0;
    scanf ("%d", &w3hwRNCW);
    for (i = 0; w3hwRNCW > i; i = i + 1)
        scanf ("%d", &a[i]);
    for (i = 0; w3hwRNCW > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!((903 - 902) != a[i] % 2)) {
            xCTmUJW5[p] = a[i];
            p = p + 1;
        };
    }
    for (i = 1; i < p - 1; i++) {
        brZMi6 = 0;
        while (p - 2 >= brZMi6) {
            if (xCTmUJW5[brZMi6] > xCTmUJW5[brZMi6 + 1]) {
                SGnfc1NalXY = xCTmUJW5[brZMi6 + 1];
                xCTmUJW5[brZMi6 + 1] = xCTmUJW5[brZMi6];
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
                xCTmUJW5[brZMi6] = SGnfc1NalXY;
            }
            brZMi6 = brZMi6 + 1;
        };
    }
    if (p == 1)
        printf ("%d", xCTmUJW5[0]);
    else {
        printf ("%d", xCTmUJW5[0]);
        for (i = 1; i <= p - 1; i++)
            printf (",%d", xCTmUJW5[i]);
    };
}

