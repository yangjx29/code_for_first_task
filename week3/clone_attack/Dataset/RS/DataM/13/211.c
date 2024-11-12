int main () {
    int i;
    int YclDVzht;
    int n;
    int guDX2rcGbx;
    int ustYx0Ki [100000];
    int lzRPdHXkO9D = 0;
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
            scanf ("%d", &ustYx0Ki[i]);
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
        YclDVzht = 1;
        while (YclDVzht < n) {
            {
                i = 0;
                while (i < YclDVzht) {
                    if (ustYx0Ki[YclDVzht] == ustYx0Ki[i]) {
                        lzRPdHXkO9D++;
                        ustYx0Ki[YclDVzht] = 0;
                        break;
                    }
                    i = i + 1;
                };
            }
            YclDVzht = YclDVzht +1;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (ustYx0Ki[i] == 0) {
                for (guDX2rcGbx = i + 1; guDX2rcGbx < n; guDX2rcGbx++) {
                    if (ustYx0Ki[guDX2rcGbx] != 0) {
                        ustYx0Ki[i] = ustYx0Ki[guDX2rcGbx];
                        ustYx0Ki[guDX2rcGbx] = 0;
                        break;
                    };
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < n - lzRPdHXkO9D - 1) {
            printf ("%d ", ustYx0Ki[i]);
            i++;
        };
    }
    printf ("%d", ustYx0Ki[n - lzRPdHXkO9D - 1]);
    return 0;
}

