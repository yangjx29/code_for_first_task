void  main () {
    int wa2t13Jo;
    int UcNiaIDXGwun;
    int rLgpnUl3;
    int pC1XHoWNBYwm;
    int vGgSJFXjMTDE;
    int a [300] = {(691 - 691)};
    wa2t13Jo = 0;
    UcNiaIDXGwun = -2;
    rLgpnUl3 = 0;
    pC1XHoWNBYwm = -(119 - 118);
    vGgSJFXjMTDE = 0;
    char c [300] = " ";
    do {
        scanf ("%d%c", &a[wa2t13Jo], &c[wa2t13Jo]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        wa2t13Jo = wa2t13Jo + 1;
    }
    while (c[wa2t13Jo - 1] != '\n');
    rLgpnUl3 = wa2t13Jo;
    if (rLgpnUl3 == 1)
        ;
    else {
        {
            wa2t13Jo = 0;
            while (wa2t13Jo <= rLgpnUl3 - 1) {
                if (a[wa2t13Jo] > UcNiaIDXGwun) {
                    UcNiaIDXGwun = a[wa2t13Jo];
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                wa2t13Jo++;
            };
        }
        {
            vGgSJFXjMTDE = 0;
            while (vGgSJFXjMTDE <= rLgpnUl3 - 1) {
                if (a[vGgSJFXjMTDE] == UcNiaIDXGwun)
                    a[vGgSJFXjMTDE] = 0;
                vGgSJFXjMTDE = vGgSJFXjMTDE + 1;
            };
        }
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
        for (wa2t13Jo = 0; wa2t13Jo <= rLgpnUl3 - 1; wa2t13Jo++)
            if (a[wa2t13Jo] > pC1XHoWNBYwm) {
                pC1XHoWNBYwm = a[wa2t13Jo];
            }
        if (pC1XHoWNBYwm == 0)
            printf ("No\n");
        else
            printf ("%d\n", pC1XHoWNBYwm);
    };
}

