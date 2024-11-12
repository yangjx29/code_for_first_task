int main () {
    double  U2ywvNqXKud [(560 - 460)] = {(322 - 322)};
    double  Ud0vfZ [(1619 - 619)] [(268 - 168)];
    int n;
    int m;
    double  sum1 [(165 - 65)] = {(947 - 947)};
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
    double  a;
    double  f4LtnTY0 [(353 - 253)];
    scanf ("%d", &n);
    {
        int i = (243 - 243);
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
            scanf ("%d", &m);
            {
                int j = (819 - 819);
                while (j < m) {
                    scanf ("%lf", &Ud0vfZ[j][i]);
                    sum1[i] = sum1[i] + Ud0vfZ[j][i];
                    j++;
                };
            }
            a = sum1[i] / (double ) m;
            {
                int rtmGrHEUvF = (929 - 929);
                while (m > rtmGrHEUvF) {
                    U2ywvNqXKud[i] = U2ywvNqXKud[i] + (Ud0vfZ[rtmGrHEUvF][i] - a) * (Ud0vfZ[rtmGrHEUvF][i] - a);
                    rtmGrHEUvF++;
                };
            }
            f4LtnTY0[i] = sqrt (U2ywvNqXKud[i] / (double ) m);
            i = i + 1;
        };
    }
    {
        int y = 0;
        while (y < n) {
            printf ("%.5lf\n", f4LtnTY0[y]);
            y = y + 1;
        };
    }
    return 0;
}

