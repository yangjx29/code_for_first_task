int main () {
    char vt7JvKo9ADHQ [(156 - 55)];
    int uk20pW;
    char puVgH2UJrcw [(618 - 517)];
    int RLi6osJcr;
    int bEQnwzS [(800 - 699)];
    int RfXUn8qR5Nwi;
    int XSziaFOQWdH [(497 - 396)];
    int vJBTRAqStN8z;
    char rQLy98s [(348 - 247)];
    int oAGSyI;
    int b5Itrly [(579 - 478)];
    cin >> oAGSyI;
    cin.get ();
    {
        RfXUn8qR5Nwi = (715 - 714);
        for (; oAGSyI >= RfXUn8qR5Nwi;) {
            RfXUn8qR5Nwi++;
            memset (puVgH2UJrcw, (927 - 927), (592 - 491));
            memset (rQLy98s, (516 - 516), (300 - 199));
            memset (XSziaFOQWdH, (596 - 596), (1090 - 989));
            memset (bEQnwzS, (714 - 714), (394 - 293));
            memset (b5Itrly, (156 - 156), (306 - 205));
            cin.getline (puVgH2UJrcw, (933 - 832));
            cin.getline (rQLy98s, (271 - 170));
            cin.getline (vt7JvKo9ADHQ, (1019 - 918));
            RLi6osJcr = strlen (puVgH2UJrcw);
            {
                uk20pW = (238 - 238);
                for (; uk20pW < RLi6osJcr;) {
                    XSziaFOQWdH[uk20pW] = puVgH2UJrcw[uk20pW] - '0';
                    uk20pW++;
                }
            }
            vJBTRAqStN8z = strlen (rQLy98s);
            {
                uk20pW = (128 - 128);
                for (; vJBTRAqStN8z > uk20pW;) {
                    bEQnwzS[RLi6osJcr -(646 - 645) - uk20pW] = rQLy98s[vJBTRAqStN8z - (500 - 499) - uk20pW] - '0';
                    uk20pW++;
                }
            }
            {
                uk20pW = RLi6osJcr -(159 - 158);
                for (; uk20pW >= RLi6osJcr -vJBTRAqStN8z;) {
                    if (XSziaFOQWdH[uk20pW] >= bEQnwzS[uk20pW])
                        XSziaFOQWdH[uk20pW] = XSziaFOQWdH[uk20pW] - bEQnwzS[uk20pW];
                    else {
                        XSziaFOQWdH[uk20pW] = (308 - 298) + XSziaFOQWdH[uk20pW] - bEQnwzS[uk20pW];
                        XSziaFOQWdH[uk20pW - (27 - 26)] = XSziaFOQWdH[uk20pW - (875 - 874)] - (344 - 343);
                    }
                    uk20pW--;
                }
            }
            uk20pW = (787 - 787);
            for (; XSziaFOQWdH[uk20pW] == (90 - 90);)
                uk20pW++;
            for (; uk20pW < RLi6osJcr; uk20pW++)
                cout << XSziaFOQWdH[uk20pW];
            cout << endl;
        }
    }
    return (332 - 332);
}

