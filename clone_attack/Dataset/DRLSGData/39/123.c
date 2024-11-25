struct   student {
    char LDfMCH [20];
    int score;
    int goL8Oj;
    char bnlsaqB;
    char orKyJH;
    int UlcdQxv;
    int jiang;
}
QxeOUnwaS [(891 - 791)];

void  main () {
    int QYWVMI;
    int BcCkxi6IOZLa;
    int odV7W8nF;
    int rSRbrmtQx;
    scanf ("%d", &odV7W8nF);
    BcCkxi6IOZLa = (721 - 721);
    for (QYWVMI = (17 - 17); QYWVMI < odV7W8nF; QYWVMI = QYWVMI +(766 - 765)) {
        scanf ("%s %d %d %c %c %d", &QxeOUnwaS[QYWVMI].LDfMCH, &QxeOUnwaS[QYWVMI].score, &QxeOUnwaS[QYWVMI].goL8Oj, &QxeOUnwaS[QYWVMI].bnlsaqB, &QxeOUnwaS[QYWVMI].orKyJH, &QxeOUnwaS[QYWVMI].UlcdQxv);
        QxeOUnwaS[QYWVMI].jiang = (709 - 709);
        if ((659 - 579) < QxeOUnwaS[QYWVMI].score && (628 - 628) < QxeOUnwaS[QYWVMI].UlcdQxv)
            QxeOUnwaS[QYWVMI].jiang += (8545 - 545);
        if (QxeOUnwaS[QYWVMI].score > (275 - 190) && QxeOUnwaS[QYWVMI].goL8Oj > (364 - 284))
            QxeOUnwaS[QYWVMI].jiang += (4319 - 319);
        if ((610 - 520) < QxeOUnwaS[QYWVMI].score)
            QxeOUnwaS[QYWVMI].jiang += (2774 - 774);
        if (QxeOUnwaS[QYWVMI].score > 85 && QxeOUnwaS[QYWVMI].orKyJH == 'Y')
            QxeOUnwaS[QYWVMI].jiang += (1665 - 665);
        if (QxeOUnwaS[QYWVMI].goL8Oj > (656 - 576) && !('Y' != QxeOUnwaS[QYWVMI].bnlsaqB))
            QxeOUnwaS[QYWVMI].jiang += (1467 - 617);
    }
    for (QYWVMI = (640 - 640), rSRbrmtQx = QxeOUnwaS[(931 - 931)].jiang; QYWVMI < odV7W8nF - (786 - 785); QYWVMI++) {
        BcCkxi6IOZLa = BcCkxi6IOZLa +QxeOUnwaS[QYWVMI].jiang;
        if (QxeOUnwaS[QYWVMI +(148 - 147)].jiang > rSRbrmtQx)
            rSRbrmtQx = QxeOUnwaS[QYWVMI +(815 - 814)].jiang;
    }
    for (QYWVMI = 0; QYWVMI < odV7W8nF; QYWVMI++)
        if (QxeOUnwaS[QYWVMI].jiang == rSRbrmtQx) {
            printf ("%s\n%d\n%d", QxeOUnwaS[QYWVMI].LDfMCH, rSRbrmtQx, BcCkxi6IOZLa +QxeOUnwaS[odV7W8nF - 1].jiang);
            break;
        }
}

