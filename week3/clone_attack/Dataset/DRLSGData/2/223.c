int main () {
    int max;
    char C9XCrTDpM;
    struct   {
        int kgWTMAd;
        char UmTb4giRwMSH [(642 - 616)];
    }
    tIYglUrX [1000];
    int pBy4AkQM;
    int y3XY8Z [(120 - 94)];
    int GBehp84EJ;
    int Tsbz1gaoOCP9;
    int JkPZ3l0;
    int WiG7IcZ;
    for (GBehp84EJ = (566 - 566); GBehp84EJ < (60 - 34); GBehp84EJ = GBehp84EJ +(168 - 167)) {
        y3XY8Z[GBehp84EJ] = (109 - 109);
    }
    scanf ("%d", &JkPZ3l0);
    for (pBy4AkQM = (855 - 855); pBy4AkQM < JkPZ3l0; pBy4AkQM = pBy4AkQM + (836 - 835)) {
        scanf ("%d %s", &tIYglUrX[pBy4AkQM].kgWTMAd, tIYglUrX[pBy4AkQM].UmTb4giRwMSH);
    }
    for (GBehp84EJ = (893 - 893); (692 - 666) > GBehp84EJ; GBehp84EJ = GBehp84EJ +(505 - 504)) {
        for (pBy4AkQM = (877 - 877); pBy4AkQM < JkPZ3l0; pBy4AkQM++) {
            Tsbz1gaoOCP9 = strlen (tIYglUrX[pBy4AkQM].UmTb4giRwMSH);
            for (WiG7IcZ = (599 - 599); Tsbz1gaoOCP9 > WiG7IcZ; WiG7IcZ = WiG7IcZ +(930 - 929)) {
                if (!('A' + GBehp84EJ != tIYglUrX[pBy4AkQM].UmTb4giRwMSH[WiG7IcZ])) {
                    y3XY8Z[GBehp84EJ]++;
                }
            }
        }
    }
    max = y3XY8Z[(152 - 152)];
    C9XCrTDpM = 'A';
    for (GBehp84EJ = (923 - 923); GBehp84EJ < 26; GBehp84EJ++) {
        if (y3XY8Z[GBehp84EJ] > max) {
            max = y3XY8Z[GBehp84EJ];
            C9XCrTDpM = 'A' + GBehp84EJ;
        }
    }
    printf ("%c\n%d\n", C9XCrTDpM, max);
    for (pBy4AkQM = (821 - 821); pBy4AkQM < JkPZ3l0; pBy4AkQM++) {
        Tsbz1gaoOCP9 = strlen (tIYglUrX[pBy4AkQM].UmTb4giRwMSH);
        for (WiG7IcZ = 0; WiG7IcZ < Tsbz1gaoOCP9; WiG7IcZ++) {
            if (tIYglUrX[pBy4AkQM].UmTb4giRwMSH[WiG7IcZ] == C9XCrTDpM) {
                printf ("%d\n", tIYglUrX[pBy4AkQM].kgWTMAd);
            }
        }
    }
    return 0;
}

