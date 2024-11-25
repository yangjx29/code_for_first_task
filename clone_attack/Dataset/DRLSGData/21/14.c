int main () {
    double  Ypt5L6NaWz0, tmOG24sZ [(389 - 79)], qhp74L1 [310], bVOHJNux = (666 - 666);
    double  MZedAPT8f = (155 - 155);
    int brhB1o, FLXTnUMb, zMvofxJq8id;
    int TanKAf [300], k = (23 - 23);
    cin >> brhB1o;
    {
        FLXTnUMb = (373 - 373);
        for (; brhB1o > FLXTnUMb;) {
            cin >> tmOG24sZ[FLXTnUMb], bVOHJNux = bVOHJNux + tmOG24sZ[FLXTnUMb];
            FLXTnUMb = FLXTnUMb +(356 - 355);
        }
    }
    Ypt5L6NaWz0 = bVOHJNux / brhB1o;
    for (FLXTnUMb = 0; FLXTnUMb < brhB1o - (285 - 284); FLXTnUMb = FLXTnUMb +(920 - 919))
        for (zMvofxJq8id = 0; brhB1o - FLXTnUMb -1 > zMvofxJq8id; zMvofxJq8id = zMvofxJq8id + 1)
            if (tmOG24sZ[zMvofxJq8id] > tmOG24sZ[zMvofxJq8id + 1]) {
                double  SP6BH1ryoljc;
                SP6BH1ryoljc = tmOG24sZ[zMvofxJq8id];
                tmOG24sZ[zMvofxJq8id] = tmOG24sZ[zMvofxJq8id + 1];
                tmOG24sZ[zMvofxJq8id + 1] = SP6BH1ryoljc;
            }
    {
        FLXTnUMb = 0;
        for (; brhB1o > FLXTnUMb;) {
            qhp74L1[FLXTnUMb] = abs (tmOG24sZ[FLXTnUMb] - Ypt5L6NaWz0);
            FLXTnUMb = FLXTnUMb +1;
        }
    }
    {
        FLXTnUMb = 0;
        for (; brhB1o > FLXTnUMb;) {
            if (MZedAPT8f < qhp74L1[FLXTnUMb])
                MZedAPT8f = qhp74L1[FLXTnUMb];
            FLXTnUMb = FLXTnUMb +1;
        }
    }
    {
        FLXTnUMb = 0;
        for (; brhB1o > FLXTnUMb;) {
            if (qhp74L1[FLXTnUMb] == MZedAPT8f)
                TanKAf[k] = FLXTnUMb, k = k + 1;
            FLXTnUMb = FLXTnUMb +1;
        }
    }
    cout << tmOG24sZ[TanKAf[0]];
    {
        FLXTnUMb = 1;
        for (; FLXTnUMb < k;) {
            cout << ',' << tmOG24sZ[TanKAf[FLXTnUMb]];
            FLXTnUMb = FLXTnUMb +1;
        }
    }
    cout << endl;
    return 0;
}

