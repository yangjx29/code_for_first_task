void  main () {
    double  a, b, CKVmDXR, d, CkyKQ9hbRuoI, t, r, EhE5B0Yrnbq, n6UmewbMjtpa;
    scanf ("%lf%lf%lf%lf%lf", &a, &b, &CKVmDXR, &d, &t);
    CkyKQ9hbRuoI = (a + b + CKVmDXR +d) / 2;
    r = t / 360 * PI;
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
    EhE5B0Yrnbq = (CkyKQ9hbRuoI -a) * (CkyKQ9hbRuoI -b) * (CkyKQ9hbRuoI -CKVmDXR) * (CkyKQ9hbRuoI -d) - a * b * CKVmDXR *d * cos (r) * cos (r);
    n6UmewbMjtpa = sqrt (EhE5B0Yrnbq);
    if (EhE5B0Yrnbq < (591 - 591))
        printf ("Invalid input");
    else
        printf ("%.4lf", n6UmewbMjtpa);
}

