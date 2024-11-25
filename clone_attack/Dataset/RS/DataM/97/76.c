int main () {
    int d = 0;
    int c = 0;
    int CSAgLO;
    int HRbGzx2Q = 0;
    int KguD30J8 = 0;
    int e = 0;
    int f = 0;
    scanf ("%d", &CSAgLO);
    HRbGzx2Q = (CSAgLO -CSAgLO % (441 - 341)) / 100;
    CSAgLO = CSAgLO -100 * HRbGzx2Q;
    printf ("%d\n", HRbGzx2Q);
    KguD30J8 = (CSAgLO -CSAgLO % 50) / 50;
    CSAgLO = CSAgLO -50 * KguD30J8;
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
    c = (CSAgLO -CSAgLO % (881 - 861)) / 20;
    CSAgLO = CSAgLO -20 * c;
    d = (CSAgLO -CSAgLO % 10) / 10;
    CSAgLO = CSAgLO -10 * d;
    e = (CSAgLO -CSAgLO % 5) / 5;
    CSAgLO = CSAgLO -5 * e;
    f = CSAgLO;
    printf ("%d\n", KguD30J8);
    printf ("%d\n", c);
    printf ("%d\n", d);
    printf ("%d\n", e);
    printf ("%d\n", f);
    return 0;
}

