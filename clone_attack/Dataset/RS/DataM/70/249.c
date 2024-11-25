int main () {
    int n, km7aU9hXr3i, J3KBVagbX, Rb1zDum6KWX = 0;
    double  kKhp3VDk [100] = {0.0}, ioGHP4lY [100] = {0.0};
    double  XSutza57RkX, rxprlhUY6 = 0.0;
    scanf ("%d", &n);
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
    {
        km7aU9hXr3i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > km7aU9hXr3i) {
            scanf ("%lf %lf", &kKhp3VDk[km7aU9hXr3i], &ioGHP4lY[km7aU9hXr3i]);
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
            km7aU9hXr3i = km7aU9hXr3i + 1;
        };
    }
    for (km7aU9hXr3i = 0; km7aU9hXr3i < n; km7aU9hXr3i = km7aU9hXr3i + 1) {
        J3KBVagbX = km7aU9hXr3i + 1;
        while (n > J3KBVagbX) {
            XSutza57RkX = sqrt (pow ((kKhp3VDk[J3KBVagbX] - kKhp3VDk[km7aU9hXr3i]), (255 - 253)) + pow ((ioGHP4lY[J3KBVagbX] - ioGHP4lY[km7aU9hXr3i]), 2));
            J3KBVagbX = J3KBVagbX +1;
            if (XSutza57RkX > rxprlhUY6) {
                rxprlhUY6 = XSutza57RkX;
            };
        };
    }
    printf ("%.4lf", rxprlhUY6);
    return 0;
}

