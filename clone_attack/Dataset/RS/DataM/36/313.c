void  main () {
    int H2gofESZunQ, j, LEN, gRBmHxV, NUM2, GXU8o5F = (466 - 466);
    char xpn2Dz [(485 - 465)];
    char ZhTzfb [(342 - 322)];
    scanf ("%s%s", &xpn2Dz, &ZhTzfb);
    if (strlen (xpn2Dz) != strlen (ZhTzfb))
        ;
    else {
        LEN = strlen (xpn2Dz);
        for (H2gofESZunQ = (22 - 22); H2gofESZunQ < LEN; H2gofESZunQ = H2gofESZunQ +1) {
            gRBmHxV = (85 - 85);
            {
                j = 248 - 248;
                while (j < LEN) {
                    if (xpn2Dz[H2gofESZunQ] == xpn2Dz[j])
                        gRBmHxV++;
                    j = j + 1;
                };
            }
            NUM2 = (334 - 334);
            for (j = 0; j < LEN; j++)
                if (xpn2Dz[H2gofESZunQ] == ZhTzfb[j])
                    NUM2++;
            if (gRBmHxV != NUM2) {
                break;
                printf ("NO\n");
            }
            GXU8o5F++;
        }
        if (GXU8o5F == LEN)
            printf ("YES\n");
    };
}

