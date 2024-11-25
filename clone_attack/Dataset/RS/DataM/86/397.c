int main () {
    int KXhzeZl;
    int ZT5CR8Xm;
    int Yl1GLpC;
    int gFzTafCM0i6V;
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
    scanf ("%d", &KXhzeZl);
    {
        gFzTafCM0i6V = 0;
        while (gFzTafCM0i6V < KXhzeZl) {
            int W4awyFmK;
            scanf ("%d", &W4awyFmK);
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
            if (W4awyFmK == 0) {
                Yl1GLpC = 60;
                printf ("%d\n", Yl1GLpC);
            }
            else {
                int *S0VTlRxbN = (int *) malloc (sizeof (int) * W4awyFmK);
                free (S0VTlRxbN);
                for (ZT5CR8Xm = 0; ZT5CR8Xm < W4awyFmK; ZT5CR8Xm = ZT5CR8Xm +1) {
                    scanf ("%d", &S0VTlRxbN[ZT5CR8Xm]);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    };
                }
                if (S0VTlRxbN[W4awyFmK -1] > 60 - (296 - 293) * (W4awyFmK -1) - 1) {
                    int BFDXGk4AdwRH;
                    int sXembyK;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                    sXembyK = W4awyFmK -2;
                    for (BFDXGk4AdwRH = sXembyK; 0 <= BFDXGk4AdwRH; BFDXGk4AdwRH = BFDXGk4AdwRH -1) {
                        if (60 - (519 - 516) * BFDXGk4AdwRH -1 < S0VTlRxbN[BFDXGk4AdwRH])
                            continue;
                        if ((S0VTlRxbN[BFDXGk4AdwRH] <= 60 - 3 * BFDXGk4AdwRH -1) && (S0VTlRxbN[BFDXGk4AdwRH] > 60 - 3 * BFDXGk4AdwRH -3)) {
                            Yl1GLpC = S0VTlRxbN[BFDXGk4AdwRH];
                            break;
                        }
                        if (S0VTlRxbN[BFDXGk4AdwRH] <= 60 - 3 * BFDXGk4AdwRH -3) {
                            Yl1GLpC = 60 - 3 * BFDXGk4AdwRH -3;
                            break;
                        };
                    };
                }
                if ((S0VTlRxbN[W4awyFmK -1] <= 60 - 3 * (W4awyFmK -1) - 1) && (S0VTlRxbN[W4awyFmK -1] > 60 - 3 * (W4awyFmK -1) - 3))
                    Yl1GLpC = S0VTlRxbN[W4awyFmK -1];
                if (S0VTlRxbN[W4awyFmK -1] <= 60 - 3 * (W4awyFmK -1) - 3)
                    Yl1GLpC = 60 - 3 * (W4awyFmK -1) - 3;
                printf ("%d\n", Yl1GLpC);
            }
            gFzTafCM0i6V++;
        };
    }
    return 0;
}

