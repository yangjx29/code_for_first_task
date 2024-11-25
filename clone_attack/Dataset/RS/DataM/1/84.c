int fenjie (int WfBEbX, int min) {
    int wwhFn9Lkr;
    int i;
    int SMXBkCOIF1tg;
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
    wwhFn9Lkr = 1;
    {
        i = min;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (WfBEbX / 2 > i) {
            SMXBkCOIF1tg = WfBEbX % i;
            if (!(0 != SMXBkCOIF1tg)) {
                if (i <= WfBEbX / i)
                    wwhFn9Lkr = wwhFn9Lkr + fenjie (WfBEbX / i, i);
            }
            i = i + 1;
        };
    }
    return wwhFn9Lkr;
}

int main () {
    int a [10000];
    int n;
    int moEUMy;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    scanf ("%d", &n);
    for (moEUMy = 0; moEUMy < n; moEUMy++) {
        scanf ("\n%d", &a[moEUMy]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    for (moEUMy = 0; moEUMy < n; moEUMy++) {
        printf ("%d\n", fenjie (a[moEUMy], 2));
    }
    return 0;
}

