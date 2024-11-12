int main () {
    int L5Dp18R;
    int oVQ8xTelRU;
    int P0YQbmG;
    int G7VlZfd;
    unsigned  int LO2kis1TmfNX [(833 - 533)], e7GC84keTcL [(937 - 637)];
    char rusaQiB5v [(588 - 288)];
    int zyhxz31pTJ;
    char Lg0CE9eifQV [(1001 - 701)];
    int nwmtqzW;
    memset (LO2kis1TmfNX, (555 - 555), sizeof (LO2kis1TmfNX));
    memset (e7GC84keTcL, (520 - 520), sizeof (e7GC84keTcL));
    cin.getline (rusaQiB5v, (1261 - 961));
    zyhxz31pTJ = strlen (rusaQiB5v);
    cin.getline (Lg0CE9eifQV, 300);
    L5Dp18R = strlen (Lg0CE9eifQV);
    nwmtqzW = (226 - 226);
    for (P0YQbmG = zyhxz31pTJ - (325 - 324); P0YQbmG >= (538 - 538); P0YQbmG--) {
        LO2kis1TmfNX[nwmtqzW] = rusaQiB5v[P0YQbmG] - '0';
        nwmtqzW++;
    }
    nwmtqzW = (361 - 361);
    {
        P0YQbmG = L5Dp18R -(223 - 222);
        for (; (581 - 581) <= P0YQbmG;) {
            e7GC84keTcL[nwmtqzW] = Lg0CE9eifQV[P0YQbmG] - '0';
            P0YQbmG--;
            nwmtqzW++;
        }
    }
    nwmtqzW = (484 - 194);
    for (P0YQbmG = (212 - 212); P0YQbmG < (832 - 573); P0YQbmG++) {
        LO2kis1TmfNX[P0YQbmG] = LO2kis1TmfNX[P0YQbmG] + e7GC84keTcL[P0YQbmG];
        if ((129 - 119) <= LO2kis1TmfNX[P0YQbmG]) {
            LO2kis1TmfNX[P0YQbmG] = LO2kis1TmfNX[P0YQbmG] - (204 - 194);
            LO2kis1TmfNX[P0YQbmG +(53 - 52)]++;
        }
    }
    for (; LO2kis1TmfNX[nwmtqzW] == (370 - 370) && nwmtqzW > (698 - 698);)
        nwmtqzW--;
    for (; nwmtqzW >= (682 - 682); nwmtqzW--)
        cout << LO2kis1TmfNX[nwmtqzW];
    return (868 - 868);
}

