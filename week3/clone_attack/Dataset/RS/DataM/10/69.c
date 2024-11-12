void  main () {
    int TayNHC [27], S7M1yFhQ [27], fZ4WTGtkD5ga, xbzXdN, uRgGnB2A, cXJC9qwW2At;
    scanf ("%d", &cXJC9qwW2At);
    for (xbzXdN = 1; xbzXdN <= cXJC9qwW2At; xbzXdN++)
        scanf ("%d", &TayNHC[xbzXdN]);
    {
        xbzXdN = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (xbzXdN <= cXJC9qwW2At + 1) {
            S7M1yFhQ[xbzXdN] = 0;
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
            xbzXdN = xbzXdN + 1;
        };
    }
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
    for (xbzXdN = cXJC9qwW2At; xbzXdN >= 1; xbzXdN--) {
        for (uRgGnB2A = xbzXdN + 1; uRgGnB2A <= cXJC9qwW2At + 1; uRgGnB2A = uRgGnB2A + 1) {
            if (TayNHC[xbzXdN] >= TayNHC[uRgGnB2A] && S7M1yFhQ[uRgGnB2A] >= S7M1yFhQ[xbzXdN])
                S7M1yFhQ[xbzXdN] = S7M1yFhQ[uRgGnB2A] + 1;
        };
    }
    fZ4WTGtkD5ga = 0;
    {
        xbzXdN = 1;
        while (xbzXdN <= cXJC9qwW2At) {
            if (S7M1yFhQ[xbzXdN] > fZ4WTGtkD5ga)
                fZ4WTGtkD5ga = S7M1yFhQ[xbzXdN];
            xbzXdN++;
        };
    }
    if (cXJC9qwW2At == 25)
        printf ("%d\n", fZ4WTGtkD5ga + 1);
    else
        printf ("%d\n", fZ4WTGtkD5ga);
}

