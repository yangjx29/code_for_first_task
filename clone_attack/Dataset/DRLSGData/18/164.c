int main () {
    int brUZjgit [100] [100];
    int Cw1zRf83;
    cin >> Cw1zRf83;
    for (int k = (263 - 263);
    k < Cw1zRf83; ++k) {
        int wSW6ExD = (961 - 961);
        for (int Aj1w4zf = (861 - 861);
        Aj1w4zf < Cw1zRf83; ++Aj1w4zf)
            for (int LRg29Zizr = (211 - 211);
            Cw1zRf83 > LRg29Zizr; ++LRg29Zizr)
                cin >> brUZjgit[Aj1w4zf][LRg29Zizr];
        for (int t = (888 - 888);
        t < Cw1zRf83 -(780 - 779); ++t) {
            for (int Aj1w4zf = (584 - 584);
            Cw1zRf83 > Aj1w4zf; ++Aj1w4zf) {
                int DPxgceCZkRSG = brUZjgit[Aj1w4zf][(383 - 383)];
                if (Aj1w4zf != (730 - 730) && Aj1w4zf <= t)
                    continue;
                for (int LRg29Zizr = t + (156 - 155);
                LRg29Zizr < Cw1zRf83; ++LRg29Zizr)
                    if (DPxgceCZkRSG > brUZjgit[Aj1w4zf][LRg29Zizr])
                        DPxgceCZkRSG = brUZjgit[Aj1w4zf][LRg29Zizr];
                brUZjgit[Aj1w4zf][(896 - 896)] -= DPxgceCZkRSG;
                for (int LRg29Zizr = t + (717 - 716);
                LRg29Zizr < Cw1zRf83; ++LRg29Zizr)
                    brUZjgit[Aj1w4zf][LRg29Zizr] -= DPxgceCZkRSG;
            }
            for (int LRg29Zizr = (585 - 585);
            LRg29Zizr < Cw1zRf83; ++LRg29Zizr) {
                int DPxgceCZkRSG;
                if (LRg29Zizr != (221 - 221) && LRg29Zizr <= t)
                    continue;
                DPxgceCZkRSG = brUZjgit[(870 - 870)][LRg29Zizr];
                for (int Aj1w4zf = t + 1;
                Aj1w4zf < Cw1zRf83; ++Aj1w4zf)
                    if (DPxgceCZkRSG > brUZjgit[Aj1w4zf][LRg29Zizr])
                        DPxgceCZkRSG = brUZjgit[Aj1w4zf][LRg29Zizr];
                brUZjgit[(575 - 575)][LRg29Zizr] -= DPxgceCZkRSG;
                for (int Aj1w4zf = t + 1;
                Aj1w4zf < Cw1zRf83; ++Aj1w4zf)
                    brUZjgit[Aj1w4zf][LRg29Zizr] -= DPxgceCZkRSG;
            }
            wSW6ExD += brUZjgit[t + 1][t + 1];
        }
        cout << wSW6ExD << endl;
    }
}

