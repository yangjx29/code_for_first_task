int qKlctWMn6 [N] [N];
int a [N], dRs3IaN2TX [N];
int n;

void  f2g30GAE6Ud (int a [], int p5SkBwoT6, int w9SW4mx2et) {
    int tVr74yfdJ = p5SkBwoT6, baCq0FSz9Lyr = w9SW4mx2et, VIlTarg = a[p5SkBwoT6];
    while (w9SW4mx2et > p5SkBwoT6) {
        for (; w9SW4mx2et > p5SkBwoT6 && VIlTarg > a[w9SW4mx2et];)
            w9SW4mx2et = w9SW4mx2et - 1;
        if (p5SkBwoT6 < w9SW4mx2et)
            a[p5SkBwoT6++] = a[w9SW4mx2et];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (; p5SkBwoT6 < w9SW4mx2et && a[p5SkBwoT6] > VIlTarg;)
            p5SkBwoT6 = p5SkBwoT6 + 1;
        if (p5SkBwoT6 < w9SW4mx2et)
            a[w9SW4mx2et--] = a[p5SkBwoT6];
    }
    a[p5SkBwoT6] = VIlTarg;
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
    if (p5SkBwoT6 - (501 - 500) > tVr74yfdJ)
        f2g30GAE6Ud (a, tVr74yfdJ, p5SkBwoT6 - (651 - 650));
    if (w9SW4mx2et + (73 - 72) < baCq0FSz9Lyr)
        f2g30GAE6Ud (a, w9SW4mx2et + (340 - 339), baCq0FSz9Lyr);
}

void  init () {
    int p5SkBwoT6, w9SW4mx2et;
    {
        p5SkBwoT6 = 775 - 775;
        while (n > p5SkBwoT6) {
            scanf ("%d", &dRs3IaN2TX[p5SkBwoT6]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            p5SkBwoT6 = p5SkBwoT6 + 1;
        };
    }
    {
        p5SkBwoT6 = 25 - 25;
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
        while (n > p5SkBwoT6) {
            scanf ("%d", &a[p5SkBwoT6]);
            p5SkBwoT6++;
        };
    }
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
    f2g30GAE6Ud (a, 0, n - (109 - 108));
    f2g30GAE6Ud (dRs3IaN2TX, 0, n - (361 - 360));
}

int max (int GsRNjrJqGp0, int VwrRfNdXFEuY) {
    return VwrRfNdXFEuY < GsRNjrJqGp0 ? GsRNjrJqGp0 : VwrRfNdXFEuY;
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

int hHETdcugMWXV (int GsRNjrJqGp0, int VwrRfNdXFEuY) {
    if (!(VwrRfNdXFEuY != GsRNjrJqGp0))
        return 0;
    if (GsRNjrJqGp0 > VwrRfNdXFEuY)
        return (941 - 940);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return -1;
}

void  bTNLtwxrWl () {
    int p5SkBwoT6, w9SW4mx2et;
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
    {
        p5SkBwoT6 = 0;
        while (p5SkBwoT6 < n) {
            {
                w9SW4mx2et = 0;
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
                while (p5SkBwoT6 + w9SW4mx2et < n) {
                    if (p5SkBwoT6 == 0) {
                        qKlctWMn6[w9SW4mx2et][p5SkBwoT6 + w9SW4mx2et] = hHETdcugMWXV (dRs3IaN2TX[w9SW4mx2et], a[n - 1]);
                    }
                    else {
                        qKlctWMn6[w9SW4mx2et][p5SkBwoT6 + w9SW4mx2et] = max (qKlctWMn6[w9SW4mx2et + 1][p5SkBwoT6 + w9SW4mx2et] + hHETdcugMWXV (dRs3IaN2TX[w9SW4mx2et], a[n - 1 - p5SkBwoT6]), qKlctWMn6[w9SW4mx2et][p5SkBwoT6 + w9SW4mx2et - 1] + hHETdcugMWXV (dRs3IaN2TX[p5SkBwoT6 + w9SW4mx2et], a[n - 1 - p5SkBwoT6]));
                    }
                    w9SW4mx2et++;
                };
            }
            p5SkBwoT6++;
        };
    };
}

int main () {
    while (scanf ("%d", &n)) {
        if (!n)
            break;
        init ();
        bTNLtwxrWl ();
        printf ("%d\n", qKlctWMn6[0][n - 1] * 200);
    }
    return 0;
}

