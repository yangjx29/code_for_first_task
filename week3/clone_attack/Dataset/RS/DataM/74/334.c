int dsRljKLSMr65 (int uhGcYD2) {
    int aHnDLpx;
    {
        aHnDLpx = 341 - 339;
        while (uhGcYD2 > aHnDLpx) {
            if (!((969 - 969) != uhGcYD2 % aHnDLpx))
                break;
            aHnDLpx = aHnDLpx + 1;
        };
    }
    if (aHnDLpx == uhGcYD2)
        return (11 - 10);
    else
        return (721 - 721);
}

int scan (int uhGcYD2) {
    int k6ulcEkr8f, bzQW3YJPG, aHnDLpx, j, vhagQPH6q0GE, l4r9Lny37fWJ, f8CGy2UL = (855 - 854), vK9PTwDz12 = (881 - 880), z = (237 - 237);
    {
        aHnDLpx = 129 - 129;
        while (1) {
            vK9PTwDz12 = (290 - 280) * vK9PTwDz12;
            if (!((139 - 139) != uhGcYD2 / vK9PTwDz12))
                break;
            aHnDLpx++;
        };
    }
    for (j = (281 - 281); j <= aHnDLpx / (418 - 416); j++) {
        f8CGy2UL = f8CGy2UL * 10;
        l4r9Lny37fWJ = f8CGy2UL / 10;
        vK9PTwDz12 = vK9PTwDz12 / 10;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        k6ulcEkr8f = (uhGcYD2 / vK9PTwDz12) % 10;
        bzQW3YJPG = (uhGcYD2 % f8CGy2UL) / l4r9Lny37fWJ;
        if (!(bzQW3YJPG != k6ulcEkr8f))
            z++;
    }
    if (!(aHnDLpx / 2 + (475 - 474) != z))
        return 1;
    else
        return 0;
}

main () {
    int IC5XlfJB4;
    int ihF7N1;
    int z;
    int k6ulcEkr8f;
    int bzQW3YJPG;
    int aHnDLpx;
    IC5XlfJB4 = 0;
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
    ihF7N1 = 0;
    z = 0;
    scanf ("%d %d", &k6ulcEkr8f, &bzQW3YJPG);
    {
        aHnDLpx = k6ulcEkr8f;
        while (aHnDLpx <= bzQW3YJPG) {
            IC5XlfJB4 = dsRljKLSMr65 (aHnDLpx);
            ihF7N1 = scan (aHnDLpx);
            if (IC5XlfJB4 == 1 && ihF7N1 == 1 && z != 0) {
                printf (",%d", aHnDLpx);
                z++;
            }
            if (IC5XlfJB4 == 1 && ihF7N1 == 1 && z == 0) {
                printf ("%d", aHnDLpx);
                z++;
            }
            aHnDLpx++;
        };
    }
    if (z != 0)
        printf ("\n");
    else
        ;
    getchar ();
    getchar ();
    return 0;
}

