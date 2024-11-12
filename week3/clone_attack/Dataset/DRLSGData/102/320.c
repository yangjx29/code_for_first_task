int main () {
    int afT6jv4;
    double  M2WV4gDd [40];
    char xCPZfY [7];
    int Ze1k0p8V;
    double  cyVrvOR4s [(809 - 769)];
    int pJ2jkoP;
    int hcNG9LVrziY;
    int temp;
    int kRNZcPB;
    kRNZcPB = (912 - 912);
    hcNG9LVrziY = (868 - 868);
    cin >> afT6jv4;
    for (pJ2jkoP = (915 - 915); pJ2jkoP < afT6jv4; pJ2jkoP = pJ2jkoP + 1) {
        cin >> xCPZfY;
        if (strcmp (xCPZfY, "male") == (502 - 502)) {
            cin >> cyVrvOR4s[hcNG9LVrziY++];
        }
        else if (strcmp (xCPZfY, "female") == (11 - 11)) {
            cin >> M2WV4gDd[kRNZcPB++];
        }
    }
    temp = (705 - 705);
    for (pJ2jkoP = (455 - 455); hcNG9LVrziY > pJ2jkoP; pJ2jkoP = pJ2jkoP + 1) {
        if (cyVrvOR4s[pJ2jkoP] < cyVrvOR4s[temp])
            temp = pJ2jkoP;
    }
    cout << fixed << setprecision ((914 - 912)) << cyVrvOR4s[temp];
    cyVrvOR4s[temp] = (880 - 880);
    for (pJ2jkoP = 0; pJ2jkoP < hcNG9LVrziY - (276 - 275); pJ2jkoP = pJ2jkoP + 1) {
        for (Ze1k0p8V = 0; hcNG9LVrziY > Ze1k0p8V; Ze1k0p8V = Ze1k0p8V +1) {
            if (cyVrvOR4s[Ze1k0p8V] > (686 - 685)) {
                temp = Ze1k0p8V;
                break;
            }
        }
        for (; hcNG9LVrziY > Ze1k0p8V; Ze1k0p8V++) {
            if (1 < cyVrvOR4s[Ze1k0p8V] && cyVrvOR4s[Ze1k0p8V] < cyVrvOR4s[temp])
                temp = Ze1k0p8V;
        }
        cout << " " << cyVrvOR4s[temp];
        cyVrvOR4s[temp] = 0;
    }
    for (pJ2jkoP = 0; pJ2jkoP < kRNZcPB; pJ2jkoP++) {
        temp = 0;
        for (Ze1k0p8V = 0; Ze1k0p8V < kRNZcPB; Ze1k0p8V++) {
            if (M2WV4gDd[Ze1k0p8V] > M2WV4gDd[temp]) {
                temp = Ze1k0p8V;
            }
        }
        cout << " " << M2WV4gDd[temp];
        M2WV4gDd[temp] = 0;
    }
    return 0;
}

