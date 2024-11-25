int main () {
    double  x;
    double  Q0Klo6cWXwiU [(1053 - 53)];
    double  b [(1322 - 322)];
    double  c [1000] [1000];
    int t;
    int GsfPxAKw;
    int HrezAUt7Lixs;
    int n;
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
    t = (790 - 790);
    x = 0;
    scanf ("%d", &n);
    {
        GsfPxAKw = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > GsfPxAKw) {
            scanf ("%lf %lf", &Q0Klo6cWXwiU[GsfPxAKw], &b[GsfPxAKw]);
            GsfPxAKw++;
        };
    }
    {
        GsfPxAKw = 0;
        while (n > GsfPxAKw) {
            {
                HrezAUt7Lixs = 0;
                while (n > HrezAUt7Lixs) {
                    c[GsfPxAKw][HrezAUt7Lixs] = sqrt ((Q0Klo6cWXwiU[GsfPxAKw] - Q0Klo6cWXwiU[HrezAUt7Lixs]) * (Q0Klo6cWXwiU[GsfPxAKw] - Q0Klo6cWXwiU[HrezAUt7Lixs]) + (b[GsfPxAKw] - b[HrezAUt7Lixs]) * (b[GsfPxAKw] - b[HrezAUt7Lixs]));
                    if (c[GsfPxAKw][HrezAUt7Lixs] > x)
                        x = c[GsfPxAKw][HrezAUt7Lixs];
                    HrezAUt7Lixs++;
                };
            }
            GsfPxAKw++;
        };
    }
    printf ("%.4f", (float) x);
    getchar ();
    getchar ();
    getchar ();
}

