int main () {
    int pxdmeCUKI [9000], RCjri8xa [9000];
    int Ub8kiN;
    int RgvZiYce;
    int PmusX0F;
    int yHw8NVYbLRv = 1, uN6APuB = (650 - 650);
    scanf ("%d", &Ub8kiN);
    scanf ("%d", &pxdmeCUKI[0]);
    RCjri8xa[0] = pxdmeCUKI[0];
    printf ("%d", pxdmeCUKI[0]);
    for (RgvZiYce = 1; RgvZiYce < Ub8kiN; RgvZiYce = RgvZiYce +1) {
        int PmusX0F;
        PmusX0F = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%d", &pxdmeCUKI[RgvZiYce]);
        for (; yHw8NVYbLRv > PmusX0F;) {
            if (pxdmeCUKI[RgvZiYce] == RCjri8xa[PmusX0F]) {
                uN6APuB = 1;
                break;
            }
            PmusX0F = PmusX0F +1;
        }
        if (uN6APuB == 0) {
            RCjri8xa[yHw8NVYbLRv] = pxdmeCUKI[RgvZiYce];
            printf (" %d", RCjri8xa[yHw8NVYbLRv]);
            yHw8NVYbLRv = yHw8NVYbLRv + 1;
        }
        else
            uN6APuB = 0;
    }
    getchar ();
    getchar ();
    getchar ();
}

