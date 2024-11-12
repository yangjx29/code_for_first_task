int main () {
    int wRCJK1Wh9Oc;
    int de8DUJ1in7;
    int JEs6uaGSC8k;
    wRCJK1Wh9Oc = (486 - 486);
    de8DUJ1in7 = 0;
    JEs6uaGSC8k = 0;
    char KizbefX7Znqm [4] = {'z', 'q', 's', 'l'};
    int oj6dDBqXZRtO;
    int xM2WOBTlY0oC;
    int aoCNaMFmUkt6;
    int zl0bToCMmRaZ;
    oj6dDBqXZRtO = (229 - 228);
    xM2WOBTlY0oC = (442 - 441);
    aoCNaMFmUkt6 = 1;
    zl0bToCMmRaZ = 1;
    int TaF0fORGmt [4] = {1, 1, 1, 1};
    for (oj6dDBqXZRtO = 1; oj6dDBqXZRtO <= 5; oj6dDBqXZRtO = oj6dDBqXZRtO + 1)
        for (xM2WOBTlY0oC = 1; 5 >= xM2WOBTlY0oC; ++xM2WOBTlY0oC)
            for (aoCNaMFmUkt6 = 1; aoCNaMFmUkt6 <= 5; ++aoCNaMFmUkt6)
                for (zl0bToCMmRaZ = 1; 5 >= zl0bToCMmRaZ; zl0bToCMmRaZ = zl0bToCMmRaZ + 1) {
                    if ((oj6dDBqXZRtO + xM2WOBTlY0oC == aoCNaMFmUkt6 + zl0bToCMmRaZ) && (oj6dDBqXZRtO + zl0bToCMmRaZ > aoCNaMFmUkt6 + xM2WOBTlY0oC) && (oj6dDBqXZRtO + aoCNaMFmUkt6 < xM2WOBTlY0oC)) {
                        TaF0fORGmt[0] = oj6dDBqXZRtO;
                        TaF0fORGmt[1] = xM2WOBTlY0oC;
                        TaF0fORGmt[2] = aoCNaMFmUkt6;
                        TaF0fORGmt[3] = zl0bToCMmRaZ;
                        for (wRCJK1Wh9Oc = 0; wRCJK1Wh9Oc <= 2; wRCJK1Wh9Oc = wRCJK1Wh9Oc + 1)
                            for (de8DUJ1in7 = 3; de8DUJ1in7 >= wRCJK1Wh9Oc + 1; de8DUJ1in7--) {
                                if (TaF0fORGmt[de8DUJ1in7] > TaF0fORGmt[de8DUJ1in7 - 1]) {
                                    JEs6uaGSC8k = TaF0fORGmt[de8DUJ1in7];
                                    TaF0fORGmt[de8DUJ1in7] = TaF0fORGmt[de8DUJ1in7 - 1];
                                    TaF0fORGmt[de8DUJ1in7 - 1] = JEs6uaGSC8k;
                                    JEs6uaGSC8k = KizbefX7Znqm[de8DUJ1in7];
                                    KizbefX7Znqm[de8DUJ1in7] = KizbefX7Znqm[de8DUJ1in7 - 1];
                                    KizbefX7Znqm[de8DUJ1in7 - 1] = JEs6uaGSC8k;
                                };
                            };
                    };
                }
    for (JEs6uaGSC8k = 0; JEs6uaGSC8k <= 3; JEs6uaGSC8k = JEs6uaGSC8k +1)
        cout << KizbefX7Znqm[JEs6uaGSC8k] << " " << TaF0fORGmt[JEs6uaGSC8k] * 10 << endl;
    return 0;
}

