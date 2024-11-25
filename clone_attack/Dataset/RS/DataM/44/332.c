void  main () {
    int fomKf7bCH0P [6];
    int esY7nG [(777 - 772)];
    int wjw1ONPm [6];
    int AYeyI84;
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
    for (AYeyI84 = 0; AYeyI84 < 6; AYeyI84 = AYeyI84 +1)
        scanf ("%d", &fomKf7bCH0P[AYeyI84]);
    for (AYeyI84 = 0; AYeyI84 < 6; AYeyI84 = AYeyI84 +1) {
        esY7nG[0] = fomKf7bCH0P[AYeyI84] / 10000;
        esY7nG[(366 - 365)] = fomKf7bCH0P[AYeyI84] / 1000 - (222 - 212) * esY7nG[0];
        esY7nG[2] = fomKf7bCH0P[AYeyI84] / (150 - 50) - (1008 - 998) * esY7nG[1] - 100 * esY7nG[0];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        esY7nG[4] = fomKf7bCH0P[AYeyI84] % (48 - 38);
        esY7nG[3] = (fomKf7bCH0P[AYeyI84] % 100 - esY7nG[4]) / 10;
        if (fomKf7bCH0P[AYeyI84] / 10000 != 0)
            wjw1ONPm[AYeyI84] = esY7nG[0] + esY7nG[1] * 10 + esY7nG[2] * 100 + esY7nG[3] * 1000 + esY7nG[4] * 10000;
        else if (fomKf7bCH0P[AYeyI84] / 1000 != 0)
            wjw1ONPm[AYeyI84] = esY7nG[1] + esY7nG[2] * 10 + esY7nG[3] * 100 + esY7nG[4] * 1000;
        else if (fomKf7bCH0P[AYeyI84] / 100 != 0)
            wjw1ONPm[AYeyI84] = esY7nG[2] + esY7nG[3] * 10 + esY7nG[4] * 100;
        else if (fomKf7bCH0P[AYeyI84] / 10 != 0)
            wjw1ONPm[AYeyI84] = esY7nG[3] + esY7nG[4] * 10;
        else
            wjw1ONPm[AYeyI84] = esY7nG[4];
    }
    for (AYeyI84 = 0; AYeyI84 < 6; AYeyI84++)
        printf ("%d\n", wjw1ONPm[AYeyI84]);
}

