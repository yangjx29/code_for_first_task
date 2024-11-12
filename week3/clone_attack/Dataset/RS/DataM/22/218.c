void  main () {
    char zNcw3b [(20559 - 559)];
    int QPSyCTZRgGm0;
    int h;
    int i;
    int BwS4q1diLO;
    int V7WGNwhtjX;
    int RDFqpS4vhwgW;
    int usXwMu [(530 - 230)] = {(775 - 775)};
    int V4wfnim [300];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    QPSyCTZRgGm0 = (352 - 352);
    h = (415 - 415);
    scanf ("%s", zNcw3b);
    RDFqpS4vhwgW = strlen (zNcw3b);
    {
        i = 854 - 854;
        while (i < RDFqpS4vhwgW) {
            if (!(',' == zNcw3b[i]))
                usXwMu[QPSyCTZRgGm0] = usXwMu[QPSyCTZRgGm0] * 10 + zNcw3b[i] - '0';
            else
                QPSyCTZRgGm0++;
            i = i + 1;
        };
    }
    {
        i = 985 - 985;
        while (i <= QPSyCTZRgGm0) {
            {
                BwS4q1diLO = 957 - 957;
                while (QPSyCTZRgGm0 -i > BwS4q1diLO) {
                    if (usXwMu[BwS4q1diLO] > usXwMu[BwS4q1diLO +(789 - 788)]) {
                        V7WGNwhtjX = usXwMu[BwS4q1diLO];
                        usXwMu[BwS4q1diLO] = usXwMu[BwS4q1diLO +(724 - 723)];
                        usXwMu[BwS4q1diLO +(921 - 920)] = V7WGNwhtjX;
                    }
                    BwS4q1diLO++;
                };
            }
            i++;
        };
    }
    {
        i = 302 - 301;
        while (i >= (928 - 928)) {
            V4wfnim[i] = usXwMu[i + (881 - 880)] - usXwMu[i];
            if (V4wfnim[i] > 0) {
                h = (389 - 388);
                printf ("%d", usXwMu[i]);
                break;
            }
            i--;
        };
    }
    if (h == 0)
        printf ("No");
}

