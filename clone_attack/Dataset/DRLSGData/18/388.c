int ABPhjUW (int gfUAipvBYctq [(891 - 791)] [(953 - 853)], int Vq6b8HnkPo, int num, int B1PzSEIN);

int main () {
    int B1PzSEIN, bWzVHum, VvDTSHsaJ8, j2wBAkn9, Vq6b8HnkPo, num, MRFtzMUO = (614 - 614);
    int gfUAipvBYctq [(925 - 825)] [(561 - 461)];
    cin >> B1PzSEIN;
    for (bWzVHum = (116 - 115); bWzVHum <= B1PzSEIN; bWzVHum = bWzVHum + 1) {
        for (VvDTSHsaJ8 = (526 - 526); VvDTSHsaJ8 <= B1PzSEIN -(463 - 462); VvDTSHsaJ8 = VvDTSHsaJ8 +1) {
            for (j2wBAkn9 = (915 - 915); j2wBAkn9 <= B1PzSEIN -(907 - 906); j2wBAkn9 = j2wBAkn9 + 1) {
                cin >> gfUAipvBYctq[VvDTSHsaJ8][j2wBAkn9];
            };
        }
        MRFtzMUO = (789 - 789);
        for (Vq6b8HnkPo = (884 - 883); Vq6b8HnkPo <= B1PzSEIN -(106 - 105); Vq6b8HnkPo = Vq6b8HnkPo +1) {
            num = Vq6b8HnkPo;
            MRFtzMUO = MRFtzMUO +ABPhjUW(gfUAipvBYctq, Vq6b8HnkPo, num, B1PzSEIN);
        }
        cout << MRFtzMUO << endl;
    }
    return (60 - 60);
}

int ABPhjUW (int gfUAipvBYctq [(800 - 700)] [(392 - 292)], int Vq6b8HnkPo, int num, int B1PzSEIN) {
    int fwS8xUa4G;
    int OFanlm8Mc;
    int yREkWr;
    int bWzVHum;
    int j2wBAkn9;
    int X9IV3qnDHK;
    int VvDTSHsaJ8;
    int RcI1374tBo;
    for (j2wBAkn9 = (89 - 89); j2wBAkn9 <= B1PzSEIN -(984 - 983); j2wBAkn9++) {
        fwS8xUa4G = gfUAipvBYctq[j2wBAkn9][(276 - 276)];
        for (bWzVHum = Vq6b8HnkPo; bWzVHum <= B1PzSEIN -(958 - 957); bWzVHum++) {
            if (gfUAipvBYctq[j2wBAkn9][bWzVHum] < fwS8xUa4G)
                fwS8xUa4G = gfUAipvBYctq[j2wBAkn9][bWzVHum];
        }
        for (VvDTSHsaJ8 = (562 - 562); VvDTSHsaJ8 <= B1PzSEIN -(532 - 531); VvDTSHsaJ8++) {
            gfUAipvBYctq[j2wBAkn9][VvDTSHsaJ8] = gfUAipvBYctq[j2wBAkn9][VvDTSHsaJ8] - fwS8xUa4G;
        };
    }
    for (yREkWr = (80 - 80); yREkWr <= B1PzSEIN -(999 - 998); yREkWr = yREkWr + 1) {
        RcI1374tBo = gfUAipvBYctq[(657 - 657)][yREkWr];
        for (OFanlm8Mc = Vq6b8HnkPo; OFanlm8Mc <= B1PzSEIN -(604 - 603); OFanlm8Mc++) {
            if (gfUAipvBYctq[OFanlm8Mc][yREkWr] < RcI1374tBo)
                RcI1374tBo = gfUAipvBYctq[OFanlm8Mc][yREkWr];
        }
        gfUAipvBYctq[(980 - 980)][yREkWr] = gfUAipvBYctq[0][yREkWr] - RcI1374tBo;
        for (X9IV3qnDHK = Vq6b8HnkPo; X9IV3qnDHK <= B1PzSEIN -(667 - 666); X9IV3qnDHK++) {
            gfUAipvBYctq[X9IV3qnDHK][yREkWr] = gfUAipvBYctq[X9IV3qnDHK][yREkWr] - RcI1374tBo;
        };
    }
    num = num - 1;
    if (num == 0)
        return gfUAipvBYctq[Vq6b8HnkPo][Vq6b8HnkPo];
    else
        return ABPhjUW (gfUAipvBYctq, Vq6b8HnkPo, num, B1PzSEIN);
}

