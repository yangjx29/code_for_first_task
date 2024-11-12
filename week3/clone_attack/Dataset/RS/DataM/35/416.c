int main () {
    int CgpLYfClFs;
    int Ql5ZMgv8cy;
    int u3L1l8wy;
    int a6NFPXmjW;
    int ouUG9K4;
    int S7otlu;
    int jHTXaQh279fG;
    int bK7mtCSu05n;
    int j4nNdoCBsTu;
    int NDePkT;
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
    int ny3HjLOWp [8] [8];
    S7otlu = -1;
    scanf ("%d,%d\n", &u3L1l8wy, &a6NFPXmjW);
    for (CgpLYfClFs = (271 - 271); u3L1l8wy > CgpLYfClFs; CgpLYfClFs = CgpLYfClFs +1) {
        for (Ql5ZMgv8cy = (856 - 856); a6NFPXmjW > Ql5ZMgv8cy; Ql5ZMgv8cy = Ql5ZMgv8cy +1)
            scanf ("%d", &ny3HjLOWp[CgpLYfClFs][Ql5ZMgv8cy]);
    }
    jHTXaQh279fG = -1;
    {
        CgpLYfClFs = 0;
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
        while (u3L1l8wy > CgpLYfClFs) {
            ouUG9K4 = CgpLYfClFs;
            j4nNdoCBsTu = ny3HjLOWp[ouUG9K4][0];
            for (Ql5ZMgv8cy = 0; Ql5ZMgv8cy < a6NFPXmjW; Ql5ZMgv8cy++) {
                if (j4nNdoCBsTu < ny3HjLOWp[ouUG9K4][Ql5ZMgv8cy])
                    j4nNdoCBsTu = ny3HjLOWp[ouUG9K4][Ql5ZMgv8cy];
            }
            for (Ql5ZMgv8cy = 0; Ql5ZMgv8cy < a6NFPXmjW; Ql5ZMgv8cy++) {
                bK7mtCSu05n = -1;
                if (!(j4nNdoCBsTu != ny3HjLOWp[ouUG9K4][Ql5ZMgv8cy])) {
                    bK7mtCSu05n = j4nNdoCBsTu;
                    for (NDePkT = 0; u3L1l8wy > NDePkT; NDePkT++) {
                        if (ny3HjLOWp[NDePkT][Ql5ZMgv8cy] < bK7mtCSu05n)
                            bK7mtCSu05n = ny3HjLOWp[NDePkT][Ql5ZMgv8cy];
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
                    if (bK7mtCSu05n == ny3HjLOWp[ouUG9K4][Ql5ZMgv8cy]) {
                        jHTXaQh279fG = Ql5ZMgv8cy;
                        S7otlu = ouUG9K4;
                        printf ("%d+%d\n", S7otlu, jHTXaQh279fG);
                    };
                };
            }
            CgpLYfClFs = CgpLYfClFs +1;
        };
    }
    if (S7otlu == -1)
        ;
    return 0;
}

