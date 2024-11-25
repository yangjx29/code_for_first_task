main () {
    int vY9rkcJw;
    vY9rkcJw = 0;
    int n, i, fIX4z7kGbm3, Omflv0;
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
    scanf ("%d", &n);
    fIX4z7kGbm3 = i + 2;
    {
        i = 1;
        while (i <= (n - 2)) {
            fIX4z7kGbm3 = i + 2;
            if (i == 1)
                continue;
            {
                Omflv0 = 2;
                while (1) {
                    if ((i % Omflv0 == 0) || (fIX4z7kGbm3 % Omflv0 == 0))
                        break;
                    Omflv0 = Omflv0 +1;
                };
            }
            if ((Omflv0 == i) && (fIX4z7kGbm3 % Omflv0 != 0) && (fIX4z7kGbm3 % (Omflv0 +1) != 0)) {
                printf ("%d %d\n", i, fIX4z7kGbm3);
                vY9rkcJw = vY9rkcJw + 1;
            }
            i++;
        };
    }
    if (vY9rkcJw == 0)
        ;
}

