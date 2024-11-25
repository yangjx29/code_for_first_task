int AiL1loYKmw (int oZhqFo, int m) {
    int lufOD8;
    if ((oZhqFo >= (631 - 631)) && ((933 - 929) >= oZhqFo) && (m >= (396 - 396)) && (m <= (962 - 958)))
        lufOD8 = 1;
    else
        lufOD8 = 0;
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
    return lufOD8;
}

void  main () {
    int m;
    int oZhqFo;
    int bSbU87 [(52 - 47)] [(469 - 464)];
    int ntLa8jAJI;
    int q;
    int lufOD8;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    for (ntLa8jAJI = 0; ntLa8jAJI < 5; ntLa8jAJI = ntLa8jAJI + 1) {
        q = 0;
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
        while (q < 5) {
            scanf ("%d", &bSbU87[ntLa8jAJI][q]);
            q = q + 1;
        };
    }
    scanf ("%d %d", &oZhqFo, &m);
    lufOD8 = AiL1loYKmw (oZhqFo, m);
    for (ntLa8jAJI = 0; ntLa8jAJI < 5; ntLa8jAJI = ntLa8jAJI + 1)
        bbjDfQvA[ntLa8jAJI] = bSbU87[ntLa8jAJI];
    if (lufOD8 == 0)
        printf ("error");
    else {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (ntLa8jAJI = 0; ntLa8jAJI < 5; ntLa8jAJI++) {
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
            if (ntLa8jAJI == oZhqFo) {
                for (q = 0; q < 4; q = q + 1)
                    printf ("%d ", bSbU87[m][q]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                printf ("%d\n", bSbU87[m][4]);
            }
            else {
                if (ntLa8jAJI == m) {
                    {
                        q = 0;
                        while (q < 4) {
                            printf ("%d ", bSbU87[oZhqFo][q]);
                            q++;
                        };
                    }
                    printf ("%d\n", bSbU87[oZhqFo][4]);
                }
                else {
                    for (q = 0; q < 4; q = q + 1)
                        printf ("%d ", bSbU87[ntLa8jAJI][q]);
                    printf ("%d\n", bSbU87[ntLa8jAJI][4]);
                };
            };
        };
    };
}

