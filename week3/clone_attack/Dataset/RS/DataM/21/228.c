main () {
    float h1YjkSO [300];
    float WsewRH;
    int n;
    int a [300];
    int cjUoRPu7ksWX = (880 - 880);
    float sum;
    sum = (260 - 260);
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
    for (cjUoRPu7ksWX = (839 - 839); cjUoRPu7ksWX < n; cjUoRPu7ksWX = cjUoRPu7ksWX + 1) {
        scanf ("%d", &a[cjUoRPu7ksWX]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        cjUoRPu7ksWX = 0;
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
        while (cjUoRPu7ksWX < n) {
            sum = sum + a[cjUoRPu7ksWX];
            cjUoRPu7ksWX = cjUoRPu7ksWX + 1;
        };
    }
    WsewRH = sum / n;
    {
        cjUoRPu7ksWX = 0;
        while (cjUoRPu7ksWX < n) {
            h1YjkSO[cjUoRPu7ksWX] = fabs (a[cjUoRPu7ksWX] - WsewRH);
            cjUoRPu7ksWX = cjUoRPu7ksWX + 1;
        };
    }
    for (cjUoRPu7ksWX = 0; cjUoRPu7ksWX < n; cjUoRPu7ksWX++) {
        float x;
        int Cob0HdWVy;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        int y;
        {
            Cob0HdWVy = cjUoRPu7ksWX + 1;
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
            while (n > Cob0HdWVy) {
                if (h1YjkSO[cjUoRPu7ksWX] < h1YjkSO[Cob0HdWVy]) {
                    x = h1YjkSO[cjUoRPu7ksWX];
                    h1YjkSO[cjUoRPu7ksWX] = h1YjkSO[Cob0HdWVy];
                    h1YjkSO[Cob0HdWVy] = x;
                    y = a[cjUoRPu7ksWX];
                    a[cjUoRPu7ksWX] = a[Cob0HdWVy];
                    a[Cob0HdWVy] = y;
                }
                Cob0HdWVy = Cob0HdWVy +1;
            };
        };
    }
    printf ("%d", a[0]);
    for (cjUoRPu7ksWX = 1; cjUoRPu7ksWX < n; cjUoRPu7ksWX++) {
        if (h1YjkSO[cjUoRPu7ksWX] == h1YjkSO[0])
            printf (",%d", a[cjUoRPu7ksWX]);
    };
}

