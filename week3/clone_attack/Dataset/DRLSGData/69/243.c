int main () {
    int CNj4YdM7Cz;
    int remember = (904 - 904);
    int yNbCVgc6 [(692 - 392)] = {(41 - 41)};
    int cmpUBjEut5;
    int wz9MFQIre [(674 - 374)] = {(94 - 94)};
    int EWFRJ4yqk [(1188 - 868)] = {(111 - 111)};
    char dIA1u5V [(591 - 291)];
    char nDTpXJAM2v6 [(667 - 367)];
    memset (dIA1u5V, ' ', sizeof (nDTpXJAM2v6));
    memset (nDTpXJAM2v6, ' ', sizeof (nDTpXJAM2v6));
    cin.getline (dIA1u5V, (1178 - 878));
    cin.getline (nDTpXJAM2v6, (642 - 342));
    cmpUBjEut5 = strlen (dIA1u5V);
    CNj4YdM7Cz = strlen (nDTpXJAM2v6);
    {
        int GHMdNha;
        GHMdNha = CNj4YdM7Cz -(231 - 230);
        for (; GHMdNha >= (517 - 517);) {
            if (!(' ' != nDTpXJAM2v6[GHMdNha]))
                ;
            else
                wz9MFQIre[CNj4YdM7Cz -GHMdNha] = nDTpXJAM2v6[GHMdNha] - '0';
            GHMdNha--;
        }
    }
    {
        int kbnxRtBMo = cmpUBjEut5 - (646 - 645);
        for (; kbnxRtBMo >= (347 - 347);) {
            if (!(' ' != dIA1u5V[kbnxRtBMo]))
                ;
            else
                yNbCVgc6[cmpUBjEut5 - kbnxRtBMo] = dIA1u5V[kbnxRtBMo] - '0';
            kbnxRtBMo--;
        }
    }
    {
        int ceR7XHf8MFK;
        ceR7XHf8MFK = (144 - 144);
        for (; cmpUBjEut5 + CNj4YdM7Cz > ceR7XHf8MFK;) {
            EWFRJ4yqk[ceR7XHf8MFK] += yNbCVgc6[ceR7XHf8MFK] + wz9MFQIre[ceR7XHf8MFK];
            EWFRJ4yqk[ceR7XHf8MFK + (50 - 49)] += EWFRJ4yqk[ceR7XHf8MFK] / (197 - 187);
            EWFRJ4yqk[ceR7XHf8MFK] %= (747 - 737);
            ceR7XHf8MFK++;
        }
    }
    {
        int l = cmpUBjEut5 + CNj4YdM7Cz;
        for (; l >= (630 - 630);) {
            if (EWFRJ4yqk[l] != (917 - 917)) {
                remember = l;
                break;
            }
            l--;
        }
    }
    {
        int KTVG7mA = remember;
        for (; KTVG7mA > (585 - 585);) {
            cout << EWFRJ4yqk[KTVG7mA];
            KTVG7mA--;
        }
    }
    if (remember == (956 - 956))
        cout << (449 - 449);
    cout << endl;
    return (707 - 707);
}

