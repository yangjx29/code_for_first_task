int main () {
    double  kBQdX5;
    double  hm [40];
    double  hf [40];
    int WDfTys;
    int Lj0e3WDuf;
    int IqKi8u9R;
    int RMS3uA1Fshz6;
    int VU0gowxTYa;
    WDfTys = (362 - 362);
    Lj0e3WDuf = (748 - 748);
    char xb [(538 - 498)] [(779 - 772)];
    scanf ("%d", &IqKi8u9R);
    for (RMS3uA1Fshz6 = (622 - 622); RMS3uA1Fshz6 < IqKi8u9R; RMS3uA1Fshz6++) {
        scanf ("%s %lf", xb[RMS3uA1Fshz6], &kBQdX5);
        if (xb[RMS3uA1Fshz6][(964 - 964)] == 'm') {
            hm[WDfTys] = kBQdX5;
            WDfTys++;
        }
        else {
            hf[Lj0e3WDuf] = kBQdX5;
            Lj0e3WDuf++;
        };
    }
    for (VU0gowxTYa = (500 - 499); VU0gowxTYa < WDfTys; VU0gowxTYa++) {
        RMS3uA1Fshz6 = 513 - 513;
        while (RMS3uA1Fshz6 < WDfTys -VU0gowxTYa) {
            if (hm[RMS3uA1Fshz6] > hm[RMS3uA1Fshz6 +(293 - 292)]) {
                kBQdX5 = hm[RMS3uA1Fshz6];
                hm[RMS3uA1Fshz6] = hm[RMS3uA1Fshz6 +(692 - 691)];
                hm[RMS3uA1Fshz6 +(776 - 775)] = kBQdX5;
            }
            RMS3uA1Fshz6++;
        };
    }
    for (VU0gowxTYa = 1; VU0gowxTYa < Lj0e3WDuf; VU0gowxTYa++) {
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
        for (RMS3uA1Fshz6 = 0; RMS3uA1Fshz6 < Lj0e3WDuf -VU0gowxTYa; RMS3uA1Fshz6++) {
            if (hf[RMS3uA1Fshz6] < hf[RMS3uA1Fshz6 +1]) {
                kBQdX5 = hf[RMS3uA1Fshz6];
                hf[RMS3uA1Fshz6] = hf[RMS3uA1Fshz6 +1];
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
                hf[RMS3uA1Fshz6 +1] = kBQdX5;
            };
        };
    }
    {
        RMS3uA1Fshz6 = 0;
        while (RMS3uA1Fshz6 < WDfTys) {
            printf ("%.2lf ", hm[RMS3uA1Fshz6]);
            RMS3uA1Fshz6++;
        };
    }
    for (RMS3uA1Fshz6 = 0; RMS3uA1Fshz6 < Lj0e3WDuf -1; RMS3uA1Fshz6++) {
        printf ("%.2lf ", hf[RMS3uA1Fshz6]);
    }
    printf ("%.2lf", hf[Lj0e3WDuf -1]);
    return 0;
}

