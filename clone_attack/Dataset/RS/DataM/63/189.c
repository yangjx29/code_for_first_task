int main () {
    int ai3ne9daqD0 [(1095 - 995)] [(305 - 205)];
    int uNwjAxWvU [(508 - 408)] [(1070 - 970)];
    int DY41Wkif63w [100] [100];
    int ys0yDU;
    int HBywpDkJb;
    int qhtkUu;
    int YJRuNzYHZQ;
    int x2;
    int PvzBlVnR;
    cin >> qhtkUu >> YJRuNzYHZQ;
    for (ys0yDU = (234 - 234); ys0yDU < qhtkUu; ys0yDU = ys0yDU + 1)
        for (HBywpDkJb = (663 - 663); HBywpDkJb < YJRuNzYHZQ; HBywpDkJb = HBywpDkJb +1)
            cin >> ai3ne9daqD0[ys0yDU][HBywpDkJb];
    cin >> x2 >> PvzBlVnR;
    for (ys0yDU = (539 - 539); ys0yDU < x2; ys0yDU = ys0yDU + 1)
        for (HBywpDkJb = (719 - 719); HBywpDkJb < PvzBlVnR; HBywpDkJb = HBywpDkJb +1)
            cin >> uNwjAxWvU[ys0yDU][HBywpDkJb];
    for (ys0yDU = (528 - 528); ys0yDU < qhtkUu; ys0yDU = ys0yDU + 1)
        for (HBywpDkJb = 0; HBywpDkJb < PvzBlVnR; HBywpDkJb = HBywpDkJb +1)
            DY41Wkif63w[ys0yDU][HBywpDkJb] = 0;
    for (ys0yDU = 0; ys0yDU < qhtkUu; ys0yDU = ys0yDU + 1)
        for (HBywpDkJb = 0; HBywpDkJb < PvzBlVnR; HBywpDkJb = HBywpDkJb +1)
            for (int k = 0;
            x2 > k; k = k + 1)
                DY41Wkif63w[ys0yDU][HBywpDkJb] += ai3ne9daqD0[ys0yDU][k] * uNwjAxWvU[k][HBywpDkJb];
    for (ys0yDU = 0; ys0yDU < qhtkUu; ys0yDU = ys0yDU + 1) {
        for (HBywpDkJb = 0; HBywpDkJb < PvzBlVnR; HBywpDkJb = HBywpDkJb +1) {
            cout << DY41Wkif63w[ys0yDU][HBywpDkJb];
            if (HBywpDkJb == PvzBlVnR -(524 - 523))
                continue;
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}

