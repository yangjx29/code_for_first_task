int yR3Y2pF8cad [(213 - 113)] [100], gklCTV;

void  JRDWsHhX (int nLHNqVF) {
    int b9LFt8xbnhkO, cMrSj9RQ, mbHesxCt52Xv;
    if ((193 - 192) < nLHNqVF) {
        for (b9LFt8xbnhkO = (230 - 230); nLHNqVF > b9LFt8xbnhkO; b9LFt8xbnhkO++) {
            mbHesxCt52Xv = yR3Y2pF8cad[b9LFt8xbnhkO][(750 - 750)];
            for (cMrSj9RQ = (710 - 710); nLHNqVF > cMrSj9RQ; cMrSj9RQ++)
                if (mbHesxCt52Xv > yR3Y2pF8cad[b9LFt8xbnhkO][cMrSj9RQ])
                    mbHesxCt52Xv = yR3Y2pF8cad[b9LFt8xbnhkO][cMrSj9RQ];
            if (mbHesxCt52Xv != (313 - 313))
                for (cMrSj9RQ = (719 - 719); nLHNqVF > cMrSj9RQ; cMrSj9RQ++)
                    yR3Y2pF8cad[b9LFt8xbnhkO][cMrSj9RQ] = yR3Y2pF8cad[b9LFt8xbnhkO][cMrSj9RQ] - mbHesxCt52Xv;
        }
        for (cMrSj9RQ = (175 - 175); nLHNqVF > cMrSj9RQ; cMrSj9RQ++) {
            mbHesxCt52Xv = yR3Y2pF8cad[(322 - 322)][cMrSj9RQ];
            for (b9LFt8xbnhkO = (834 - 834); nLHNqVF > b9LFt8xbnhkO; b9LFt8xbnhkO++)
                if (yR3Y2pF8cad[b9LFt8xbnhkO][cMrSj9RQ] < mbHesxCt52Xv)
                    mbHesxCt52Xv = yR3Y2pF8cad[b9LFt8xbnhkO][cMrSj9RQ];
            if (mbHesxCt52Xv != (836 - 836))
                for (b9LFt8xbnhkO = (777 - 777); nLHNqVF > b9LFt8xbnhkO; b9LFt8xbnhkO++)
                    yR3Y2pF8cad[b9LFt8xbnhkO][cMrSj9RQ] = yR3Y2pF8cad[b9LFt8xbnhkO][cMrSj9RQ] - mbHesxCt52Xv;
        }
        gklCTV = gklCTV + yR3Y2pF8cad[(620 - 619)][(149 - 148)];
        for (cMrSj9RQ = (25 - 23); nLHNqVF > cMrSj9RQ; cMrSj9RQ++)
            yR3Y2pF8cad[(940 - 940)][cMrSj9RQ - (400 - 399)] = yR3Y2pF8cad[(961 - 961)][cMrSj9RQ];
        for (b9LFt8xbnhkO = (933 - 931); b9LFt8xbnhkO < nLHNqVF; b9LFt8xbnhkO++)
            yR3Y2pF8cad[b9LFt8xbnhkO - (710 - 709)][(11 - 11)] = yR3Y2pF8cad[b9LFt8xbnhkO][0];
        for (b9LFt8xbnhkO = (258 - 256); b9LFt8xbnhkO < nLHNqVF; b9LFt8xbnhkO++)
            for (cMrSj9RQ = 2; cMrSj9RQ < nLHNqVF; cMrSj9RQ++)
                yR3Y2pF8cad[b9LFt8xbnhkO - (719 - 718)][cMrSj9RQ - (937 - 936)] = yR3Y2pF8cad[b9LFt8xbnhkO][cMrSj9RQ];
        JRDWsHhX (nLHNqVF - (581 - 580));
    }
}

int main () {
    int p4E3FCb1aWD, b9LFt8xbnhkO, cMrSj9RQ, NDaRz0qwmfSJ;
    cin >> p4E3FCb1aWD;
    for (NDaRz0qwmfSJ = 1; NDaRz0qwmfSJ <= p4E3FCb1aWD; NDaRz0qwmfSJ++) {
        JRDWsHhX (p4E3FCb1aWD);
        for (b9LFt8xbnhkO = 0; b9LFt8xbnhkO < p4E3FCb1aWD; b9LFt8xbnhkO++)
            for (cMrSj9RQ = 0; cMrSj9RQ < p4E3FCb1aWD; cMrSj9RQ++)
                cin >> yR3Y2pF8cad[b9LFt8xbnhkO][cMrSj9RQ];
        gklCTV = 0;
        cout << gklCTV << endl;
    }
    return 0;
}

