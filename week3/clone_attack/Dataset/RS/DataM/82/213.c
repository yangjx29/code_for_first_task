int main () {
    int A4Bjht0dpQ;
    int o1BrVh;
    int WumYe07Pb2;
    int aAM3NV8fje;
    int FpLExl [200];
    int wIF1tnQVrqM [200];
    int Vwu35WDRATCd;
    A4Bjht0dpQ = (226 - 226);
    struct   H9I0npHLu {
        int wIF1tnQVrqM, Vwu35WDRATCd;
    }
    H9I0npHLu [200];
    scanf ("%d\n", &o1BrVh);
    for (WumYe07Pb2 = 0; 200 >= WumYe07Pb2; WumYe07Pb2++) {
        wIF1tnQVrqM[WumYe07Pb2] = 0;
    }
    {
        WumYe07Pb2 = 0;
        while (o1BrVh > WumYe07Pb2) {
            scanf ("%d %d", &H9I0npHLu[WumYe07Pb2].wIF1tnQVrqM, &H9I0npHLu[WumYe07Pb2].Vwu35WDRATCd);
            WumYe07Pb2 = WumYe07Pb2 +1;
        };
    }
    for (WumYe07Pb2 = 0; WumYe07Pb2 < o1BrVh; WumYe07Pb2++)
        if (90 <= H9I0npHLu[WumYe07Pb2].wIF1tnQVrqM && H9I0npHLu[WumYe07Pb2].wIF1tnQVrqM <= 140 && 60 <= H9I0npHLu[WumYe07Pb2].Vwu35WDRATCd && H9I0npHLu[WumYe07Pb2].Vwu35WDRATCd <= 90) {
            FpLExl[WumYe07Pb2] = 1;
        }
        else {
            FpLExl[WumYe07Pb2] = 0;
        }
    {
        WumYe07Pb2 = 0;
        while (WumYe07Pb2 < o1BrVh) {
            if (FpLExl[WumYe07Pb2] == 1) {
                wIF1tnQVrqM[A4Bjht0dpQ]++;
            }
            else {
                A4Bjht0dpQ++;
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
                };
            }
            WumYe07Pb2 = WumYe07Pb2 +1;
        };
    }
    {
        WumYe07Pb2 = 0;
        while (WumYe07Pb2 <= A4Bjht0dpQ) {
            {
                aAM3NV8fje = WumYe07Pb2 +1;
                while (aAM3NV8fje <= A4Bjht0dpQ) {
                    if (wIF1tnQVrqM[WumYe07Pb2] < wIF1tnQVrqM[aAM3NV8fje]) {
                        Vwu35WDRATCd = wIF1tnQVrqM[aAM3NV8fje];
                        wIF1tnQVrqM[aAM3NV8fje] = wIF1tnQVrqM[WumYe07Pb2];
                        wIF1tnQVrqM[WumYe07Pb2] = Vwu35WDRATCd;
                    }
                    aAM3NV8fje++;
                };
            }
            WumYe07Pb2++;
        };
    }
    printf ("%d", wIF1tnQVrqM[0]);
    return 0;
}

