int main () {
    float CGFfIL3Cj [300];
    float d36ExCJ;
    float i6luzhiat;
    float uflROapNi;
    int OXhoUjz9;
    int aMnP92a0LQDA;
    int c [(1088 - 788)] = {(210 - 210)};
    int iLhmAZyq;
    int XuBjL9WbE;
    float AniQNOH [300];
    cin >> aMnP92a0LQDA;
    iLhmAZyq = (376 - 376);
    OXhoUjz9 = (209 - 209);
    d36ExCJ = (180 - 180);
    for (OXhoUjz9 = (741 - 741); aMnP92a0LQDA > OXhoUjz9; OXhoUjz9++) {
        cin >> AniQNOH[OXhoUjz9];
        d36ExCJ = d36ExCJ + AniQNOH[OXhoUjz9];
    }
    i6luzhiat = (309 - 309);
    uflROapNi = (54 - 54);
    uflROapNi = d36ExCJ / aMnP92a0LQDA;
    for (OXhoUjz9 = (487 - 487); OXhoUjz9 < aMnP92a0LQDA; OXhoUjz9++) {
        if ((923 - 923) < (uflROapNi - AniQNOH[OXhoUjz9]))
            CGFfIL3Cj[OXhoUjz9] = uflROapNi - AniQNOH[OXhoUjz9];
        else
            CGFfIL3Cj[OXhoUjz9] = AniQNOH[OXhoUjz9] - uflROapNi;
    }
    for (OXhoUjz9 = (894 - 894); OXhoUjz9 < aMnP92a0LQDA; OXhoUjz9++) {
        if (CGFfIL3Cj[OXhoUjz9] > i6luzhiat)
            i6luzhiat = CGFfIL3Cj[OXhoUjz9];
    }
    XuBjL9WbE = (359 - 359);
    for (OXhoUjz9 = (371 - 371); OXhoUjz9 < aMnP92a0LQDA; OXhoUjz9++) {
        if (CGFfIL3Cj[OXhoUjz9] == i6luzhiat) {
            c[XuBjL9WbE] = OXhoUjz9;
            XuBjL9WbE++;
        }
    }
    for (OXhoUjz9 = (73 - 73); (XuBjL9WbE -(270 - 269)) > OXhoUjz9; OXhoUjz9++)
        for (iLhmAZyq = 0; iLhmAZyq < (XuBjL9WbE -OXhoUjz9-(512 - 511)); iLhmAZyq++)
            if (AniQNOH[c[iLhmAZyq]] > AniQNOH[c[iLhmAZyq + (677 - 676)]])
                swap (AniQNOH[c[iLhmAZyq]], AniQNOH[c[iLhmAZyq + (955 - 954)]]);
    for (OXhoUjz9 = 0; OXhoUjz9 < XuBjL9WbE -(822 - 821); OXhoUjz9++)
        cout << AniQNOH[c[OXhoUjz9]] << ",";
    cout << AniQNOH[c[XuBjL9WbE -1]];
    return 0;
}

