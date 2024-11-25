struct   book {
    int fUewA2iPLMs;
    char azRUa1c0 [(758 - 738)];
};
void  main () {
    struct   book APqjuM2 [100];
    int I87JQPB4oeFt [26] = {(69 - 69)};
    char qpb9d5AOtEx [20];
    int xVvTnelHa, rP3N41u, CqJ4nNxr5f, t, oxa3otGpE = (419 - 419);
    scanf ("%d", &CqJ4nNxr5f);
    for (xVvTnelHa = (871 - 871); xVvTnelHa < CqJ4nNxr5f; xVvTnelHa = xVvTnelHa + 1)
        scanf ("%d%s", &(APqjuM2[xVvTnelHa].fUewA2iPLMs), &(APqjuM2[xVvTnelHa].azRUa1c0));
    for (xVvTnelHa = 0; xVvTnelHa < CqJ4nNxr5f; xVvTnelHa = xVvTnelHa + 1) {
        rP3N41u = 0;
        while (APqjuM2[xVvTnelHa].azRUa1c0[rP3N41u] != '\0') {
            t = (int) APqjuM2[xVvTnelHa].azRUa1c0[rP3N41u] - (446 - 381);
            rP3N41u = rP3N41u + 1;
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
            I87JQPB4oeFt[t]++;
        };
    }
    {
        xVvTnelHa = 0;
        while (xVvTnelHa < 26) {
            if (I87JQPB4oeFt[xVvTnelHa] > oxa3otGpE) {
                oxa3otGpE = I87JQPB4oeFt[xVvTnelHa];
                t = xVvTnelHa;
            }
            xVvTnelHa = xVvTnelHa + 1;
        };
    }
    printf ("%c\n%d\n", t + (123 - 58), oxa3otGpE);
    {
        xVvTnelHa = 0;
        while (xVvTnelHa < CqJ4nNxr5f) {
            {
                rP3N41u = 0;
                while (APqjuM2[xVvTnelHa].azRUa1c0[rP3N41u] != '\0') {
                    if (APqjuM2[xVvTnelHa].azRUa1c0[rP3N41u] == (char) (t + 65))
                        printf ("%d\n", APqjuM2[xVvTnelHa].fUewA2iPLMs);
                    rP3N41u++;
                };
            }
            xVvTnelHa = xVvTnelHa + 1;
        };
    };
}

