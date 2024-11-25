int main () {
    int b2X0rfl, bIcoNKiMPvS, USbVsz [20] [20], f4NxT5p68JCH, Pbdg1YMc4, QM3H98D7S = 0, v0lwNeUtBjbP [401], oUHAFegZ8WhP [401];
    cin >> b2X0rfl >> bIcoNKiMPvS;
    {
        f4NxT5p68JCH = 0;
        for (; b2X0rfl > f4NxT5p68JCH;) {
            for (Pbdg1YMc4 = 0; bIcoNKiMPvS > Pbdg1YMc4; Pbdg1YMc4++) {
                cin >> USbVsz[f4NxT5p68JCH][Pbdg1YMc4];
            }
            f4NxT5p68JCH++;
        }
    }
    if (USbVsz[0][1] <= USbVsz[0][0] && USbVsz[1][0] <= USbVsz[0][0]) {
        v0lwNeUtBjbP[QM3H98D7S] = 0;
        oUHAFegZ8WhP[QM3H98D7S] = 0;
        QM3H98D7S++;
    }
    {
        Pbdg1YMc4 = 1;
        while (bIcoNKiMPvS - 1 > Pbdg1YMc4) {
            if (USbVsz[0][Pbdg1YMc4 -1] <= USbVsz[0][Pbdg1YMc4] && USbVsz[0][Pbdg1YMc4 +1] <= USbVsz[0][Pbdg1YMc4] && USbVsz[1][Pbdg1YMc4] <= USbVsz[0][Pbdg1YMc4]) {
                v0lwNeUtBjbP[QM3H98D7S] = 0;
                oUHAFegZ8WhP[QM3H98D7S] = Pbdg1YMc4;
                QM3H98D7S++;
            }
            Pbdg1YMc4++;
        }
    }
    if (USbVsz[0][bIcoNKiMPvS - 2] <= USbVsz[0][bIcoNKiMPvS - 1] && USbVsz[1][bIcoNKiMPvS - 1] <= USbVsz[0][bIcoNKiMPvS - 1]) {
        v0lwNeUtBjbP[QM3H98D7S] = 0;
        oUHAFegZ8WhP[QM3H98D7S] = bIcoNKiMPvS - 1;
        QM3H98D7S++;
    }
    for (f4NxT5p68JCH = 1; b2X0rfl - 1 > f4NxT5p68JCH; f4NxT5p68JCH++) {
        if (USbVsz[f4NxT5p68JCH + 1][0] <= USbVsz[f4NxT5p68JCH][0] && USbVsz[f4NxT5p68JCH][1] <= USbVsz[f4NxT5p68JCH][0] && USbVsz[f4NxT5p68JCH - 1][0] <= USbVsz[f4NxT5p68JCH][0]) {
            v0lwNeUtBjbP[QM3H98D7S] = f4NxT5p68JCH;
            oUHAFegZ8WhP[QM3H98D7S] = 0;
            QM3H98D7S++;
        }
        {
            Pbdg1YMc4 = 1;
            while (bIcoNKiMPvS - 1 > Pbdg1YMc4) {
                if (USbVsz[f4NxT5p68JCH - 1][Pbdg1YMc4] <= USbVsz[f4NxT5p68JCH][Pbdg1YMc4] && USbVsz[f4NxT5p68JCH][Pbdg1YMc4 -1] <= USbVsz[f4NxT5p68JCH][Pbdg1YMc4] && USbVsz[f4NxT5p68JCH][Pbdg1YMc4 +1] <= USbVsz[f4NxT5p68JCH][Pbdg1YMc4] && USbVsz[f4NxT5p68JCH][Pbdg1YMc4] >= USbVsz[f4NxT5p68JCH + 1][Pbdg1YMc4]) {
                    v0lwNeUtBjbP[QM3H98D7S] = f4NxT5p68JCH;
                    oUHAFegZ8WhP[QM3H98D7S] = Pbdg1YMc4;
                    QM3H98D7S++;
                }
                Pbdg1YMc4++;
            }
        }
        if (USbVsz[f4NxT5p68JCH][bIcoNKiMPvS - 1] >= USbVsz[f4NxT5p68JCH][bIcoNKiMPvS - 2] && USbVsz[f4NxT5p68JCH][bIcoNKiMPvS - 1] >= USbVsz[f4NxT5p68JCH + 1][bIcoNKiMPvS - 1] && USbVsz[f4NxT5p68JCH][bIcoNKiMPvS - 1] >= USbVsz[f4NxT5p68JCH - 1][bIcoNKiMPvS - 1]) {
            v0lwNeUtBjbP[QM3H98D7S] = f4NxT5p68JCH;
            oUHAFegZ8WhP[QM3H98D7S] = bIcoNKiMPvS - 1;
            QM3H98D7S++;
        }
    }
    if (USbVsz[b2X0rfl - 1][0] >= USbVsz[b2X0rfl - 1][1] && USbVsz[b2X0rfl - 1][0] >= USbVsz[b2X0rfl - 2][0]) {
        v0lwNeUtBjbP[QM3H98D7S] = b2X0rfl - 1;
        oUHAFegZ8WhP[QM3H98D7S] = 0;
        QM3H98D7S++;
    }
    {
        Pbdg1YMc4 = 1;
        while (Pbdg1YMc4 < bIcoNKiMPvS - 1) {
            if (USbVsz[b2X0rfl - 1][Pbdg1YMc4] >= USbVsz[b2X0rfl - 1][Pbdg1YMc4 -1] && USbVsz[b2X0rfl - 1][Pbdg1YMc4] >= USbVsz[b2X0rfl - 1][Pbdg1YMc4 +1] && USbVsz[b2X0rfl - 1][Pbdg1YMc4] >= USbVsz[b2X0rfl - 2][Pbdg1YMc4]) {
                v0lwNeUtBjbP[QM3H98D7S] = b2X0rfl - 1;
                oUHAFegZ8WhP[QM3H98D7S] = Pbdg1YMc4;
                QM3H98D7S++;
            }
            Pbdg1YMc4++;
        }
    }
    if (USbVsz[b2X0rfl - 1][bIcoNKiMPvS - 1] >= USbVsz[b2X0rfl - 1][bIcoNKiMPvS - 2] && USbVsz[b2X0rfl - 1][bIcoNKiMPvS - 1] >= USbVsz[b2X0rfl - 2][bIcoNKiMPvS - 1]) {
        v0lwNeUtBjbP[QM3H98D7S] = b2X0rfl - 1;
        oUHAFegZ8WhP[QM3H98D7S] = bIcoNKiMPvS - 1;
        QM3H98D7S++;
    }
    {
        f4NxT5p68JCH = 0;
        for (; f4NxT5p68JCH < QM3H98D7S;) {
            cout << v0lwNeUtBjbP[f4NxT5p68JCH] << " " << oUHAFegZ8WhP[f4NxT5p68JCH] << endl;
            f4NxT5p68JCH++;
        }
    }
    return 0;
}

