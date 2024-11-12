main () {
    int nm;
    int nf;
    int JsXWQckOe;
    double  gTv5eL [42];
    double  I9XQmKz2 [42];
    double  YjkSzOBNGMDa;
    char XbacA0 [10];
    int EOhDLw6Z1a2, bLb8o4, z4F7zNdRJ06;
    nf = -1;
    nm = -1;
    scanf ("%d", &JsXWQckOe);
    JsXWQckOe = JsXWQckOe -1;
    for (EOhDLw6Z1a2 = (487 - 487); JsXWQckOe >= EOhDLw6Z1a2; EOhDLw6Z1a2 = EOhDLw6Z1a2 +1) {
        scanf ("%s", XbacA0);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!('m' != XbacA0[0])) {
            nm++;
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
            scanf ("%lf", &gTv5eL[nm]);
        }
        else {
            nf = nf + 1;
            scanf ("%lf", &I9XQmKz2[nf]);
        };
    }
    {
        EOhDLw6Z1a2 = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (nm - 1 >= EOhDLw6Z1a2) {
            for (bLb8o4 = EOhDLw6Z1a2 +1; nm >= bLb8o4; bLb8o4 = bLb8o4 + 1)
                if (gTv5eL[bLb8o4] < gTv5eL[EOhDLw6Z1a2]) {
                    YjkSzOBNGMDa = gTv5eL[EOhDLw6Z1a2];
                    gTv5eL[EOhDLw6Z1a2] = gTv5eL[bLb8o4];
                    gTv5eL[bLb8o4] = YjkSzOBNGMDa;
                }
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
            EOhDLw6Z1a2 = EOhDLw6Z1a2 +1;
        };
    }
    printf ("%.2f", gTv5eL[0]);
    for (EOhDLw6Z1a2 = 0; EOhDLw6Z1a2 <= nf - 1; EOhDLw6Z1a2 = EOhDLw6Z1a2 +1)
        for (bLb8o4 = EOhDLw6Z1a2 +1; bLb8o4 <= nf; bLb8o4 = bLb8o4 + 1)
            if (I9XQmKz2[EOhDLw6Z1a2] < I9XQmKz2[bLb8o4]) {
                YjkSzOBNGMDa = I9XQmKz2[EOhDLw6Z1a2];
                I9XQmKz2[EOhDLw6Z1a2] = I9XQmKz2[bLb8o4];
                I9XQmKz2[bLb8o4] = YjkSzOBNGMDa;
            }
    for (EOhDLw6Z1a2 = 1; EOhDLw6Z1a2 <= nm; EOhDLw6Z1a2 = EOhDLw6Z1a2 +1)
        printf (" %.2f", gTv5eL[EOhDLw6Z1a2]);
    for (EOhDLw6Z1a2 = 0; EOhDLw6Z1a2 <= nf; EOhDLw6Z1a2++)
        printf (" %.2f", I9XQmKz2[EOhDLw6Z1a2]);
}

