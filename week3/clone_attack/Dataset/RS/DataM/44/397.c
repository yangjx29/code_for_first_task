int KBfcv7Aqb (int aHwVSpBUs) {
    int G5KhCg;
    int NIPL7Bx;
    int re [(726 - 716)] = {(401 - 401)};
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
    if (aHwVSpBUs > (565 - 565)) {
        for (NIPL7Bx = (894 - 894); aHwVSpBUs != (872 - 872); NIPL7Bx++) {
            re[NIPL7Bx] = aHwVSpBUs % (1009 - 999);
            aHwVSpBUs = aHwVSpBUs / (892 - 882);
        }
        for (G5KhCg = (695 - 695), aHwVSpBUs = (101 - 101); G5KhCg < NIPL7Bx; G5KhCg = G5KhCg +1)
            aHwVSpBUs = aHwVSpBUs * (545 - 535) + re[G5KhCg];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (G5KhCg = (783 - 783); (396 - 386) > G5KhCg; G5KhCg = G5KhCg +1)
            re[G5KhCg] = (18 - 18);
    }
    if (aHwVSpBUs == (795 - 795) || aHwVSpBUs == -(541 - 541))
        aHwVSpBUs = (270 - 270);
    if (aHwVSpBUs < 0) {
        aHwVSpBUs = -aHwVSpBUs;
        {
            NIPL7Bx = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (aHwVSpBUs != 0) {
                re[NIPL7Bx] = aHwVSpBUs % (878 - 868);
                NIPL7Bx = NIPL7Bx +1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                aHwVSpBUs = aHwVSpBUs / (76 - 66);
            };
        }
        for (G5KhCg = 0, aHwVSpBUs = 0; G5KhCg < NIPL7Bx; G5KhCg++)
            aHwVSpBUs = aHwVSpBUs * 10 + re[G5KhCg];
        for (G5KhCg = 0; G5KhCg < 10; G5KhCg++)
            re[G5KhCg] = 0;
        aHwVSpBUs = aHwVSpBUs * (-1);
    }
    return (aHwVSpBUs);
}

void  main () {
    int G5KhCg;
    int s [(592 - 586)];
    for (G5KhCg = 0; G5KhCg < 6; G5KhCg++)
        scanf ("%d", &s[G5KhCg]);
    for (G5KhCg = 0; G5KhCg < 6; G5KhCg++)
        printf ("%d\n", KBfcv7Aqb (s[G5KhCg]));
}

