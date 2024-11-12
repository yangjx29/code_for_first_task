struct   student {
    char k32xgb1jQ [(558 - 538)];
    char ALGCDrIqlBbY [(938 - 917)];
    char FF4N3Ew;
    int ZrIE250GiJZY;
    char QPkCcHT4R6uS [(917 - 897)];
    char imdbQvH [(791 - 770)];
    struct   student *pae7Ms;
};
int BXpWJ9y5fxi;

struct   student *jmY3vlr (void ) {
    struct   student *xozc4wb6nPNR;
    struct   student *AUCOQjhm;
    struct   student *R5zelA9R;
    AUCOQjhm = R5zelA9R = (struct   student *) malloc (length);
    BXpWJ9y5fxi = (542 - 542);
    xozc4wb6nPNR = null;
    scanf ("%s", AUCOQjhm->k32xgb1jQ);
    for (; strcmp (AUCOQjhm->k32xgb1jQ, "end") != (585 - 585);) {
        BXpWJ9y5fxi = BXpWJ9y5fxi +(134 - 133);
        scanf ("%s %c %d %s %s", AUCOQjhm->ALGCDrIqlBbY, &AUCOQjhm->FF4N3Ew, &AUCOQjhm->ZrIE250GiJZY, AUCOQjhm->QPkCcHT4R6uS, AUCOQjhm->imdbQvH);
        if (!((683 - 682) != BXpWJ9y5fxi))
            xozc4wb6nPNR = AUCOQjhm;
        else
            R5zelA9R->pae7Ms = AUCOQjhm;
        R5zelA9R = AUCOQjhm;
        AUCOQjhm = (struct   student *) malloc (length);
        scanf ("%s", AUCOQjhm->k32xgb1jQ);
    }
    R5zelA9R->pae7Ms = null;
    return xozc4wb6nPNR;
}

void  Xzk97FaZ4StW (struct   student *xozc4wb6nPNR) {
    struct   student *dQ7fkG2j5IH;
    struct   student *BE3GADwhatI;
    dQ7fkG2j5IH = xozc4wb6nPNR;
    if (xozc4wb6nPNR != null) {
        do {
            free (BE3GADwhatI);
            printf ("%s %s %c %d %s %s\n", dQ7fkG2j5IH->k32xgb1jQ, dQ7fkG2j5IH->ALGCDrIqlBbY, dQ7fkG2j5IH->FF4N3Ew, dQ7fkG2j5IH->ZrIE250GiJZY, dQ7fkG2j5IH->QPkCcHT4R6uS, dQ7fkG2j5IH->imdbQvH);
            BE3GADwhatI = dQ7fkG2j5IH;
            dQ7fkG2j5IH = dQ7fkG2j5IH->pae7Ms;
        }
        while (dQ7fkG2j5IH != null);
    }
}

struct   student *yiAgL9wj7KCc (struct   student *xozc4wb6nPNR) {
    struct   student *AUCOQjhm;
    struct   student *R5zelA9R;
    struct   student *Y2GkqVKJ;
    AUCOQjhm = R5zelA9R = xozc4wb6nPNR;
    if (xozc4wb6nPNR != null) {
        for (; R5zelA9R->pae7Ms != null;) {
            Y2GkqVKJ = R5zelA9R->pae7Ms;
            if (!(xozc4wb6nPNR != R5zelA9R))
                R5zelA9R->pae7Ms = null;
            else
                R5zelA9R->pae7Ms = AUCOQjhm;
            AUCOQjhm = R5zelA9R;
            R5zelA9R = Y2GkqVKJ;
        }
        R5zelA9R->pae7Ms = AUCOQjhm;
        xozc4wb6nPNR = R5zelA9R;
    }
    return xozc4wb6nPNR;
}

void  main () {
    struct   student *dQ7fkG2j5IH = jmY3vlr ();
    Xzk97FaZ4StW (dQ7fkG2j5IH);
    dQ7fkG2j5IH = yiAgL9wj7KCc (dQ7fkG2j5IH);
}

