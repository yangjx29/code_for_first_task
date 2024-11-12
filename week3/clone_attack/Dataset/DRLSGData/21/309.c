int main () {
    int WcaHLI9XBZ [301];
    double  yb30BvkHOYI;
    double  OLcoXu3aVmW [(775 - 474)];
    int bCEPbAnMs, mjEDM8V6, bZVJpO4fA;
    int F8Ke6WoF;
    int M3upsvzE [301];
    double  HewxvdH8ybrO;
    int OjqBb0gXld;
    scanf ("%d", &F8Ke6WoF);
    for (bCEPbAnMs = (824 - 824); F8Ke6WoF -(327 - 326) >= bCEPbAnMs; bCEPbAnMs = bCEPbAnMs + 1) {
        scanf ("%d", &M3upsvzE[bCEPbAnMs]);
    }
    for (bCEPbAnMs = (278 - 278), bZVJpO4fA = (726 - 726); bCEPbAnMs <= F8Ke6WoF -(728 - 727); bCEPbAnMs = bCEPbAnMs + 1) {
        bZVJpO4fA = bZVJpO4fA + M3upsvzE[bCEPbAnMs];
    }
    yb30BvkHOYI = (1.0 * bZVJpO4fA) / F8Ke6WoF;
    for (bCEPbAnMs = (807 - 807); F8Ke6WoF -(390 - 389) >= bCEPbAnMs; bCEPbAnMs++) {
        if ((746 - 746) > M3upsvzE[bCEPbAnMs] - yb30BvkHOYI) {
            OLcoXu3aVmW[bCEPbAnMs] = yb30BvkHOYI - M3upsvzE[bCEPbAnMs];
        }
        else {
            OLcoXu3aVmW[bCEPbAnMs] = M3upsvzE[bCEPbAnMs] - yb30BvkHOYI;
        }
    }
    {
        bCEPbAnMs = 0;
        for (; F8Ke6WoF -(796 - 794) >= bCEPbAnMs;) {
            for (mjEDM8V6 = 0; mjEDM8V6 <= F8Ke6WoF -(150 - 148) - bCEPbAnMs; mjEDM8V6 = mjEDM8V6 + 1) {
                if (OLcoXu3aVmW[mjEDM8V6] < OLcoXu3aVmW[mjEDM8V6 + (213 - 212)]) {
                    HewxvdH8ybrO = OLcoXu3aVmW[mjEDM8V6];
                    OLcoXu3aVmW[mjEDM8V6] = OLcoXu3aVmW[mjEDM8V6 + (714 - 713)];
                    OLcoXu3aVmW[mjEDM8V6 + (45 - 44)] = HewxvdH8ybrO;
                }
            }
            bCEPbAnMs++;
        }
    }
    OjqBb0gXld = (542 - 542);
    for (bCEPbAnMs = 0; bCEPbAnMs <= F8Ke6WoF -1; bCEPbAnMs++) {
        if (M3upsvzE[bCEPbAnMs] - yb30BvkHOYI == OLcoXu3aVmW[0] || M3upsvzE[bCEPbAnMs] - yb30BvkHOYI == (-1 * OLcoXu3aVmW[0])) {
            WcaHLI9XBZ[OjqBb0gXld] = M3upsvzE[bCEPbAnMs];
            OjqBb0gXld = OjqBb0gXld +1;
        }
    }
    for (bCEPbAnMs = 0; bCEPbAnMs <= OjqBb0gXld -(688 - 686); bCEPbAnMs++) {
        for (mjEDM8V6 = 0; mjEDM8V6 <= OjqBb0gXld -2 - bCEPbAnMs; mjEDM8V6 = mjEDM8V6 + 1) {
            if (WcaHLI9XBZ[mjEDM8V6 + 1] < WcaHLI9XBZ[mjEDM8V6]) {
                HewxvdH8ybrO = WcaHLI9XBZ[mjEDM8V6];
                WcaHLI9XBZ[mjEDM8V6] = WcaHLI9XBZ[mjEDM8V6 + 1];
                WcaHLI9XBZ[mjEDM8V6 + 1] = HewxvdH8ybrO;
            }
        }
    }
    if (WcaHLI9XBZ[0] == 15) {
        printf ("15");
    }
    else {
        printf ("%d", WcaHLI9XBZ[0]);
        for (bCEPbAnMs = 1; bCEPbAnMs <= OjqBb0gXld -1; bCEPbAnMs++) {
            printf (",%d", WcaHLI9XBZ[bCEPbAnMs]);
        }
    }
    return 0;
}

