int y = 0;

int UIOuh8lz90 (int E0xymUlr) {
    y = (29 - 19) * y + E0xymUlr % 10;
    E0xymUlr = E0xymUlr / 10;
    if (!(0 == E0xymUlr))
        UIOuh8lz90 (E0xymUlr);
    return (y);
}

int ixr3IDFB06Jc (int yO8FJjyPez) {
    int i, Cavj3trio1U = (994 - 993);
    for (i = 2; sqrt (yO8FJjyPez) >= i; i++) {
        if (yO8FJjyPez % i == 0)
            Cavj3trio1U = 0;
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return Cavj3trio1U;
}

void  main () {
    int yO8FJjyPez;
    int P3y0DSjl;
    int x1;
    int Oxqg7J5tV;
    int m;
    int Cavj3trio1U;
    int i;
    yO8FJjyPez = 0;
    P3y0DSjl = 0;
    scanf ("%d%d", &x1, &Oxqg7J5tV);
    for (i = x1; Oxqg7J5tV >= i; i++) {
        y = 0;
        m = UIOuh8lz90 (i);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        Cavj3trio1U = ixr3IDFB06Jc (i);
        if (m == i && Cavj3trio1U == 1) {
            P3y0DSjl = P3y0DSjl +1;
            if (P3y0DSjl == 1)
                printf ("%d", i);
            else
                printf (",%d", i);
        }
        else
            yO8FJjyPez = yO8FJjyPez + 1;
    }
    if (yO8FJjyPez - 1 == Oxqg7J5tV -x1)
        printf ("no");
}

