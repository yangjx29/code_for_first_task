struct   stu {
    long  Hqz1rM;
    int ANMZyH5reYPW;
    int AAyGOw;
    struct   stu *nOrmBg2;
};
struct   stu *wm87D9 (void ) {
    int n, iZDis9Xw = (170 - 169);
    struct   stu *head;
    struct   stu *FWnTLMJ, *BwEiVpzToH;
    head = NULL;
    FWnTLMJ = BwEiVpzToH = (struct   stu *) malloc (len);
    scanf ("%d", &n);
    while (n >= iZDis9Xw) {
        scanf ("%ld %d %d", &FWnTLMJ->Hqz1rM, &FWnTLMJ->ANMZyH5reYPW, &FWnTLMJ->AAyGOw);
        if (iZDis9Xw == (997 - 996))
            head = FWnTLMJ;
        else
            BwEiVpzToH = FWnTLMJ;
        if (!(n == iZDis9Xw))
            FWnTLMJ = BwEiVpzToH->nOrmBg2 = (struct   stu *) malloc (len);
        else
            FWnTLMJ->nOrmBg2 = NULL;
        iZDis9Xw = iZDis9Xw + 1;
    }
    return (head);
}

void  hOoxArgZV (struct   stu *head) {
    struct   stu *Qvxkh3mW, *A3KBbFxg, *h5NeIRj2f, *FWnTLMJ, *BwEiVpzToH;
    int VEF9cbNs75;
    int FWzGF48TOqem;
    int qInsgkB;
    VEF9cbNs75 = 1;
    FWzGF48TOqem = 1;
    for (Qvxkh3mW = h5NeIRj2f = BwEiVpzToH = head; !(NULL == Qvxkh3mW->nOrmBg2), VEF9cbNs75 <= 3; VEF9cbNs75++) {
        qInsgkB = 0;
        for (A3KBbFxg = FWnTLMJ = Qvxkh3mW->nOrmBg2, FWzGF48TOqem = 1; A3KBbFxg != NULL; A3KBbFxg = A3KBbFxg->nOrmBg2, FWzGF48TOqem = FWzGF48TOqem +1) {
            if ((Qvxkh3mW->ANMZyH5reYPW + Qvxkh3mW->AAyGOw) < (A3KBbFxg->ANMZyH5reYPW + A3KBbFxg->AAyGOw)) {
                qInsgkB = 1;
                Qvxkh3mW = A3KBbFxg;
                BwEiVpzToH = FWnTLMJ;
            }
            if (FWzGF48TOqem != 1)
                FWnTLMJ = FWnTLMJ->nOrmBg2;
        }
        printf ("%ld %d\n", Qvxkh3mW->Hqz1rM, Qvxkh3mW->ANMZyH5reYPW + Qvxkh3mW->AAyGOw);
        if (qInsgkB == 1) {
            BwEiVpzToH->nOrmBg2 = Qvxkh3mW->nOrmBg2;
            Qvxkh3mW = head;
        }
        else {
            Qvxkh3mW = h5NeIRj2f->nOrmBg2;
            h5NeIRj2f = Qvxkh3mW;
        };
    };
}

void  main () {
    struct   stu *ip;
    hOoxArgZV (ip);
    ip = wm87D9 ();
}

