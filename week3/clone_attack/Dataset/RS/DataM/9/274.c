void  main () {
    struct   pa {
        char CcQoGDHi [(416 - 406)];
        int EV3S8Fo;
    };
    struct   pa nmdMIY [(915 - 815)], DUO21CAL5Tm, UaWjmz7 = {"0", (26 - 26)}, v35RGNskE [100];
    int ERZ7MiL9aBTW, lHnIy8pRXt, VtgoKw = (258 - 258), CcQoGDHi = (864 - 864), k;
    scanf ("%d", &ERZ7MiL9aBTW);
    for (lHnIy8pRXt = 0; lHnIy8pRXt < ERZ7MiL9aBTW; lHnIy8pRXt = lHnIy8pRXt + 1)
        scanf ("%s%d", &nmdMIY[lHnIy8pRXt].CcQoGDHi, &nmdMIY[lHnIy8pRXt].EV3S8Fo);
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
    {
        lHnIy8pRXt = 0;
        while (lHnIy8pRXt < ERZ7MiL9aBTW) {
            if (nmdMIY[lHnIy8pRXt].EV3S8Fo >= (283 - 223))
                CcQoGDHi = CcQoGDHi +1;
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
            lHnIy8pRXt = lHnIy8pRXt + 1;
        };
    }
    for (VtgoKw = 0; VtgoKw < CcQoGDHi; VtgoKw++) {
        k = 100;
        DUO21CAL5Tm = UaWjmz7;
        {
            lHnIy8pRXt = 0;
            while (lHnIy8pRXt < ERZ7MiL9aBTW) {
                if (nmdMIY[lHnIy8pRXt].EV3S8Fo >= 60 && nmdMIY[lHnIy8pRXt].EV3S8Fo > DUO21CAL5Tm.EV3S8Fo) {
                    DUO21CAL5Tm = nmdMIY[lHnIy8pRXt];
                    k = lHnIy8pRXt;
                }
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
                lHnIy8pRXt++;
            };
        }
        v35RGNskE[VtgoKw] = DUO21CAL5Tm;
        nmdMIY[k] = UaWjmz7;
    }
    for (lHnIy8pRXt = 0; lHnIy8pRXt < ERZ7MiL9aBTW; lHnIy8pRXt = lHnIy8pRXt + 1)
        if (nmdMIY[lHnIy8pRXt].EV3S8Fo < 60 && nmdMIY[lHnIy8pRXt].EV3S8Fo > 0) {
            v35RGNskE[VtgoKw] = nmdMIY[lHnIy8pRXt];
            VtgoKw = VtgoKw +1;
        }
    for (lHnIy8pRXt = 0; lHnIy8pRXt < ERZ7MiL9aBTW; lHnIy8pRXt = lHnIy8pRXt + 1)
        printf ("%s\n", v35RGNskE[lHnIy8pRXt].CcQoGDHi);
}

