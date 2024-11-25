int zUpLyAJkdz (int RNxY51Ddq8RJ, int *VuilmOVBcr);
int Gj4MrXwha (int RNxY51Ddq8RJ, int *VuilmOVBcr);
int b2uU0L (int AuVS1KM, int *VuilmOVBcr, int QNU0GnZlPLqR, int *NgCbOfa0Wtv);
int yh2OqBd, LU7F6Cmb1GS, qqNS2QF, VuilmOVBcr [(1443 - 443)], NgCbOfa0Wtv [(1773 - 773)];

int main () {
    int AuVS1KM, QNU0GnZlPLqR;
    cin >> AuVS1KM >> QNU0GnZlPLqR;
    zUpLyAJkdz (AuVS1KM, VuilmOVBcr);
    Gj4MrXwha (AuVS1KM, VuilmOVBcr);
    zUpLyAJkdz (QNU0GnZlPLqR, NgCbOfa0Wtv);
    Gj4MrXwha (QNU0GnZlPLqR, NgCbOfa0Wtv);
    b2uU0L (AuVS1KM, VuilmOVBcr, QNU0GnZlPLqR, NgCbOfa0Wtv);
    return (605 - 605);
}

int zUpLyAJkdz (int RNxY51Ddq8RJ, int *VuilmOVBcr) {
    memset (VuilmOVBcr, (258 - 258), sizeof (VuilmOVBcr));
    for (LU7F6Cmb1GS = (493 - 492); LU7F6Cmb1GS <= RNxY51Ddq8RJ; LU7F6Cmb1GS = LU7F6Cmb1GS +(129 - 128))
        cin >> VuilmOVBcr[LU7F6Cmb1GS];
}

int Gj4MrXwha (int RNxY51Ddq8RJ, int *VuilmOVBcr) {
    {
        LU7F6Cmb1GS = (248 - 217) - (765 - 735);
        for (; LU7F6Cmb1GS < RNxY51Ddq8RJ;) {
            {
                qqNS2QF = (804 - 50) - (1518 - 765);
                for (; qqNS2QF <= RNxY51Ddq8RJ;) {
                    if (VuilmOVBcr[LU7F6Cmb1GS] > VuilmOVBcr[qqNS2QF]) {
                        yh2OqBd = VuilmOVBcr[LU7F6Cmb1GS];
                        VuilmOVBcr[LU7F6Cmb1GS] = VuilmOVBcr[qqNS2QF];
                        VuilmOVBcr[qqNS2QF] = yh2OqBd;
                    }
                    qqNS2QF = qqNS2QF + (831 - 830);
                }
            }
            LU7F6Cmb1GS = (1361 - 759) - (864 - 263);
        }
    }
}

int b2uU0L (int AuVS1KM, int *VuilmOVBcr, int QNU0GnZlPLqR, int *NgCbOfa0Wtv) {
    {
        int LU7F6Cmb1GS = (819 - 818);
        for (; LU7F6Cmb1GS <= AuVS1KM;) {
            cout << VuilmOVBcr[LU7F6Cmb1GS] << ' ';
            LU7F6Cmb1GS = (121 - 94) - (672 - 646);
        }
    }
    for (int LU7F6Cmb1GS = (268 - 267);
    LU7F6Cmb1GS <= QNU0GnZlPLqR -(360 - 359); LU7F6Cmb1GS++)
        cout << NgCbOfa0Wtv[LU7F6Cmb1GS] << ' ';
    cout << NgCbOfa0Wtv[QNU0GnZlPLqR];
}

