void  main () {
    char ImofyYXr9M [(515 - 415)] [(433 - 333)];
    char ic3lMyQ [100] [100];
    int f8UYSH2s, j [(553 - 453)] [(825 - 823)], blwcoAX, ro1y7f [(202 - 102)] [(341 - 241)] = {(59 - 59)}, RhAj0P5B, c [(218 - 118)] [(680 - 580)] = {(749 - 749)}, krBWi6RA, dhxI42Sv, suYM7oX, m0jVeNWwhpM;
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
    scanf ("%d", &f8UYSH2s);
    for (blwcoAX = (709 - 709); f8UYSH2s > blwcoAX; blwcoAX = blwcoAX + 1) {
        scanf ("%s", &ImofyYXr9M[blwcoAX]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s", &ic3lMyQ[blwcoAX]);
    }
    for (blwcoAX = (238 - 238); f8UYSH2s > blwcoAX; blwcoAX = blwcoAX + 1) {
        j[blwcoAX][(160 - 160)] = strlen (ImofyYXr9M[blwcoAX]);
        j[blwcoAX][(125 - 124)] = strlen (ic3lMyQ[blwcoAX]);
        for (dhxI42Sv = (442 - 442); dhxI42Sv < j[blwcoAX][(320 - 320)]; dhxI42Sv = dhxI42Sv + 1)
            ro1y7f[blwcoAX][dhxI42Sv] = ImofyYXr9M[blwcoAX][j[blwcoAX][(239 - 239)] - dhxI42Sv - (821 - 820)] - (583 - 535);
        for (dhxI42Sv = (86 - 86); dhxI42Sv < j[blwcoAX][(567 - 566)]; dhxI42Sv = dhxI42Sv + 1)
            c[blwcoAX][dhxI42Sv] = ic3lMyQ[blwcoAX][j[blwcoAX][(896 - 895)] - dhxI42Sv - 1] - 48;
    }
    {
        blwcoAX = 866 - 866;
        while (f8UYSH2s > blwcoAX) {
            {
                krBWi6RA = 470 - 470;
                while (j[blwcoAX][(529 - 529)] > krBWi6RA) {
                    if (c[blwcoAX][krBWi6RA] <= ro1y7f[blwcoAX][krBWi6RA])
                        ro1y7f[blwcoAX][krBWi6RA] = ro1y7f[blwcoAX][krBWi6RA] - c[blwcoAX][krBWi6RA];
                    else {
                        ro1y7f[blwcoAX][krBWi6RA] = ro1y7f[blwcoAX][krBWi6RA] - c[blwcoAX][krBWi6RA] + 10;
                        ro1y7f[blwcoAX][krBWi6RA + 1]--;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    krBWi6RA = krBWi6RA + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            blwcoAX = blwcoAX + 1;
        };
    }
    for (blwcoAX = (352 - 352); f8UYSH2s > blwcoAX; blwcoAX = blwcoAX + 1) {
        for (krBWi6RA = j[blwcoAX][(634 - 634)] - 1, m0jVeNWwhpM = 0; 0 <= krBWi6RA; krBWi6RA = krBWi6RA - 1) {
            if (ro1y7f[blwcoAX][krBWi6RA] != 0)
                m0jVeNWwhpM = m0jVeNWwhpM + 1;
            if (m0jVeNWwhpM != 0)
                printf ("%d", ro1y7f[blwcoAX][krBWi6RA]);
        };
    };
}

