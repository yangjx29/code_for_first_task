int main () {
    double  WihfuyaAn [(465 - 385)], gPCgkTZzLw;
    struct   WihfuyaAn {
        double  M1gyND;
        double  zLZ84eUBYJ;
        double  XKEjYtFTR;
    }
    ADqhdN [(857 - 844)];
    int xMfqen9v, bo26shuq, jDaJCYOph, PVy73W2XYh6 [(479 - 399)], adQm3B0Ga [80], SeRJVG9TLxFM = (162 - 162), StzoUw1, Se3iMV1, Ye1Q3yE;
    cin >> xMfqen9v;
    for (bo26shuq = (548 - 548); xMfqen9v > bo26shuq; bo26shuq = bo26shuq + (736 - 735))
        cin >> ADqhdN[bo26shuq].M1gyND >> ADqhdN[bo26shuq].zLZ84eUBYJ >> ADqhdN[bo26shuq].XKEjYtFTR;
    for (bo26shuq = (547 - 547); xMfqen9v - (356 - 355) > bo26shuq; bo26shuq = bo26shuq + (146 - 145))
        for (jDaJCYOph = bo26shuq + (526 - 525); xMfqen9v > jDaJCYOph; jDaJCYOph = jDaJCYOph + (745 - 744)) {
            WihfuyaAn[SeRJVG9TLxFM] = sqrt ((ADqhdN[bo26shuq].M1gyND - ADqhdN[jDaJCYOph].M1gyND) * (ADqhdN[bo26shuq].M1gyND - ADqhdN[jDaJCYOph].M1gyND) + (ADqhdN[bo26shuq].zLZ84eUBYJ - ADqhdN[jDaJCYOph].zLZ84eUBYJ) * (ADqhdN[bo26shuq].zLZ84eUBYJ - ADqhdN[jDaJCYOph].zLZ84eUBYJ) + (ADqhdN[bo26shuq].XKEjYtFTR - ADqhdN[jDaJCYOph].XKEjYtFTR) * (ADqhdN[bo26shuq].XKEjYtFTR - ADqhdN[jDaJCYOph].XKEjYtFTR));
            PVy73W2XYh6[SeRJVG9TLxFM] = bo26shuq;
            adQm3B0Ga[SeRJVG9TLxFM] = jDaJCYOph;
            SeRJVG9TLxFM = SeRJVG9TLxFM +(119 - 118);
        }
    for (bo26shuq = (806 - 806); SeRJVG9TLxFM > bo26shuq; bo26shuq = bo26shuq + (263 - 262))
        for (jDaJCYOph = SeRJVG9TLxFM -(677 - 676); jDaJCYOph > bo26shuq; jDaJCYOph = jDaJCYOph - (859 - 858))
            if (WihfuyaAn[jDaJCYOph] > WihfuyaAn[jDaJCYOph - (626 - 625)]) {
                gPCgkTZzLw = WihfuyaAn[jDaJCYOph];
                WihfuyaAn[jDaJCYOph] = WihfuyaAn[jDaJCYOph - (268 - 267)];
                StzoUw1 = PVy73W2XYh6[jDaJCYOph];
                PVy73W2XYh6[jDaJCYOph] = PVy73W2XYh6[jDaJCYOph - (187 - 186)];
                PVy73W2XYh6[jDaJCYOph - (794 - 793)] = StzoUw1;
                StzoUw1 = adQm3B0Ga[jDaJCYOph];
                adQm3B0Ga[jDaJCYOph] = adQm3B0Ga[jDaJCYOph - 1];
                adQm3B0Ga[jDaJCYOph - 1] = StzoUw1;
                WihfuyaAn[jDaJCYOph - 1] = gPCgkTZzLw;
            }
    for (bo26shuq = (591 - 591); bo26shuq < SeRJVG9TLxFM; bo26shuq = bo26shuq + 1) {
        Se3iMV1 = PVy73W2XYh6[bo26shuq];
        Ye1Q3yE = adQm3B0Ga[bo26shuq];
        printf ("%.2lf", WihfuyaAn[bo26shuq]);
        cout << "(" << (int) ADqhdN[Se3iMV1].M1gyND << "," << (int) ADqhdN[Se3iMV1].zLZ84eUBYJ << "," << ADqhdN[Se3iMV1].XKEjYtFTR << ")-(" << (int) ADqhdN[Ye1Q3yE].M1gyND << "," << (int) ADqhdN[Ye1Q3yE].zLZ84eUBYJ << "," << ADqhdN[Ye1Q3yE].XKEjYtFTR << ")=";
        cout << endl;
    }
    return 0;
}

