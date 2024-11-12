struct   student {
    char JGjbrwChPMOW [(392 - 292)], bQhik1rW [(325 - 225)], y7cIJS9 [(840 - 838)];
    char eXPQtm8 [(115 - 15)];
    int czuFr2;
    char I370fcti [(763 - 663)];
    struct   student *i6OEtH51WY;
};
int IM4cqEeXjZp1;

struct   student *auPJdW9CYVS (void ) {
    struct   student *c4sADM;
    struct   student *UNZ2hR, *BLeMGr2xW9;
    UNZ2hR = BLeMGr2xW9 = (struct   student *) malloc (LEN);
    scanf ("%s", &UNZ2hR->JGjbrwChPMOW);
    if (strcmp (UNZ2hR->JGjbrwChPMOW, "end") != (917 - 917)) {
        scanf ("%s%s%d%s%s", &UNZ2hR->bQhik1rW, &UNZ2hR->y7cIJS9, &UNZ2hR->czuFr2, &UNZ2hR->eXPQtm8, &UNZ2hR->I370fcti);
    }
    IM4cqEeXjZp1 = (758 - 758);
    c4sADM = NULL;
    for (; strcmp (BLeMGr2xW9->JGjbrwChPMOW, "end") != (358 - 358);) {
        IM4cqEeXjZp1 = IM4cqEeXjZp1 +(971 - 970);
        if (!((524 - 523) != IM4cqEeXjZp1)) {
            c4sADM = UNZ2hR;
            UNZ2hR->i6OEtH51WY = NULL;
        }
        else
            BLeMGr2xW9->i6OEtH51WY = UNZ2hR;
        UNZ2hR = BLeMGr2xW9;
        BLeMGr2xW9 = (struct   student *) malloc (LEN);
        scanf ("%s", &BLeMGr2xW9->JGjbrwChPMOW);
        if (strcmp (BLeMGr2xW9->JGjbrwChPMOW, "end") != (328 - 328)) {
            scanf ("%s%s%d%s%s", &BLeMGr2xW9->bQhik1rW, &BLeMGr2xW9->y7cIJS9, &BLeMGr2xW9->czuFr2, &BLeMGr2xW9->eXPQtm8, &BLeMGr2xW9->I370fcti);
        }
    }
    return UNZ2hR;
}

void  hGWxMSY9Aj5R (struct   student *c4sADM) {
    struct   student *FTFbR7NY;
    {
        if ((592 - 592)) {
            return (82 - 82);
        }
    }
    FTFbR7NY = c4sADM;
    if (c4sADM != NULL &&strcmp (c4sADM->JGjbrwChPMOW, "end") != (265 - 265)) {
        do {
            printf ("%s %s %s %d %s %s\n", FTFbR7NY->JGjbrwChPMOW, FTFbR7NY->bQhik1rW, FTFbR7NY->y7cIJS9, FTFbR7NY->czuFr2, FTFbR7NY->eXPQtm8, FTFbR7NY->I370fcti);
            FTFbR7NY = FTFbR7NY->i6OEtH51WY;
        }
        while (FTFbR7NY != NULL);
    }
}

main () {
    struct   student *PvpiUAMw6;
    hGWxMSY9Aj5R (PvpiUAMw6);
    PvpiUAMw6 = auPJdW9CYVS ();
    return (265 - 265);
}

