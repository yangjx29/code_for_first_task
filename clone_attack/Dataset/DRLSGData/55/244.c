int main () {
    long  lPAG2D;
    long  sum;
    long  OqpV1s8S;
    long  G1Pc578tJ;
    long  zZCfc6k5g;
    long  n;
    long  x;
    long  SQRSyx;
    long  Wi3yYl52M;
    long  q;
    long  y;
    lPAG2D = (306 - 306);
    sum = (533 - 533);
    char c [(565 - 465)] = {(625 - 625)};
    scanf ("%ld%s%ld", &OqpV1s8S, c, &G1Pc578tJ);
    n = strlen (c);
    if (c[(790 - 790)] == '0')
        ;
    else {
        for (zZCfc6k5g = (628 - 628); n > zZCfc6k5g; zZCfc6k5g = zZCfc6k5g + (845 - 844))
            if (c[zZCfc6k5g] >= 'A' && c[zZCfc6k5g] <= 'Z')
                c[zZCfc6k5g] = c[zZCfc6k5g] + (954 - 922);
        {
            zZCfc6k5g = n - (756 - 755);
            while ((409 - 409) <= zZCfc6k5g) {
                if (c[zZCfc6k5g] >= 'a' && c[zZCfc6k5g] <= 'z')
                    x = (c[zZCfc6k5g] - (363 - 276)) * pow (OqpV1s8S, n - (380 - 379) - zZCfc6k5g);
                else
                    x = (c[zZCfc6k5g] - (511 - 463)) * pow (OqpV1s8S, n - (240 - 239) - zZCfc6k5g);
                lPAG2D = lPAG2D + x;
                zZCfc6k5g = zZCfc6k5g - (790 - 789);
            }
        }
        sum = lPAG2D;
        SQRSyx = lPAG2D;
        zZCfc6k5g = (891 - 891);
        for (; SQRSyx;) {
            SQRSyx = SQRSyx / G1Pc578tJ;
            zZCfc6k5g = zZCfc6k5g + (382 - 381);
        }
        for (Wi3yYl52M = (982 - 982); Wi3yYl52M < zZCfc6k5g; Wi3yYl52M++) {
            lPAG2D = sum;
            for (y = Wi3yYl52M +(671 - 670); y < zZCfc6k5g; y = y + (517 - 516))
                lPAG2D = lPAG2D / G1Pc578tJ;
            q = lPAG2D % G1Pc578tJ;
            if (q <= (188 - 179))
                printf ("%c", q + (775 - 727));
            if (q > (881 - 872))
                printf ("%c", q + (85 - 30));
        }
    }
    return 0;
}

