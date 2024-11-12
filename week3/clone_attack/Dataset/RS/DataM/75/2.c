struct   ans {
    int x;
    int y;
};
int main () {
    struct   ans a [1000];
    int b [1000];
    int x1;
    int y1;
    int max = (118 - 118), min = 1000;
    char c;
    char c2 [1000];
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
    int V8DTX39eGiav = (608 - 608), j, n = 0, m;
    {
        V8DTX39eGiav = 0;
        while (1) {
            scanf ("%d", &x1);
            scanf ("%c", &c);
            if (!(',' == c))
                break;
            if (min > x1)
                min = x1;
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
            a[V8DTX39eGiav].x = x1;
            V8DTX39eGiav = V8DTX39eGiav +1;
            n = n + 1;
        };
    }
    for (V8DTX39eGiav = 0;; V8DTX39eGiav = V8DTX39eGiav +1) {
        scanf ("%d", &x1);
        if (max < x1)
            max = x1;
        a[V8DTX39eGiav].y = x1;
        scanf ("%c", &c);
        if (!(',' == c))
            break;
    }
    {
        V8DTX39eGiav = min;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (max >= V8DTX39eGiav) {
            b[V8DTX39eGiav] = 0;
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
            V8DTX39eGiav = V8DTX39eGiav +1;
        };
    }
    for (V8DTX39eGiav = 0; n > V8DTX39eGiav; V8DTX39eGiav = V8DTX39eGiav +1) {
        for (j = min; max > j; j = j + 1) {
            if (a[V8DTX39eGiav].x <= j && a[V8DTX39eGiav].y > j)
                b[j]++;
        };
    }
    m = 0;
    {
        V8DTX39eGiav = min;
        while (V8DTX39eGiav <= max) {
            if (m < b[V8DTX39eGiav])
                m = b[V8DTX39eGiav];
            V8DTX39eGiav = V8DTX39eGiav +1;
        };
    }
    printf ("%d %d", n, m);
    return 0;
}

