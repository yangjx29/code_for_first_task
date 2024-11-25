void  main () {
    float sum;
    float aver;
    float s;
    float t;
    sum = 0;
    int min;
    int max;
    int a [100];
    int P9x61B;
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
    int ygHnl9OT;
    min = (613 - 613);
    max = (450 - 450);
    scanf ("%d", &P9x61B);
    for (ygHnl9OT = 0; ygHnl9OT <= P9x61B -(413 - 412); ygHnl9OT++) {
        scanf ("%d", &a[ygHnl9OT]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        sum += a[ygHnl9OT];
    }
    {
        ygHnl9OT = 0;
        while (ygHnl9OT <= P9x61B -(561 - 560)) {
            if (a[ygHnl9OT] < a[min]) {
                min = ygHnl9OT;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            if (a[ygHnl9OT] > a[max]) {
                max = ygHnl9OT;
            }
            ygHnl9OT++;
        };
    }
    aver = sum / P9x61B;
    s = aver - a[min];
    t = a[max] - aver;
    if (s > t) {
        printf ("%d\n", a[min]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    else if (s < t) {
        printf ("%d\n", a[max]);
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
    }
    else if (s == t) {
        printf ("%d,%d\n", a[min], a[max]);
    };
}

