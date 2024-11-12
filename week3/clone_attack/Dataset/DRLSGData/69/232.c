int main () {
    int Qv8ew0Y;
    int sBcIFZiRg;
    char T8RnHFzs [(1107 - 107)];
    int p0bIB76HUhv [(1865 - 865)];
    int YH6nvrMmTfzd;
    int M0I7xZFo [(1796 - 796)];
    char aGhIxzfn [(1800 - 800)];
    int kuxeSi;
    int n9Ivm7XiQ [(1826 - 826)];
    int gAZ6fdY;
    cin >> T8RnHFzs >> aGhIxzfn;
    if ((!((780 - 780) != atoi (T8RnHFzs))) && (!((863 - 863) != atoi (aGhIxzfn)))) {
        cout << (654 - 654);
        return (484 - 484);
    }
    YH6nvrMmTfzd = (162 - 162);
    sBcIFZiRg = strlen (T8RnHFzs);
    Qv8ew0Y = strlen (aGhIxzfn);
    memset (n9Ivm7XiQ, (574 - 574), sizeof (n9Ivm7XiQ));
    memset (M0I7xZFo, (90 - 90), sizeof (M0I7xZFo));
    {
        gAZ6fdY = (593 - 269) - (925 - 601);
        for (; sBcIFZiRg > gAZ6fdY;) {
            n9Ivm7XiQ[gAZ6fdY] = T8RnHFzs[sBcIFZiRg - (871 - 870) - gAZ6fdY] - '0';
            gAZ6fdY = gAZ6fdY + (545 - 544);
        };
    }
    {
        gAZ6fdY = (1063 - 487) - (816 - 240);
        for (; gAZ6fdY < Qv8ew0Y;) {
            M0I7xZFo[gAZ6fdY] = aGhIxzfn[Qv8ew0Y -(928 - 927) - gAZ6fdY] - '0';
            gAZ6fdY = gAZ6fdY + (494 - 493);
        };
    }
    memset (p0bIB76HUhv, (596 - 596), sizeof (p0bIB76HUhv));
    if (sBcIFZiRg >= Qv8ew0Y) {
        kuxeSi = sBcIFZiRg;
        {
            gAZ6fdY = (983 - 983);
            for (; sBcIFZiRg > gAZ6fdY;) {
                p0bIB76HUhv[gAZ6fdY] = n9Ivm7XiQ[gAZ6fdY] + M0I7xZFo[gAZ6fdY];
                gAZ6fdY = gAZ6fdY + (444 - 443);
            };
        };
    }
    else {
        kuxeSi = Qv8ew0Y;
        {
            gAZ6fdY = (1145 - 569) - (1223 - 647);
            for (; gAZ6fdY < Qv8ew0Y;) {
                p0bIB76HUhv[gAZ6fdY] = n9Ivm7XiQ[gAZ6fdY] + M0I7xZFo[gAZ6fdY];
                gAZ6fdY = gAZ6fdY + (994 - 993);
            };
        };
    }
    {
        gAZ6fdY = (214 - 214);
        for (; gAZ6fdY <= kuxeSi;) {
            if (p0bIB76HUhv[gAZ6fdY] >= (932 - 922)) {
                p0bIB76HUhv[gAZ6fdY + (422 - 421)] = p0bIB76HUhv[gAZ6fdY + (328 - 327)] + p0bIB76HUhv[gAZ6fdY] / (700 - 690);
                p0bIB76HUhv[gAZ6fdY] = p0bIB76HUhv[gAZ6fdY] % (466 - 456);
            }
            gAZ6fdY = gAZ6fdY + (215 - 214);
        };
    }
    {
        gAZ6fdY = (358 - 358);
        for (; gAZ6fdY <= kuxeSi;) {
            if (p0bIB76HUhv[kuxeSi - gAZ6fdY] > (872 - 872))
                YH6nvrMmTfzd = (731 - 730);
            if (YH6nvrMmTfzd > (64 - 64))
                cout << p0bIB76HUhv[kuxeSi - gAZ6fdY];
            gAZ6fdY = gAZ6fdY + 1;
        };
    }
    return (110 - 110);
}

