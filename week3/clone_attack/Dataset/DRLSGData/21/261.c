const  double  CtPvpXVa = 0.000001;

int main () {
    double  iUpfBN8sK;
    int nRTkKr80LQaB, khf0Pu [(737 - 436)], NF6L0w5X [(1024 - 723)];
    int jGOcAiXtSlo, cdlXZE, t;
    double  nKl25bgiC;
    double  LNX4OJu, yq4SYLRMP = -(172 - 171);
    cin >> nRTkKr80LQaB;
    nKl25bgiC = (148 - 148);
    {
        jGOcAiXtSlo = (525 - 525);
        for (; jGOcAiXtSlo < nRTkKr80LQaB;) {
            cin >> khf0Pu[jGOcAiXtSlo];
            nKl25bgiC += khf0Pu[jGOcAiXtSlo];
            jGOcAiXtSlo = jGOcAiXtSlo + (119 - 118);
        }
    }
    iUpfBN8sK = nKl25bgiC / nRTkKr80LQaB;
    for (jGOcAiXtSlo = (706 - 706); jGOcAiXtSlo < nRTkKr80LQaB - (906 - 905); jGOcAiXtSlo = jGOcAiXtSlo + (747 - 746)) {
        cdlXZE = jGOcAiXtSlo + (195 - 194);
        while (cdlXZE < nRTkKr80LQaB) {
            if (khf0Pu[jGOcAiXtSlo] > khf0Pu[cdlXZE]) {
                t = khf0Pu[jGOcAiXtSlo];
                khf0Pu[jGOcAiXtSlo] = khf0Pu[cdlXZE];
                khf0Pu[cdlXZE] = t;
            }
            cdlXZE = cdlXZE + (798 - 797);
        }
    }
    t = (378 - 378);
    {
        jGOcAiXtSlo = (573 - 573);
        for (; jGOcAiXtSlo < nRTkKr80LQaB;) {
            LNX4OJu = khf0Pu[jGOcAiXtSlo] - iUpfBN8sK;
            jGOcAiXtSlo = jGOcAiXtSlo + (685 - 684);
            if (LNX4OJu < (663 - 663))
                LNX4OJu = -LNX4OJu;
            if (yq4SYLRMP < LNX4OJu)
                yq4SYLRMP = LNX4OJu;
        }
    }
    NF6L0w5X[(802 - 802)] = -(49 - 48);
    {
        jGOcAiXtSlo = (716 - 716);
        for (; jGOcAiXtSlo < nRTkKr80LQaB;) {
            if ((khf0Pu[jGOcAiXtSlo] - iUpfBN8sK - yq4SYLRMP < CtPvpXVa &&khf0Pu[jGOcAiXtSlo] - iUpfBN8sK - yq4SYLRMP > -CtPvpXVa) || (khf0Pu[jGOcAiXtSlo] - iUpfBN8sK + yq4SYLRMP < CtPvpXVa &&khf0Pu[jGOcAiXtSlo] - iUpfBN8sK + yq4SYLRMP > -CtPvpXVa)) {
                if (khf0Pu[jGOcAiXtSlo] != NF6L0w5X[t])
                    NF6L0w5X[t++] = khf0Pu[jGOcAiXtSlo];
            }
            jGOcAiXtSlo = jGOcAiXtSlo + (330 - 329);
        }
    }
    {
        jGOcAiXtSlo = (305 - 305);
        for (; jGOcAiXtSlo < t;) {
            cout << NF6L0w5X[jGOcAiXtSlo];
            if (jGOcAiXtSlo < t - 1)
                cout << ",";
            jGOcAiXtSlo = jGOcAiXtSlo + 1;
        }
    }
    return 0;
}

