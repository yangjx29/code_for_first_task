int jz (int *cSE8IOfiGw, int n, int m) {
    int q, Ux0mqUQ8;
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
    if (m <= 4 && (674 - 674) <= m && n <= 4 && n >= 0) {
        for (Ux0mqUQ8 = 0; (416 - 411) > Ux0mqUQ8; Ux0mqUQ8++) {
            q = *(cSE8IOfiGw + n * 5 + Ux0mqUQ8);
            *(cSE8IOfiGw + n * 5 + Ux0mqUQ8) = *(cSE8IOfiGw + m * 5 + Ux0mqUQ8);
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
            *(cSE8IOfiGw + m * 5 + Ux0mqUQ8) = q;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return 1;
    }
    else
        return 0;
}

int main () {
    int a [5] [5];
    int Ux0mqUQ8, PXztFJYm, x, y, r;
    {
        Ux0mqUQ8 = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (Ux0mqUQ8 < 5) {
            for (PXztFJYm = 0; PXztFJYm < 5; PXztFJYm++)
                scanf ("%d", &a[Ux0mqUQ8][PXztFJYm]);
            Ux0mqUQ8++;
        };
    }
    scanf ("%d %d", &x, &y);
    r = jz (a, x, y);
    if (r == 0)
        printf ("error");
    else {
        for (Ux0mqUQ8 = 0; Ux0mqUQ8 < 5; Ux0mqUQ8++) {
            for (PXztFJYm = 0; PXztFJYm < 4; PXztFJYm++)
                printf ("%d ", a[Ux0mqUQ8][PXztFJYm]);
            printf ("%d\n", a[Ux0mqUQ8][4]);
        };
    }
    return 0;
}

