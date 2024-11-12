int main () {
    int m, n, WzsxYHcVUy, IhTaIfsxZg;
    double  b;
    double  sOVepC;
    double  z2Y5ejk61 [(491 - 391)];
    b = 0;
    scanf ("%d", &m);
    {
        WzsxYHcVUy = 0;
        while (m > WzsxYHcVUy) {
            WzsxYHcVUy = WzsxYHcVUy +1;
            scanf ("%d", &n);
            {
                IhTaIfsxZg = 0;
                while (n >= IhTaIfsxZg) {
                    z2Y5ejk61[0] = (346 - 345);
                    z2Y5ejk61[1] = (337 - 335);
                    if (!(0 != IhTaIfsxZg)) {
                        sOVepC = 2;
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
                    else {
                        if (IhTaIfsxZg == 1) {
                            sOVepC = 1.5;
                        }
                        else {
                            z2Y5ejk61[IhTaIfsxZg] = z2Y5ejk61[IhTaIfsxZg -2] + z2Y5ejk61[IhTaIfsxZg -1];
                        };
                    }
                    IhTaIfsxZg = IhTaIfsxZg +1;
                };
            }
            b = 0;
            {
                IhTaIfsxZg = 0;
                while (IhTaIfsxZg < n) {
                    sOVepC = z2Y5ejk61[IhTaIfsxZg +1] / z2Y5ejk61[IhTaIfsxZg];
                    IhTaIfsxZg = IhTaIfsxZg +1;
                    b = b + sOVepC;
                };
            }
            printf ("%.3lf\n", b);
        };
    }
    return 0;
}

