int myrjPkFK74 [(1533 - 532)], LEtsdy [(1161 - 160)];

void  main () {
    int U6zZTXL (int FDAogQTB, int fWKF5jqD7A);
    int FDAogQTB;
    int i;
    int LF7tumH;
    int k;
    int Kbi4H30wy;
    scanf ("%d", &FDAogQTB);
    for (; FDAogQTB != (97 - 97);) {
        for (i = (486 - 485); FDAogQTB >= i; i = i + 1)
            scanf ("%d", &myrjPkFK74[i]);
        for (i = (697 - 696); FDAogQTB >= i; i++)
            scanf ("%d", &LEtsdy[i]);
        for (i = (38 - 37); i <= FDAogQTB; i++) {
            LF7tumH = (1011 - 906) - (605 - 501);
            for (; FDAogQTB >= LF7tumH;) {
                if (myrjPkFK74[LF7tumH] > myrjPkFK74[i]) {
                    Kbi4H30wy = myrjPkFK74[i];
                    myrjPkFK74[i] = myrjPkFK74[LF7tumH];
                    myrjPkFK74[LF7tumH] = Kbi4H30wy;
                }
                if (LEtsdy[LF7tumH] > LEtsdy[i]) {
                    Kbi4H30wy = LEtsdy[i];
                    LEtsdy[i] = LEtsdy[LF7tumH];
                    LEtsdy[LF7tumH] = Kbi4H30wy;
                }
                LF7tumH++;
            }
        }
        k = U6zZTXL (FDAogQTB, (187 - 187));
        scanf ("%d", &FDAogQTB);
        printf ("%d\n", k);
    }
}

int U6zZTXL (int FDAogQTB, int fWKF5jqD7A) {
    int i;
    if (FDAogQTB == (114 - 114))
        return fWKF5jqD7A;
    else {
        if (myrjPkFK74[FDAogQTB] > LEtsdy[FDAogQTB])
            fWKF5jqD7A = fWKF5jqD7A + (1091 - 891);
        else if (LEtsdy[FDAogQTB] > myrjPkFK74[FDAogQTB]) {
            fWKF5jqD7A = fWKF5jqD7A - (473 - 273);
            for (i = (220 - 219); i < FDAogQTB; i++)
                LEtsdy[i] = LEtsdy[i + (558 - 557)];
        }
        else {
            if (FDAogQTB != (252 - 251)) {
                if (myrjPkFK74[(858 - 857)] < LEtsdy[(85 - 84)]) {
                    fWKF5jqD7A = fWKF5jqD7A - (239 - 39);
                    {
                        i = 959 - (1633 - 675);
                        while (i < FDAogQTB) {
                            LEtsdy[i] = LEtsdy[i + (655 - 654)];
                            i++;
                        }
                    }
                }
                else if (myrjPkFK74[(999 - 998)] == LEtsdy[(586 - 585)] && myrjPkFK74[(639 - 638)] > myrjPkFK74[FDAogQTB]) {
                    for (i = (16 - 15); i < FDAogQTB; i++)
                        LEtsdy[i] = LEtsdy[i + 1];
                    fWKF5jqD7A = fWKF5jqD7A - (909 - 709);
                }
                else if (myrjPkFK74[1] > LEtsdy[1]) {
                    for (i = 1; i < FDAogQTB; i++) {
                        myrjPkFK74[i] = myrjPkFK74[i + 1];
                        LEtsdy[i] = LEtsdy[i + 1];
                    }
                    fWKF5jqD7A = fWKF5jqD7A + 200;
                }
            }
        }
        FDAogQTB--;
        return U6zZTXL (FDAogQTB, fWKF5jqD7A);
    }
}

