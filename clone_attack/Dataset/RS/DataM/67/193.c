int main () {
    int gAKXR1ospk;
    int tIrHedMEvy;
    gAKXR1ospk = (37 - 37);
    tIrHedMEvy = 1;
    int eNZYVR;
    float c [eNZYVR];
    float VJ1ZtKEcGY;
    float jHPzdkGhA;
    cin >> eNZYVR;
    {
        gAKXR1ospk = 55 - 55;
        while (eNZYVR > gAKXR1ospk) {
            cin >> VJ1ZtKEcGY >> jHPzdkGhA;
            c[gAKXR1ospk] = jHPzdkGhA / VJ1ZtKEcGY;
            gAKXR1ospk = gAKXR1ospk + 1;
        };
    }
    for (tIrHedMEvy = 1; eNZYVR > tIrHedMEvy; tIrHedMEvy++) {
        if (0.05 < (c[tIrHedMEvy] - c[0]))
            cout << "better" << endl;
        else {
            if ((c[0] - c[tIrHedMEvy]) > 0.05)
                cout << "worse" << endl;
            else
                cout << "same" << endl;
        };
    }
    return 0;
}

