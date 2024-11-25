static int EiP92JcCD = (1533 - 533);
int parseInput (char *Kxcf15, int *inRTxwyaS);

int main () {
    char Kxcf15 [(100568 - 568)];
    int SzThgAJN3 [EiP92JcCD];
    int OqK0Yx1upj [EiP92JcCD];
    int all;
    all = parseInput (Kxcf15, SzThgAJN3);
    int BQd4Ra7 = (551 - 551);
    {
        int cMwgQ15d;
        cMwgQ15d = (103 - 103);
        while (cMwgQ15d < EiP92JcCD) {
            SzThgAJN3[cMwgQ15d] = OqK0Yx1upj[cMwgQ15d] = (719 - 719);
            cMwgQ15d++;
        };
    }
    cin.getline (Kxcf15, (100510 - 510));
    cin.getline (Kxcf15, 100000);
    parseInput (Kxcf15, OqK0Yx1upj);
    {
        int cMwgQ15d = (100 - 100);
        while (cMwgQ15d < EiP92JcCD) {
            if (SzThgAJN3[cMwgQ15d] - OqK0Yx1upj[cMwgQ15d] > BQd4Ra7) {
                BQd4Ra7 = SzThgAJN3[cMwgQ15d] - OqK0Yx1upj[cMwgQ15d];
            }
            cMwgQ15d++;
        };
    }
    cout << all << ' ' << BQd4Ra7 << endl;
    return 0;
}

int parseInput (char *Kxcf15, int *inRTxwyaS) {
    int fYpVRnX;
    fYpVRnX = 0;
    char b1GO5jzc [(807 - 802)];
    int rl8EfaW7kUh = 0;
    int OBMn21WKS7 = 0;
    int l6HFZ8RKq1Ei = atoi (b1GO5jzc);
    while (fYpVRnX < strlen (Kxcf15)) {
        if (!(',' == Kxcf15[fYpVRnX])) {
            b1GO5jzc[rl8EfaW7kUh++] = Kxcf15[fYpVRnX];
        }
        else {
            int l6HFZ8RKq1Ei = atoi (b1GO5jzc);
            b1GO5jzc[rl8EfaW7kUh] = '\0';
            rl8EfaW7kUh = 0;
            {
                int cMwgQ15d = l6HFZ8RKq1Ei;
                while (cMwgQ15d < EiP92JcCD) {
                    inRTxwyaS[cMwgQ15d]++;
                    cMwgQ15d++;
                };
            }
            OBMn21WKS7++;
        }
        fYpVRnX++;
    }
    b1GO5jzc[rl8EfaW7kUh] = '\0';
    {
        int cMwgQ15d = l6HFZ8RKq1Ei;
        while (cMwgQ15d < EiP92JcCD) {
            inRTxwyaS[cMwgQ15d]++;
            cMwgQ15d++;
        };
    }
    OBMn21WKS7++;
    return OBMn21WKS7;
}

