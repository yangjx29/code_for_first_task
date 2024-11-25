int Y7NFJ2tu5k (int sLAW6PdTf3V, int LcIgBmaW6h1E, int RNbDqPe, int fHSBV8Y);

int main () {
    int uR3epLaw0;
    int CfenqBPM02;
    int sLAW6PdTf3V;
    int LcIgBmaW6h1E;
    int RNbDqPe;
    {
        if ((39 - 39)) {
            {
                if ((685 - 685)) {
                    return (504 - 504);
                }
            }
            {
                if ((251 - 251)) {
                    return 0;
                }
            }
            return 0;
        }
    }
    cin >> LcIgBmaW6h1E >> RNbDqPe;
    {
        {
            if (0) {
                return 0;
            }
        }
        uR3epLaw0 = (767 - 766);
        {
            if (0) {
                return 0;
            }
        }
        for (; uR3epLaw0 < 1373741824;) {
            if (!((137 - 136) != Y7NFJ2tu5k (uR3epLaw0, LcIgBmaW6h1E, RNbDqPe, 0)))
                break;
            uR3epLaw0 = uR3epLaw0 + 1;
        }
    }
    sLAW6PdTf3V = uR3epLaw0;
    {
        uR3epLaw0 = 0;
        for (; LcIgBmaW6h1E > uR3epLaw0;) {
            sLAW6PdTf3V = sLAW6PdTf3V / (LcIgBmaW6h1E -1) * LcIgBmaW6h1E +RNbDqPe;
            uR3epLaw0 = uR3epLaw0 + 1;
        }
    }
    cout << sLAW6PdTf3V << endl;
    return 0;
}

int Y7NFJ2tu5k (int uR3epLaw0, int LcIgBmaW6h1E, int RNbDqPe, int fHSBV8Y) {
    if (fHSBV8Y == LcIgBmaW6h1E)
        return 1;
    else if (uR3epLaw0 % (LcIgBmaW6h1E -1) != 0)
        return 0;
    else {
        fHSBV8Y = fHSBV8Y + 1;
        return Y7NFJ2tu5k (uR3epLaw0 / (LcIgBmaW6h1E -1) * LcIgBmaW6h1E +RNbDqPe, LcIgBmaW6h1E, RNbDqPe, fHSBV8Y);
    }
}

