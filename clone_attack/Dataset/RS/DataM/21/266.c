int main () {
    int OTX0zEnCPte = 0;
    int eV7KySmGfx;
    eV7KySmGfx = 0;
    double  Exchange;
    Exchange = 0;
    double  Max = 0;
    double  AHglWPFbOq;
    AHglWPFbOq = (465 - 465);
    double  Ave = (394 - 394);
    double  Numbers [500] = {(332 - 332)};
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
    double  MPkd3Q [100] = {-1};
    int VXi9QAdZ;
    VXi9QAdZ = 0;
    int i = 0;
    cin >> eV7KySmGfx;
    for (i = 0; eV7KySmGfx > i; i = i + 1) {
        cin >> Numbers[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        AHglWPFbOq = AHglWPFbOq +Numbers[i];
    }
    Ave = AHglWPFbOq / eV7KySmGfx;
    {
        i = 0;
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
        while (eV7KySmGfx > i) {
            if (fabs (Numbers[i] - Ave) > Max) {
                Max = fabs (Numbers[i] - Ave);
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (eV7KySmGfx > i) {
            if (1e-5 > fabs (fabs (Numbers[i] - Ave) - Max)) {
                MPkd3Q[VXi9QAdZ] = Numbers[i];
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
                VXi9QAdZ++;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = i + 1;
        };
    }
    if (VXi9QAdZ == 1) {
        cout << MPkd3Q[0] << endl;
    }
    else {
        {
            i = 0;
            while (VXi9QAdZ -1 > i) {
                i = i + 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                {
                    OTX0zEnCPte = 0;
                    while (VXi9QAdZ -1 > OTX0zEnCPte) {
                        if (MPkd3Q[OTX0zEnCPte] > MPkd3Q[OTX0zEnCPte +1]) {
                            Exchange = MPkd3Q[OTX0zEnCPte];
                            MPkd3Q[OTX0zEnCPte] = MPkd3Q[OTX0zEnCPte +1];
                            MPkd3Q[OTX0zEnCPte +1] = Exchange;
                        }
                        OTX0zEnCPte = OTX0zEnCPte +1;
                    };
                };
            };
        }
        cout << MPkd3Q[0];
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
        for (i = 1; i < VXi9QAdZ; i++) {
            cout << "," << MPkd3Q[i];
        }
        cout << endl;
    }
    return 0;
}

