int main () {
    double  pwOB4TYs;
    double  p4y2B7Vap;
    double  PhufaVnW4MK5;
    double  z6CpauT0;
    double  b0b2Ssj [100];
    pwOB4TYs = 0;
    p4y2B7Vap = 0;
    PhufaVnW4MK5 = 0;
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
    z6CpauT0 = 0;
    int X5ex3RF;
    int yx708S;
    int WAFXJ7vhBp;
    int k;
    scanf ("%d", &k);
    for (yx708S = 0; k > yx708S; yx708S = yx708S + 1) {
        scanf ("%d", &X5ex3RF);
        for (WAFXJ7vhBp = 0; X5ex3RF > WAFXJ7vhBp; WAFXJ7vhBp = WAFXJ7vhBp +1) {
            scanf ("%lf", &b0b2Ssj[WAFXJ7vhBp]);
        }
        {
            WAFXJ7vhBp = 0;
            while (X5ex3RF > WAFXJ7vhBp) {
                pwOB4TYs = pwOB4TYs + b0b2Ssj[WAFXJ7vhBp];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                WAFXJ7vhBp = WAFXJ7vhBp +1;
            };
        }
        PhufaVnW4MK5 = 1.00000000000 * pwOB4TYs / X5ex3RF;
        pwOB4TYs = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            WAFXJ7vhBp = 0;
            while (WAFXJ7vhBp < X5ex3RF) {
                p4y2B7Vap = p4y2B7Vap + (b0b2Ssj[WAFXJ7vhBp] - PhufaVnW4MK5) * (b0b2Ssj[WAFXJ7vhBp] - PhufaVnW4MK5);
                WAFXJ7vhBp++;
            };
        }
        z6CpauT0 = sqrt (p4y2B7Vap / X5ex3RF);
        printf ("%.5lf\n", z6CpauT0);
        p4y2B7Vap = 0;
    }
    return 0;
}

