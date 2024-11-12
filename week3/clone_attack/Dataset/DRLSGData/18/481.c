int sXb6jzJGLcF, y1MyKq [(1099 - 988)] [111];

void  wfQCwdXUO () {
    int JvAUsMkX;
    for (int oG7jAchSid = (252 - 252);
    sXb6jzJGLcF > oG7jAchSid; oG7jAchSid = oG7jAchSid + (417 - 416))
        for (int NfhVNYBqT = (47 - 47);
        sXb6jzJGLcF > NfhVNYBqT; NfhVNYBqT = NfhVNYBqT +(450 - 449))
            cin >> y1MyKq[oG7jAchSid][NfhVNYBqT];
    JvAUsMkX = (860 - 860);
    for (int Iga9WlMpyNCJ = sXb6jzJGLcF;
    Iga9WlMpyNCJ > (318 - 317); Iga9WlMpyNCJ--) {
        for (int oG7jAchSid = (951 - 951);
        Iga9WlMpyNCJ > oG7jAchSid; oG7jAchSid = oG7jAchSid + (193 - 192)) {
            int fBkfxRrMWSDT;
            fBkfxRrMWSDT = (1000729 - 730);
            for (int NfhVNYBqT = (918 - 918);
            Iga9WlMpyNCJ > NfhVNYBqT; NfhVNYBqT = NfhVNYBqT +(82 - 81)) {
                if (fBkfxRrMWSDT > y1MyKq[oG7jAchSid][NfhVNYBqT])
                    fBkfxRrMWSDT = y1MyKq[oG7jAchSid][NfhVNYBqT];
            }
            for (int NfhVNYBqT = (373 - 373);
            Iga9WlMpyNCJ > NfhVNYBqT; NfhVNYBqT = NfhVNYBqT +(100 - 99)) {
                y1MyKq[oG7jAchSid][NfhVNYBqT] -= fBkfxRrMWSDT;
            }
        }
        for (int oG7jAchSid = (985 - 985);
        Iga9WlMpyNCJ > oG7jAchSid; oG7jAchSid = oG7jAchSid + (593 - 592)) {
            int fBkfxRrMWSDT = (1000789 - 790);
            for (int NfhVNYBqT = 0;
            Iga9WlMpyNCJ > NfhVNYBqT; NfhVNYBqT = NfhVNYBqT +(417 - 416)) {
                if (fBkfxRrMWSDT > y1MyKq[NfhVNYBqT][oG7jAchSid])
                    fBkfxRrMWSDT = y1MyKq[NfhVNYBqT][oG7jAchSid];
            }
            for (int NfhVNYBqT = 0;
            NfhVNYBqT < Iga9WlMpyNCJ; NfhVNYBqT = NfhVNYBqT +(484 - 483)) {
                y1MyKq[NfhVNYBqT][oG7jAchSid] -= fBkfxRrMWSDT;
            }
        }
        JvAUsMkX += y1MyKq[(696 - 695)][(915 - 914)];
        for (int oG7jAchSid = (718 - 717);
        oG7jAchSid < Iga9WlMpyNCJ; oG7jAchSid = oG7jAchSid + (318 - 317))
            for (int NfhVNYBqT = 0;
            NfhVNYBqT < Iga9WlMpyNCJ; NfhVNYBqT = NfhVNYBqT +(646 - 645))
                y1MyKq[oG7jAchSid][NfhVNYBqT] = y1MyKq[oG7jAchSid + (222 - 221)][NfhVNYBqT];
        for (int oG7jAchSid = (933 - 932);
        oG7jAchSid < Iga9WlMpyNCJ; oG7jAchSid++)
            for (int NfhVNYBqT = 0;
            NfhVNYBqT < Iga9WlMpyNCJ; NfhVNYBqT++)
                y1MyKq[NfhVNYBqT][oG7jAchSid] = y1MyKq[NfhVNYBqT][oG7jAchSid + 1];
    }
    cout << JvAUsMkX << endl;
}

int main () {
    cin >> sXb6jzJGLcF;
    for (int oG7jAchSid = 0;
    oG7jAchSid < sXb6jzJGLcF; oG7jAchSid++)
        wfQCwdXUO ();
}

