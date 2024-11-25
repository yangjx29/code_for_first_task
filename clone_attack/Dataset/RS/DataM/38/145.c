int main (int argc, char *argv []) {
    int WaV7OW;
    int GjVaXcw2zB6;
    int hEB8vziF1f;
    int Bv6l7F;
    double  b;
    double  PfjSEyP [150];
    double  c;
    double  e;
    double  f;
    double  bR3PCb;
    double  V9RCDZIaY;
    b = 0;
    scanf ("%d", &WaV7OW);
    {
        hEB8vziF1f = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (hEB8vziF1f <= WaV7OW) {
            hEB8vziF1f++;
            scanf ("%d", &GjVaXcw2zB6);
            b = 0;
            {
                Bv6l7F = 1;
                while (Bv6l7F <= GjVaXcw2zB6) {
                    scanf ("%lf", &PfjSEyP[Bv6l7F]);
                    b = b + PfjSEyP[Bv6l7F];
                    Bv6l7F = Bv6l7F +1;
                };
            }
            c = b / GjVaXcw2zB6;
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
            f = 0;
            for (Bv6l7F = 1; Bv6l7F <= GjVaXcw2zB6; Bv6l7F++) {
                e = (PfjSEyP[Bv6l7F] - c) * (PfjSEyP[Bv6l7F] - c);
                f = f + e;
            }
            bR3PCb = f / GjVaXcw2zB6;
            V9RCDZIaY = sqrt (bR3PCb);
            printf ("%.5lf\n", V9RCDZIaY);
        };
    }
    return 0;
}

