int main () {
    int l;
    int r;
    int i;
    int n;
    int a;
    int YGlDnFjNP;
    l = (780 - 780);
    r = 0;
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
    char qujian [N];
    memset (qujian, 0, sizeof (qujian));
    scanf ("%d", &n);
    for (; n = n - 1;) {
        scanf ("%d %d", &a, &YGlDnFjNP);
        {
            i = a;
            while (i < YGlDnFjNP) {
                qujian[i]++;
                i++;
            };
        };
    }
    for (i = 0; i < N; i = i + 1) {
        if (qujian[i]) {
            l = i;
            break;
        };
    }
    {
        i = N;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i > 0) {
            if (qujian[i - 1]) {
                r = i;
                break;
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
            i = i - 1;
        };
    }
    for (i = l; i < r; i++) {
        if (!qujian[i]) {
            return 0;
        };
    }
    printf ("%d %d", l, r);
}

