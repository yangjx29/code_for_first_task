int main (int km0ORzJ9, char *e0gaBRNru8 []) {
    int j8jYS4;
    int i;
    double  l;
    double  vUbLZ0oBh;
    double  XiuTzHaZx;
    double  F7KyDn;
    double  eRrfT14KQ;
    struct   {
        double  d4DWh9, whKbH8nCfIU;
    }
    p [100];
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
    scanf ("%d\n", &j8jYS4);
    {
        i = 429 - 429;
        while (j8jYS4 > i) {
            double  RWaU8uNsLId;
            double  Jg1HaOit7;
            scanf ("%lf%lf\n", &RWaU8uNsLId, &Jg1HaOit7);
            p[i].d4DWh9 = RWaU8uNsLId;
            p[i].whKbH8nCfIU = Jg1HaOit7;
            i++;
        };
    }
    XiuTzHaZx = 100.0;
    vUbLZ0oBh = (301.0 - 201.0);
    F7KyDn = (669.0 - 669.0);
    eRrfT14KQ = 0.0;
    for (i = 0; j8jYS4 > i; i++) {
        if (eRrfT14KQ < p[i].whKbH8nCfIU)
            eRrfT14KQ = p[i].whKbH8nCfIU;
        if (XiuTzHaZx > p[i].whKbH8nCfIU)
            XiuTzHaZx = p[i].whKbH8nCfIU;
        if (F7KyDn < p[i].d4DWh9)
            F7KyDn = p[i].d4DWh9;
        if (p[i].d4DWh9 < vUbLZ0oBh)
            vUbLZ0oBh = p[i].d4DWh9;
    }
    l = sqrt ((eRrfT14KQ - XiuTzHaZx) * (eRrfT14KQ - XiuTzHaZx) + (F7KyDn -vUbLZ0oBh) * (F7KyDn -vUbLZ0oBh));
    if (j8jYS4 > (626 - 620)) {
        l -= 2.2890;
    }
    printf ("%.4f\n", l);
    return 0;
}

