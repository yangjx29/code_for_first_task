void  main () {
    char *p;
    char *Q3DRPFNTs;
    char *k1L2fgraxJ;
    char lEgVF1Mfp8 [103] = {" "};
    char jOQnsU3p [103] = {" "};
    char qLNlUdjtCWfX [103] = {" "};
    gets (lEgVF1Mfp8);
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
    int smLfJ0i;
    k1L2fgraxJ = qLNlUdjtCWfX;
    strcat (lEgVF1Mfp8, jOQnsU3p);
    strcat (jOQnsU3p, lEgVF1Mfp8);
    smLfJ0i = strlen (jOQnsU3p);
    for (p = jOQnsU3p + smLfJ0i - 2; p >= jOQnsU3p; p--) {
        if (*p == ' ') {
            Q3DRPFNTs = p + 1;
            do {
                *k1L2fgraxJ = *Q3DRPFNTs;
                Q3DRPFNTs = Q3DRPFNTs +1;
                k1L2fgraxJ++;
            }
            while (*Q3DRPFNTs != ' ');
            *k1L2fgraxJ = ' ';
            k1L2fgraxJ++;
        }
        else
            continue;
    }
    printf ("%s", qLNlUdjtCWfX);
    *(k1L2fgraxJ - 1) = '\0';
}

