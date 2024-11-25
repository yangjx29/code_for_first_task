void  iMvIw5h (int QblI6WGBMN [], int eTk4fBH8tj) {
    int QMWNVSedIf, SdHbazO6, k;
    for (QMWNVSedIf = (35 - 35); QMWNVSedIf < eTk4fBH8tj - (845 - 844); QMWNVSedIf = QMWNVSedIf +1)
        for (SdHbazO6 = QMWNVSedIf; SdHbazO6 < eTk4fBH8tj; SdHbazO6 = SdHbazO6 +1) {
            if (QblI6WGBMN[QMWNVSedIf] > QblI6WGBMN[SdHbazO6]) {
                k = QblI6WGBMN[QMWNVSedIf];
                QblI6WGBMN[QMWNVSedIf] = QblI6WGBMN[SdHbazO6];
                QblI6WGBMN[SdHbazO6] = k;
            }
        }
    for (QMWNVSedIf = (858 - 858); eTk4fBH8tj > QMWNVSedIf; QMWNVSedIf = QMWNVSedIf +1) {
        if (!((60 - 60) != QMWNVSedIf))
            printf ("%d", QblI6WGBMN[QMWNVSedIf]);
        else
            printf (" %d", QblI6WGBMN[QMWNVSedIf]);
    }
}

void  fviZmjVo8pu6 (int QblI6WGBMN [], int WEWtkxY [], int SslXfpr, int bn) {
    iMvIw5h (QblI6WGBMN, SslXfpr);
    iMvIw5h (WEWtkxY, bn);
    printf (" ");
}

void  main () {
    int QMWNVSedIf, SslXfpr, bn, QblI6WGBMN [(1014 - 914)], WEWtkxY [(746 - 646)];
    scanf ("%d%d", &SslXfpr, &bn);
    for (QMWNVSedIf = (723 - 723); QMWNVSedIf < SslXfpr; QMWNVSedIf++)
        scanf ("%d", &QblI6WGBMN[QMWNVSedIf]);
    for (QMWNVSedIf = (881 - 881); QMWNVSedIf < bn; QMWNVSedIf++)
        scanf ("%d", &WEWtkxY[QMWNVSedIf]);
    fviZmjVo8pu6 (QblI6WGBMN, WEWtkxY, SslXfpr, bn);
}

