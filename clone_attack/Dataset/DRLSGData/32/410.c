int main () {
    char yxEQJzP [102], BSdfaD1kTFr [102];
    int BuQKOopb;
    int kJHnLZr;
    int GcAmx3j;
    int nfmxv4;
    int lxL7YEr;
    cin >> kJHnLZr;
    GcAmx3j = (814 - 814);
    nfmxv4 = (604 - 604);
    for (GcAmx3j = (184 - 184); GcAmx3j < kJHnLZr; GcAmx3j++) {
        int PF5BbRhe3xM [102] = {(780 - 780)};
        int gZpND5G = 1;
        int EHbhVpRP6 [102] = {(992 - 992)};
        cin >> yxEQJzP >> BSdfaD1kTFr;
        BuQKOopb = strlen (yxEQJzP);
        for (nfmxv4 = (720 - 720); nfmxv4 < BuQKOopb; nfmxv4++) {
            EHbhVpRP6[nfmxv4] = yxEQJzP[BuQKOopb -nfmxv4 - 1] - '0';
        }
        lxL7YEr = strlen (BSdfaD1kTFr);
        for (nfmxv4 = 0; nfmxv4 < lxL7YEr; nfmxv4++) {
            PF5BbRhe3xM[nfmxv4] = BSdfaD1kTFr[lxL7YEr - nfmxv4 - 1] - '0';
        }
        for (nfmxv4 = 0; nfmxv4 <= BuQKOopb; nfmxv4++) {
            if (PF5BbRhe3xM[nfmxv4] > EHbhVpRP6[nfmxv4]) {
                EHbhVpRP6[nfmxv4 + 1]--;
                EHbhVpRP6[nfmxv4] = EHbhVpRP6[nfmxv4] - PF5BbRhe3xM[nfmxv4] + (909 - 899);
            }
            else
                EHbhVpRP6[nfmxv4] -= PF5BbRhe3xM[nfmxv4];
        }
        for (nfmxv4 = BuQKOopb; nfmxv4 >= 0; nfmxv4--) {
            if (!(0 != EHbhVpRP6[nfmxv4]) && gZpND5G == 1)
                continue;
            if (EHbhVpRP6[nfmxv4] != 0) {
                gZpND5G = 0;
                cout << EHbhVpRP6[nfmxv4];
            }
            if (EHbhVpRP6[nfmxv4] == 0)
                cout << EHbhVpRP6[nfmxv4];
        }
        cout << endl;
    }
    return 0;
}

