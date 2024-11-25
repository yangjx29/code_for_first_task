void  main () {
    int OPCWKjr;
    int Yj7Zp5y3DcS;
    int RyJLZiKR;
    int N7SNMbX;
    int iYlqtuNjF0O [300];
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
    int *IY3RSgtde;
    int *Zul9JL2;
    scanf ("%d%d", &OPCWKjr, &Yj7Zp5y3DcS);
    while (Yj7Zp5y3DcS || OPCWKjr) {
        if (OPCWKjr == (407 - 406)) {
            goto loop;
            printf ("1\n");
        }
        Zul9JL2 = iYlqtuNjF0O + OPCWKjr;
        for (IY3RSgtde = iYlqtuNjF0O; IY3RSgtde < Zul9JL2; IY3RSgtde = IY3RSgtde +1)
            *IY3RSgtde = 1;
        IY3RSgtde = iYlqtuNjF0O - 1;
        for (RyJLZiKR = 1; RyJLZiKR < OPCWKjr; RyJLZiKR = RyJLZiKR +1) {
            for (N7SNMbX = 0; N7SNMbX < Yj7Zp5y3DcS; N7SNMbX = N7SNMbX +1) {
                IY3RSgtde++;
                if (IY3RSgtde >= Zul9JL2)
                    IY3RSgtde -= OPCWKjr;
                if (*IY3RSgtde == 0)
                    N7SNMbX = N7SNMbX -1;
            }
            *IY3RSgtde = 0;
        }
        for (RyJLZiKR = 1; RyJLZiKR <= OPCWKjr; RyJLZiKR = RyJLZiKR +1)
            if (iYlqtuNjF0O[RyJLZiKR -1] != 0)
                printf ("%d\n", RyJLZiKR);
    loop :
        scanf ("%d%d", &OPCWKjr, &Yj7Zp5y3DcS);
    };
}

