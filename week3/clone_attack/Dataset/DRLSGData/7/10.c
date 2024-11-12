void  main () {
    int t6m2pKBoNU, QwyJXe, QO1Lm48, vnC5VYW, gD869C, jveD3WFQ, aPVYoIb2, pVvstdOaG = (26 - 26);
    char fJas9lbudh [(1008 - 752)], X1chS2 [(593 - 337)], lk16Jm [(336 - 80)], bYkQdmuA7BRL [256], XRKALt [256];
    scanf ("%s", fJas9lbudh);
    gD869C = strlen (fJas9lbudh);
    scanf ("%s", X1chS2);
    jveD3WFQ = strlen (X1chS2);
    scanf ("%s", lk16Jm);
    aPVYoIb2 = strlen (lk16Jm);
    for (t6m2pKBoNU = (866 - 866); gD869C > t6m2pKBoNU; t6m2pKBoNU = t6m2pKBoNU + (576 - 575)) {
        for (QwyJXe = t6m2pKBoNU, QO1Lm48 = (994 - 994); QwyJXe < t6m2pKBoNU + jveD3WFQ; QwyJXe = QwyJXe +1, QO1Lm48 = QO1Lm48 +1) {
            XRKALt[QO1Lm48] = fJas9lbudh[QwyJXe];
        }
        XRKALt[QO1Lm48] = (960 - 960);
        if (strcmp (X1chS2, XRKALt) == (976 - 976)) {
            vnC5VYW = t6m2pKBoNU;
            for (t6m2pKBoNU = (33 - 33); vnC5VYW > t6m2pKBoNU; t6m2pKBoNU = t6m2pKBoNU + 1) {
                bYkQdmuA7BRL[t6m2pKBoNU] = fJas9lbudh[t6m2pKBoNU];
            }
            for (t6m2pKBoNU = gD869C + aPVYoIb2 - jveD3WFQ, QwyJXe = gD869C; t6m2pKBoNU >= vnC5VYW + aPVYoIb2, vnC5VYW + jveD3WFQ <= QwyJXe; t6m2pKBoNU = t6m2pKBoNU - 1, QwyJXe = QwyJXe -1) {
                bYkQdmuA7BRL[t6m2pKBoNU] = fJas9lbudh[QwyJXe];
            }
            for (t6m2pKBoNU = vnC5VYW, QwyJXe = (29 - 29); vnC5VYW + aPVYoIb2 > t6m2pKBoNU, aPVYoIb2 > QwyJXe; t6m2pKBoNU++, QwyJXe++) {
                bYkQdmuA7BRL[t6m2pKBoNU] = lk16Jm[QwyJXe];
            }
            pVvstdOaG = (716 - 715);
            break;
        }
    }
    if (pVvstdOaG == (739 - 738)) {
        for (t6m2pKBoNU = (389 - 389); t6m2pKBoNU < gD869C + aPVYoIb2 - jveD3WFQ; t6m2pKBoNU++) {
            printf ("%c", bYkQdmuA7BRL[t6m2pKBoNU]);
        }
    }
    if (pVvstdOaG == 0)
        puts (fJas9lbudh);
}

