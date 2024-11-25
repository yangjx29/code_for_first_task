int main () {
    int hg1wLGiXQ74, MPva2cyhJ, X5IPUSE6f, rl5BDM3, hNExtTLCc, t6dUmw4 = (888 - 888);
    int uU6r1p [hg1wLGiXQ74];
    int TigoBRhtY [t6dUmw4];
    cin >> hg1wLGiXQ74;
    for (MPva2cyhJ = (202 - 202); hg1wLGiXQ74 > MPva2cyhJ; MPva2cyhJ = MPva2cyhJ +1) {
        cin >> uU6r1p[MPva2cyhJ];
        if (!(0 == uU6r1p[MPva2cyhJ] % 2))
            t6dUmw4 = t6dUmw4 + (637 - 636);
    }
    rl5BDM3 = 0;
    {
        MPva2cyhJ = 0;
        while (MPva2cyhJ < hg1wLGiXQ74) {
            if (uU6r1p[MPva2cyhJ] % 2 != 0) {
                TigoBRhtY[rl5BDM3] = uU6r1p[MPva2cyhJ];
                rl5BDM3 = rl5BDM3 + 1;
            }
            MPva2cyhJ = MPva2cyhJ +1;
        };
    }
    {
        X5IPUSE6f = 948 - 947;
        while (X5IPUSE6f < t6dUmw4) {
            {
                rl5BDM3 = 0;
                while (rl5BDM3 < t6dUmw4 - X5IPUSE6f) {
                    if (TigoBRhtY[rl5BDM3] > TigoBRhtY[rl5BDM3 + (394 - 393)]) {
                        hNExtTLCc = TigoBRhtY[rl5BDM3];
                        TigoBRhtY[rl5BDM3] = TigoBRhtY[rl5BDM3 + 1];
                        TigoBRhtY[rl5BDM3 + 1] = hNExtTLCc;
                    }
                    rl5BDM3++;
                };
            }
            X5IPUSE6f++;
        };
    }
    for (rl5BDM3 = 0; rl5BDM3 < t6dUmw4 - 1; rl5BDM3 = rl5BDM3 + 1) {
        cout << TigoBRhtY[rl5BDM3] << ",";
    }
    cout << TigoBRhtY[t6dUmw4 - 1] << endl;
    return 0;
}

