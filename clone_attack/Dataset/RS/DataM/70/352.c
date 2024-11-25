int main () {
    int n;
    float max;
    float t;
    max = 0;
    struct   point {
        float x, rQR1qBTcO;
    }
    iALn0r4ThCxb [1000];
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
    scanf ("%d", &n);
    {
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%f%f", &iALn0r4ThCxb[i].x, &iALn0r4ThCxb[i].rQR1qBTcO);
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
            i++;
        };
    }
    for (int k = 0;
    k < n; k = k + 1) {
        int XdiRgx1m = 0;
        while (n > XdiRgx1m) {
            t = sqrt ((iALn0r4ThCxb[k].x - iALn0r4ThCxb[XdiRgx1m].x) * (iALn0r4ThCxb[k].x - iALn0r4ThCxb[XdiRgx1m].x) + (iALn0r4ThCxb[k].rQR1qBTcO - iALn0r4ThCxb[XdiRgx1m].rQR1qBTcO) * (iALn0r4ThCxb[k].rQR1qBTcO - iALn0r4ThCxb[XdiRgx1m].rQR1qBTcO));
            XdiRgx1m = XdiRgx1m +1;
            if (t > max)
                max = t;
        };
    }
    printf ("%.4f\n", max);
    return 0;
}

