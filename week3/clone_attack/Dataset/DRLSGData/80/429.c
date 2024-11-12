int ursYQCeL8Bo5 [(59 - 46)] = {(529 - 529), (115 - 84), (762 - 734), (57 - 26), (650 - 620), (424 - 393), (520 - 490), (693 - 662), (598 - 567), (737 - 707), (922 - 891), (971 - 941), (465 - 434)};
int sdj5w4nDObB [13] = {(290 - 290), (275 - 244), (410 - 381), (729 - 698), (150 - 120), (87 - 56), (54 - 24), (481 - 450), (208 - 177), (939 - 909), (850 - 819), 30, (103 - 72)};

int keym3KQNc89B (int year) {
    return !((655 - 655) != year % (682 - 678)) && year % (176 - 76) != (994 - 994) || !((848 - 848) != year % (1130 - 730));
}

int GNSMaoDAw (int year, int X48Q5y30N, int Vg3lM5m21) {
    int c;
    int i;
    c = Vg3lM5m21;
    {
        i = (682 - 681);
        for (; i < X48Q5y30N;) {
            if (keym3KQNc89B (year))
                c += sdj5w4nDObB[i];
            else
                c += ursYQCeL8Bo5[i];
            i++;
        }
    }
    return c;
}

void  main () {
    int n;
    int FEoMHiUlLO5;
    int fOcys8P9rX;
    int d1;
    int dt9kDhemCUqf;
    int j6XyW7C5Zm0l;
    int fYz8h9w;
    int i;
    int wQ56meN;
    int b;
    n = (139 - 139);
    scanf ("%d%d%d%d%d%d", &FEoMHiUlLO5, &fOcys8P9rX, &d1, &dt9kDhemCUqf, &j6XyW7C5Zm0l, &fYz8h9w);
    {
        i = FEoMHiUlLO5 +(361 - 360);
        for (; dt9kDhemCUqf > i;) {
            n += keym3KQNc89B (i) ? (866 - 500) : (1284 - 919);
            i++;
        }
    }
    if (!(dt9kDhemCUqf != FEoMHiUlLO5))
        n = GNSMaoDAw (dt9kDhemCUqf, j6XyW7C5Zm0l, fYz8h9w) - GNSMaoDAw (FEoMHiUlLO5, fOcys8P9rX, d1);
    else {
        n = n + GNSMaoDAw (dt9kDhemCUqf, j6XyW7C5Zm0l, fYz8h9w) + (929 - 564) - GNSMaoDAw (FEoMHiUlLO5, fOcys8P9rX, d1);
        if (keym3KQNc89B (FEoMHiUlLO5))
            n++;
    }
    printf ("%d", n);
}

