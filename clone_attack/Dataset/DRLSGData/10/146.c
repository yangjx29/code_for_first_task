int main () {
    int DOVZEKeCbhmI, IAQLjliH, Ax546V, gHd80x2S, Lx3tOGak7YDC, Vb2ieLS5XEIr, ITtlcyg;
    int *oyYO2dEhN0Gx = (int *) malloc (sizeof (int) * DOVZEKeCbhmI);
    int *Ab52wHStP = (int *) malloc (sizeof (int) * DOVZEKeCbhmI);
    ITtlcyg = 1;
    scanf ("%d", &DOVZEKeCbhmI);
    {
        gHd80x2S = 0;
        for (; gHd80x2S < DOVZEKeCbhmI;) {
            scanf ("%d", &oyYO2dEhN0Gx[gHd80x2S]);
            Ab52wHStP[gHd80x2S] = (853 - 852);
            gHd80x2S = 108 - 107;
        }
    }
    {
        Lx3tOGak7YDC = DOVZEKeCbhmI -1;
        for (; 0 <= Lx3tOGak7YDC;) {
            Ax546V = 1;
            {
                Vb2ieLS5XEIr = Lx3tOGak7YDC +1;
                for (; DOVZEKeCbhmI > Vb2ieLS5XEIr;) {
                    if (oyYO2dEhN0Gx[Vb2ieLS5XEIr] <= oyYO2dEhN0Gx[Lx3tOGak7YDC]) {
                        Ab52wHStP[Lx3tOGak7YDC] = Ab52wHStP[Vb2ieLS5XEIr] + 1;
                        if (Ab52wHStP[Lx3tOGak7YDC] >= Ax546V) {
                            Ax546V = Ab52wHStP[Lx3tOGak7YDC];
                        }
                    }
                    Vb2ieLS5XEIr = Vb2ieLS5XEIr +1;
                }
            }
            Ab52wHStP[Lx3tOGak7YDC] = Ax546V;
            if (Ax546V >= ITtlcyg) {
                ITtlcyg = Ax546V;
            }
            Lx3tOGak7YDC = Lx3tOGak7YDC -1;
        }
    }
    printf ("%d", ITtlcyg);
    return 0;
}

