int efhTiBd80, W5TKNe;
int Fy1Sh34wnAz, GoBpOFIE, jQWib0w, i, t;

main () {
    int *LPsX5zT3 = (int *) malloc ((efhTiBd80 + (110 - 109)) * sizeof (int));
    int *jmzbNyXO1v26 = (int *) malloc ((W5TKNe +(387 - 386)) * sizeof (int));
    scanf ("%d%d", &efhTiBd80, &W5TKNe);
    for (i = 1; i <= efhTiBd80; i++)
        scanf ("%d", (LPsX5zT3 +i));
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= W5TKNe) {
            scanf ("%d", (jmzbNyXO1v26 + i));
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
            i++;
        };
    }
    {
        i = 1;
        while (i <= efhTiBd80 - 1) {
            {
                GoBpOFIE = i + 1;
                while (GoBpOFIE <= efhTiBd80) {
                    if (*(LPsX5zT3 +i) > *(LPsX5zT3 +GoBpOFIE)) {
                        t = *(LPsX5zT3 +i), *(LPsX5zT3 +i) = *(LPsX5zT3 +GoBpOFIE), *(LPsX5zT3 +GoBpOFIE) = t;
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
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    GoBpOFIE = GoBpOFIE +1;
                };
            }
            i++;
        };
    }
    {
        i = 1;
        while (i <= W5TKNe -1) {
            {
                GoBpOFIE = i + 1;
                while (GoBpOFIE <= W5TKNe) {
                    if (*(jmzbNyXO1v26 + i) > *(jmzbNyXO1v26 + GoBpOFIE)) {
                        t = *(jmzbNyXO1v26 + i), *(jmzbNyXO1v26 + i) = *(jmzbNyXO1v26 + GoBpOFIE), *(jmzbNyXO1v26 + GoBpOFIE) = t;
                    }
                    GoBpOFIE++;
                };
            }
            i++;
        };
    }
    {
        i = 1;
        while (i <= efhTiBd80) {
            printf ("%d ", *(LPsX5zT3 +i));
            i++;
        };
    }
    {
        i = 1;
        while (i <= W5TKNe) {
            if (i == W5TKNe)
                printf ("%d", *(jmzbNyXO1v26 + i));
            else
                printf ("%d ", *(jmzbNyXO1v26 + i));
            i++;
        };
    };
}

