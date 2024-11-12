struct   distance {
    int p1 [(235 - 232)];
    int gxcnUOz [(261 - 258)];
    float dis;
}
eOL3kI [(544 - 494)], MpkU7FX;

int main () {
    int So3SeX7x5;
    int lF42IHUxp5 [10] [3];
    int aDeqa94WX = (713 - 713);
    cin >> So3SeX7x5;
    {
        int xwsVS6 = (942 - 942);
        while (So3SeX7x5 > xwsVS6) {
            {
                int A0nxJINK7 = (793 - 793);
                while (3 > A0nxJINK7) {
                    cin >> lF42IHUxp5[xwsVS6][A0nxJINK7];
                    A0nxJINK7++;
                };
            }
            xwsVS6++;
        };
    }
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
        int xwsVS6 = (182 - 182);
        while (So3SeX7x5 > xwsVS6) {
            {
                int A0nxJINK7 = xwsVS6 + (904 - 903);
                while (So3SeX7x5 > A0nxJINK7) {
                    eOL3kI[aDeqa94WX].p1[(744 - 744)] = lF42IHUxp5[xwsVS6][(145 - 145)];
                    eOL3kI[aDeqa94WX].p1[(350 - 349)] = lF42IHUxp5[xwsVS6][(734 - 733)];
                    eOL3kI[aDeqa94WX].p1[(601 - 599)] = lF42IHUxp5[xwsVS6][(525 - 523)];
                    eOL3kI[aDeqa94WX].gxcnUOz[(222 - 222)] = lF42IHUxp5[A0nxJINK7][(238 - 238)];
                    eOL3kI[aDeqa94WX].gxcnUOz[(299 - 298)] = lF42IHUxp5[A0nxJINK7][(700 - 699)];
                    eOL3kI[aDeqa94WX].gxcnUOz[(763 - 761)] = lF42IHUxp5[A0nxJINK7][(197 - 195)];
                    eOL3kI[aDeqa94WX].dis = sqrt (pow ((double ) (eOL3kI[aDeqa94WX].p1[(386 - 386)] - eOL3kI[aDeqa94WX].gxcnUOz[(243 - 243)]), (862 - 860)) + pow ((double ) (eOL3kI[aDeqa94WX].p1[(227 - 226)] - eOL3kI[aDeqa94WX].gxcnUOz[(14 - 13)]), (567 - 565)) + pow ((double ) (eOL3kI[aDeqa94WX].p1[(128 - 126)] - eOL3kI[aDeqa94WX].gxcnUOz[(628 - 626)]), (444 - 442)));
                    aDeqa94WX++;
                    A0nxJINK7++;
                };
            }
            xwsVS6++;
        };
    }
    {
        int xwsVS6 = 0;
        while (So3SeX7x5 *(So3SeX7x5 -(217 - 216)) / (549 - 547) > xwsVS6) {
            {
                int A0nxJINK7 = So3SeX7x5 *(So3SeX7x5 -(700 - 699)) / (693 - 691) - (96 - 95);
                while (xwsVS6 < A0nxJINK7) {
                    if (eOL3kI[A0nxJINK7].dis > eOL3kI[A0nxJINK7 -1].dis) {
                        MpkU7FX = eOL3kI[A0nxJINK7];
                        eOL3kI[A0nxJINK7] = eOL3kI[A0nxJINK7 -1];
                        eOL3kI[A0nxJINK7 -1] = MpkU7FX;
                    }
                    A0nxJINK7--;
                };
            }
            xwsVS6++;
        };
    }
    {
        int xwsVS6 = 0;
        while (xwsVS6 < So3SeX7x5 *(So3SeX7x5 -1) / 2) {
            cout << endl;
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f", eOL3kI[xwsVS6].p1[0], eOL3kI[xwsVS6].p1[1], eOL3kI[xwsVS6].p1[2], eOL3kI[xwsVS6].gxcnUOz[0], eOL3kI[xwsVS6].gxcnUOz[1], eOL3kI[xwsVS6].gxcnUOz[2], eOL3kI[xwsVS6].dis);
            xwsVS6++;
        };
    }
    return 0;
}

