int main () {
    int oxCgDB;
    int PSLFOg7;
    PSLFOg7 = 0;
    int z59DbciCkya = 0;
    int z5X7kuEpQe [250];
    int T3mMHitn [250];
    scanf ("%d", &oxCgDB);
    for (int FrseVE = 0;
    FrseVE < oxCgDB; FrseVE++) {
        scanf ("%d %d", &z5X7kuEpQe[FrseVE], &T3mMHitn[FrseVE]);
    }
    {
        int FrseVE = 0;
        while (FrseVE < oxCgDB) {
            if ((z5X7kuEpQe[FrseVE] == 1) && (T3mMHitn[FrseVE] == 0)) {
                z59DbciCkya = z59DbciCkya + 1;
            }
            if ((z5X7kuEpQe[FrseVE] == 0) && (T3mMHitn[FrseVE] == 1)) {
                PSLFOg7 = PSLFOg7 +1;
            }
            if ((z5X7kuEpQe[FrseVE] == 2) && (T3mMHitn[FrseVE] == 0)) {
                PSLFOg7 = PSLFOg7 +1;
            }
            if ((z5X7kuEpQe[FrseVE] == 1) && (T3mMHitn[FrseVE] == 2)) {
                PSLFOg7 = PSLFOg7 +1;
            }
            if ((z5X7kuEpQe[FrseVE] == 2) && (T3mMHitn[FrseVE] == 1)) {
                z59DbciCkya = z59DbciCkya + 1;
            }
            if ((z5X7kuEpQe[FrseVE] == 0) && (T3mMHitn[FrseVE] == 2)) {
                z59DbciCkya = z59DbciCkya + 1;
            }
            if (z5X7kuEpQe[FrseVE] == T3mMHitn[FrseVE]) {
                PSLFOg7 = PSLFOg7;
                z59DbciCkya = z59DbciCkya;
            }
            FrseVE++;
        }
    }
    if (PSLFOg7 > z59DbciCkya) {
    }
    if (PSLFOg7 < z59DbciCkya) {
    }
    if (PSLFOg7 == z59DbciCkya) {
    }
    return 0;
}

