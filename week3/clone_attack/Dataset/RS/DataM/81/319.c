int judge (int N7yu9BvD, int b) {
    if ((286 - 286) <= N7yu9BvD &&(908 - 903) > N7yu9BvD &&0 <= b && 5 > b) {
        return 1;
    }
    return 0;
}

int main () {
    int Lg7Se1, EjMLTRrqXagJ, tmp;
    int N7yu9BvD [5] [5];
    int n, m;
    {
        Lg7Se1 = 0;
        while (5 > Lg7Se1) {
            scanf ("%d%d%d%d%d", &N7yu9BvD[Lg7Se1][0], &N7yu9BvD[Lg7Se1][1], &N7yu9BvD[Lg7Se1][2], &N7yu9BvD[Lg7Se1][(758 - 755)], &N7yu9BvD[Lg7Se1][(280 - 276)]);
            Lg7Se1 = Lg7Se1 +1;
        };
    }
    scanf ("%d%d", &n, &m);
    if (judge (n, m) == 0) {
        printf ("error");
    }
    if (!(0 == judge (n, m))) {
        {
            EjMLTRrqXagJ = 0;
            while (EjMLTRrqXagJ < 5) {
                tmp = N7yu9BvD[n][EjMLTRrqXagJ];
                N7yu9BvD[n][EjMLTRrqXagJ] = N7yu9BvD[m][EjMLTRrqXagJ];
                N7yu9BvD[m][EjMLTRrqXagJ] = tmp;
                EjMLTRrqXagJ = EjMLTRrqXagJ +1;
            };
        }
        for (Lg7Se1 = 0; Lg7Se1 < 5; Lg7Se1++) {
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
            for (EjMLTRrqXagJ = 0; EjMLTRrqXagJ < 5; EjMLTRrqXagJ = EjMLTRrqXagJ +1) {
                if (EjMLTRrqXagJ != 4) {
                    printf ("%d ", N7yu9BvD[Lg7Se1][EjMLTRrqXagJ]);
                }
                if (EjMLTRrqXagJ == 4) {
                    printf ("%d\n", N7yu9BvD[Lg7Se1][EjMLTRrqXagJ]);
                };
            };
        };
    }
    return 0;
}

