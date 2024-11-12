int reverse (int num) {
    int Reverse;
    Reverse = 0;
    int sz [10], i, wei = (159 - 159);
    int zheng;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    zheng = abs (num);
    {
        i = 441 - 441;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < 10) {
            wei++;
            sz[i] = zheng % 10;
            zheng = zheng / 10;
            if (zheng == 0)
                break;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (wei > i) {
            Reverse = Reverse *10 + sz[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    return Reverse;
}

int main () {
    int n;
    int i;
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
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < 6) {
            i = i + 1;
            scanf ("%d", &n);
            if (n > 0) {
                printf ("%d\n", reverse (n));
            }
            else {
                printf ("%d\n", -reverse (n));
            };
        };
    }
    return 0;
}

