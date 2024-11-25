struct   student {
    char cAO5pl [(887 - 867)];
    int IPu4FM;
    int tnx7ci;
    char sI3Cy7e9Rw;
    char vbyZ45;
    int yNElqC9;
    int money;
    struct   student *trmn6xJIZ;
};
main () {
    int UNT6pWBF7bvx, iZLGoFS58, D9ygVh = 0, jekoFgTRXmZs = 0;
    struct   student *HoT49j8QKZ;
    struct   student *yX2ZJ94lezb;
    struct   student *WPg8q1ATkW;
    struct   student *DleSn4G7;
    struct   student *p4;
    struct   student *YV0Z276;
    scanf ("%d", &UNT6pWBF7bvx);
    yX2ZJ94lezb = WPg8q1ATkW = (struct   student *) malloc (LEN);
    yX2ZJ94lezb->money = 0;
    scanf ("%s %d %d %c %c %d", yX2ZJ94lezb->cAO5pl, &yX2ZJ94lezb->IPu4FM, &yX2ZJ94lezb->tnx7ci, &yX2ZJ94lezb->sI3Cy7e9Rw, &yX2ZJ94lezb->vbyZ45, &yX2ZJ94lezb->yNElqC9);
    HoT49j8QKZ = yX2ZJ94lezb;
    DleSn4G7 = HoT49j8QKZ;
    for (iZLGoFS58 = 0; UNT6pWBF7bvx -(581 - 580) > iZLGoFS58; iZLGoFS58++) {
        yX2ZJ94lezb = (struct   student *) malloc (LEN);
        yX2ZJ94lezb->money = 0;
        WPg8q1ATkW->trmn6xJIZ = yX2ZJ94lezb;
        WPg8q1ATkW = yX2ZJ94lezb;
        scanf ("%s %d %d %c %c %d", yX2ZJ94lezb->cAO5pl, &yX2ZJ94lezb->IPu4FM, &yX2ZJ94lezb->tnx7ci, &yX2ZJ94lezb->sI3Cy7e9Rw, &yX2ZJ94lezb->vbyZ45, &yX2ZJ94lezb->yNElqC9);
    }
    WPg8q1ATkW->trmn6xJIZ = NULL;
    for (; DleSn4G7 != NULL; DleSn4G7 = DleSn4G7->trmn6xJIZ) {
        if (DleSn4G7->IPu4FM > (196 - 116) && 1 <= DleSn4G7->yNElqC9)
            DleSn4G7->money = DleSn4G7->money + 8000;
        if ((889 - 804) < DleSn4G7->IPu4FM && DleSn4G7->tnx7ci > 80)
            DleSn4G7->money = DleSn4G7->money + 4000;
        if (90 < DleSn4G7->IPu4FM)
            DleSn4G7->money = DleSn4G7->money + 2000;
        if (85 < DleSn4G7->IPu4FM && DleSn4G7->vbyZ45 == 'Y')
            DleSn4G7->money = DleSn4G7->money + 1000;
        if (DleSn4G7->tnx7ci > 80 && DleSn4G7->sI3Cy7e9Rw == 'Y')
            DleSn4G7->money = DleSn4G7->money + 850;
        D9ygVh = D9ygVh +DleSn4G7->money;
    }
    for (p4 = HoT49j8QKZ; p4 != NULL; p4 = p4->trmn6xJIZ) {
        if (p4->money > jekoFgTRXmZs) {
            jekoFgTRXmZs = p4->money;
            YV0Z276 = p4;
        }
    }
    printf ("%s\n%d\n%d", YV0Z276->cAO5pl, jekoFgTRXmZs, D9ygVh);
}

