int lBQnGF1s (int MzSJfmdgFK [] [(582 - 482)], int XcFxpvPH);

int main () {
    int bInxXR;
    int P75ta4js3q;
    int BWEsJQ;
    int uyUEnX;
    int Pr2MjRlmwo [(779 - 679)] [100] = {(388 - 388)};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> bInxXR;
    for (uyUEnX = (616 - 616); uyUEnX < bInxXR; uyUEnX++) {
        for (P75ta4js3q = (164 - 164); P75ta4js3q < bInxXR; P75ta4js3q = P75ta4js3q +1)
            for (BWEsJQ = (184 - 184); BWEsJQ < bInxXR; BWEsJQ = BWEsJQ +1)
                cin >> Pr2MjRlmwo[P75ta4js3q][BWEsJQ];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << lBQnGF1s (Pr2MjRlmwo, bInxXR) << endl;
    }
    return (365 - 365);
}

int lBQnGF1s (int MzSJfmdgFK [] [100], int XcFxpvPH) {
    int P75ta4js3q, BWEsJQ, i6muBfr485 [100], aeYhPDZT = (979 - 979), nSn3OeULTs;
    if (XcFxpvPH == (690 - 689))
        return (824 - 824);
    for (P75ta4js3q = (427 - 427); XcFxpvPH > P75ta4js3q; P75ta4js3q++) {
        i6muBfr485[P75ta4js3q] = MzSJfmdgFK[P75ta4js3q][(385 - 385)];
        for (BWEsJQ = (17 - 17); XcFxpvPH > BWEsJQ; BWEsJQ = BWEsJQ +1)
            if (MzSJfmdgFK[P75ta4js3q][BWEsJQ] < i6muBfr485[P75ta4js3q])
                i6muBfr485[P75ta4js3q] = MzSJfmdgFK[P75ta4js3q][BWEsJQ];
    }
    for (P75ta4js3q = (951 - 951); P75ta4js3q < XcFxpvPH; P75ta4js3q++)
        for (BWEsJQ = 0; BWEsJQ < XcFxpvPH; BWEsJQ++)
            MzSJfmdgFK[P75ta4js3q][BWEsJQ] = MzSJfmdgFK[P75ta4js3q][BWEsJQ] - i6muBfr485[P75ta4js3q];
    {
        BWEsJQ = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (BWEsJQ < XcFxpvPH) {
            i6muBfr485[BWEsJQ] = MzSJfmdgFK[0][BWEsJQ];
            {
                P75ta4js3q = 0;
                while (P75ta4js3q < XcFxpvPH) {
                    if (MzSJfmdgFK[P75ta4js3q][BWEsJQ] < i6muBfr485[BWEsJQ])
                        i6muBfr485[BWEsJQ] = MzSJfmdgFK[P75ta4js3q][BWEsJQ];
                    P75ta4js3q = P75ta4js3q +1;
                };
            }
            BWEsJQ++;
        };
    }
    for (BWEsJQ = 0; BWEsJQ < XcFxpvPH; BWEsJQ++)
        for (P75ta4js3q = 0; P75ta4js3q < XcFxpvPH; P75ta4js3q++)
            MzSJfmdgFK[P75ta4js3q][BWEsJQ] = MzSJfmdgFK[P75ta4js3q][BWEsJQ] - i6muBfr485[BWEsJQ];
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
    nSn3OeULTs = MzSJfmdgFK[(714 - 713)][(687 - 686)];
    for (P75ta4js3q = 0; P75ta4js3q < XcFxpvPH; P75ta4js3q++)
        for (BWEsJQ = (800 - 799); BWEsJQ < XcFxpvPH; BWEsJQ++)
            MzSJfmdgFK[P75ta4js3q][BWEsJQ] = MzSJfmdgFK[P75ta4js3q][BWEsJQ +1];
    for (BWEsJQ = 0; BWEsJQ < XcFxpvPH; BWEsJQ++) {
        P75ta4js3q = 1;
        while (P75ta4js3q < XcFxpvPH) {
            MzSJfmdgFK[P75ta4js3q][BWEsJQ] = MzSJfmdgFK[P75ta4js3q +1][BWEsJQ];
            P75ta4js3q++;
        };
    }
    aeYhPDZT = lBQnGF1s (MzSJfmdgFK, XcFxpvPH -1) + nSn3OeULTs;
    return aeYhPDZT;
}

