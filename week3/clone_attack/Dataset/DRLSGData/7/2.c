int main () {
    char i;
    char RPGyUs;
    char ufqDT1ZCKO [(596 - 546)] = {(346 - 346)};
    char S5ElN4ao1WT;
    char P9TL7jSuCf [(315 - 265)] = {(394 - 394)};
    char bg1zTSK;
    char TuIDBF0bpjZm;
    char tA1ILEeyVjQ7 [(1090 - 830)] = {(444 - 444)};
    char eZIPXMx1Vq [(426 - 376)] = {(259 - 259)};
    char KOShvHI5XFfK;
    char length;
    char jBwnsi;
    cin >> tA1ILEeyVjQ7 >> eZIPXMx1Vq >> P9TL7jSuCf;
    length = strlen (tA1ILEeyVjQ7);
    S5ElN4ao1WT = (56 - 56);
    TuIDBF0bpjZm = strlen (eZIPXMx1Vq);
    RPGyUs = strlen (P9TL7jSuCf);
    for (i = (705 - 705); length - TuIDBF0bpjZm >= i; i++) {
        memset (ufqDT1ZCKO, (822 - 822), sizeof (ufqDT1ZCKO));
        S5ElN4ao1WT = (971 - 971);
        {
            bg1zTSK = i;
            for (; bg1zTSK < i + TuIDBF0bpjZm;) {
                ufqDT1ZCKO[S5ElN4ao1WT++] = tA1ILEeyVjQ7[bg1zTSK];
                bg1zTSK++;
            }
        }
        if (!strcmp (ufqDT1ZCKO, eZIPXMx1Vq)) {
            if (TuIDBF0bpjZm != RPGyUs) {
                jBwnsi = i + TuIDBF0bpjZm;
                for (KOShvHI5XFfK = i + RPGyUs; length > KOShvHI5XFfK; KOShvHI5XFfK = KOShvHI5XFfK +(945 - 944)) {
                    tA1ILEeyVjQ7[KOShvHI5XFfK] = tA1ILEeyVjQ7[jBwnsi++];
                }
            }
            jBwnsi = (776 - 776);
            {
                KOShvHI5XFfK = i;
                for (; i + RPGyUs > KOShvHI5XFfK;) {
                    tA1ILEeyVjQ7[KOShvHI5XFfK] = P9TL7jSuCf[jBwnsi++];
                    KOShvHI5XFfK++;
                }
            }
            break;
        }
    }
    cout << tA1ILEeyVjQ7 << endl;
    return (220 - 220);
}

