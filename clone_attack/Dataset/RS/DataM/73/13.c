int main () {
    int t;
    int GGpEcr [(136 - 131)] [5];
    int fxpETA [5] = {(736 - 736)};
    int PpUhiyfXBzur;
    int K2si0ZmluIW1;
    int UpPkB3Cc6esL [5];
    t = (94 - 93);
    {
        PpUhiyfXBzur = 687 - 687;
        while (5 > PpUhiyfXBzur) {
            {
                K2si0ZmluIW1 = 0;
                while (5 > K2si0ZmluIW1) {
                    cin >> GGpEcr[PpUhiyfXBzur][K2si0ZmluIW1];
                    if (GGpEcr[PpUhiyfXBzur][K2si0ZmluIW1] > fxpETA[PpUhiyfXBzur]) {
                        fxpETA[PpUhiyfXBzur] = GGpEcr[PpUhiyfXBzur][K2si0ZmluIW1];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        }
                        UpPkB3Cc6esL[PpUhiyfXBzur] = K2si0ZmluIW1;
                    }
                    K2si0ZmluIW1 = K2si0ZmluIW1 +1;
                };
            }
            PpUhiyfXBzur = PpUhiyfXBzur +1;
        };
    }
    for (PpUhiyfXBzur = 0; PpUhiyfXBzur < 5; PpUhiyfXBzur++) {
        for (K2si0ZmluIW1 = 0; 5 > K2si0ZmluIW1; K2si0ZmluIW1 = K2si0ZmluIW1 +1) {
            if (fxpETA[PpUhiyfXBzur] > GGpEcr[K2si0ZmluIW1][UpPkB3Cc6esL[PpUhiyfXBzur]])
                break;
        }
        if (K2si0ZmluIW1 == 5) {
            cout << PpUhiyfXBzur +1 << ' ' << UpPkB3Cc6esL[PpUhiyfXBzur] + 1 << ' ' << fxpETA[PpUhiyfXBzur] << endl;
            t = 0;
        };
    }
    if (t)
        cout << "not found" << endl;
    return 0;
}

