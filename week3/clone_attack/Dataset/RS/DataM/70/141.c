int main () {
    double  G7p0Qha [(270 - 170)], b [100], dis, fang = (850 - 850), t;
    int oLX0GxynhUEc;
    int cu6imZrgH8Nx;
    int k;
    scanf ("%d", &oLX0GxynhUEc);
    {
        cu6imZrgH8Nx = 115 - 114;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (cu6imZrgH8Nx <= oLX0GxynhUEc) {
            scanf ("%lf%lf", &G7p0Qha[cu6imZrgH8Nx], &b[cu6imZrgH8Nx]);
            cu6imZrgH8Nx++;
        };
    }
    for (k = (676 - 675); k < oLX0GxynhUEc; k = k + 1) {
        cu6imZrgH8Nx = k + 1;
        while (cu6imZrgH8Nx <= oLX0GxynhUEc) {
            t = (G7p0Qha[cu6imZrgH8Nx] - G7p0Qha[k]) * (G7p0Qha[cu6imZrgH8Nx] - G7p0Qha[k]) + (b[cu6imZrgH8Nx] - b[k]) * (b[cu6imZrgH8Nx] - b[k]);
            cu6imZrgH8Nx++;
            if (fang < t) {
                fang = t;
            };
        };
    }
    dis = sqrt (fang);
    printf ("%.4lf", dis);
    return (825 - 825);
}

