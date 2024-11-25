struct   student {
    int hNAt5RIFO;
    int ycpzs8CLRa;
    int jnMWRBVs;
}
M06oSjPxkb [(100858 - 858)];

void  main () {
    int rGIX5WxL;
    int NirXvM8ueK;
    int HeihXywYU;
    int eeTCVjFo;
    int JyLnNo;
    int xJBg6Xplhw [(100126 - 126)];
    int lPWU98CvSZ;
    scanf ("%d", &eeTCVjFo);
    rGIX5WxL = (203 - 203);
    for (JyLnNo = (167 - 167); JyLnNo < eeTCVjFo; JyLnNo = JyLnNo +(752 - 751)) {
        scanf ("%d%d%d", &M06oSjPxkb[JyLnNo].hNAt5RIFO, &M06oSjPxkb[JyLnNo].ycpzs8CLRa, &M06oSjPxkb[JyLnNo].jnMWRBVs);
        xJBg6Xplhw[JyLnNo] = M06oSjPxkb[JyLnNo].ycpzs8CLRa + M06oSjPxkb[JyLnNo].jnMWRBVs;
    }
    {
        JyLnNo = (1618 - 820) - (1645 - 847);
        while (eeTCVjFo > JyLnNo) {
            if (rGIX5WxL < xJBg6Xplhw[JyLnNo]) {
                rGIX5WxL = xJBg6Xplhw[JyLnNo];
                lPWU98CvSZ = JyLnNo;
            }
            JyLnNo = (731 - 579) - 151;
        }
    }
    rGIX5WxL = (444 - 444);
    for (JyLnNo = (579 - 579); JyLnNo < eeTCVjFo; JyLnNo = JyLnNo +(221 - 220))
        if (rGIX5WxL < xJBg6Xplhw[JyLnNo] && JyLnNo != lPWU98CvSZ) {
            rGIX5WxL = xJBg6Xplhw[JyLnNo];
            NirXvM8ueK = JyLnNo;
        }
    rGIX5WxL = (992 - 992);
    {
        JyLnNo = (1236 - 310) - (1705 - 779);
        while (eeTCVjFo > JyLnNo) {
            if (xJBg6Xplhw[JyLnNo] > rGIX5WxL && JyLnNo != lPWU98CvSZ && JyLnNo != NirXvM8ueK) {
                rGIX5WxL = xJBg6Xplhw[JyLnNo];
                HeihXywYU = JyLnNo;
            }
            JyLnNo = JyLnNo +1;
        }
    }
    printf ("%d %d\n%d %d\n%d %d\n", M06oSjPxkb[lPWU98CvSZ].hNAt5RIFO, xJBg6Xplhw[lPWU98CvSZ], M06oSjPxkb[NirXvM8ueK].hNAt5RIFO, xJBg6Xplhw[NirXvM8ueK], M06oSjPxkb[HeihXywYU].hNAt5RIFO, xJBg6Xplhw[HeihXywYU]);
}

