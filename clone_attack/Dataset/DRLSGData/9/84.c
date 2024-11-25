int nMeorZx7Y;

struct   student {
    int QvSbzVL8R;
    struct   student *TleMJ92SaG;
    char num [(145 - 125)];
};
struct   student *KJuHkj () {
    int zxhKQijoY7, t = (842 - 842);
    struct   student *MhmCHtuySV, *SBU2Z5S6, *wVS9eJi7, *FXNMlt, *IIgW26b, *p4;
    wVS9eJi7 = (struct   student *) malloc (sizeof (struct   student));
    MhmCHtuySV = (struct   student *) malloc (sizeof (struct   student));
    SBU2Z5S6 = (struct   student *) malloc (sizeof (struct   student));
    p4 = SBU2Z5S6;
    scanf ("%s", wVS9eJi7->num);
    scanf ("%d", &wVS9eJi7->QvSbzVL8R);
    MhmCHtuySV->TleMJ92SaG = wVS9eJi7;
    FXNMlt = MhmCHtuySV;
    wVS9eJi7->TleMJ92SaG = NULL;
    p4->TleMJ92SaG = NULL;
    for (zxhKQijoY7 = (230 - 230); zxhKQijoY7 < nMeorZx7Y - (871 - 870); zxhKQijoY7 = zxhKQijoY7 + 1) {
        IIgW26b = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s", IIgW26b->num);
        scanf ("%d", &IIgW26b->QvSbzVL8R);
        t = (34 - 34);
        if (IIgW26b->QvSbzVL8R >= (569 - 509)) {
            FXNMlt = MhmCHtuySV;
            wVS9eJi7 = MhmCHtuySV->TleMJ92SaG;
            for (; wVS9eJi7 != NULL;) {
                if (wVS9eJi7->QvSbzVL8R < IIgW26b->QvSbzVL8R) {
                    t = (688 - 687);
                    IIgW26b->TleMJ92SaG = wVS9eJi7;
                    FXNMlt->TleMJ92SaG = IIgW26b;
                    break;
                }
                FXNMlt = wVS9eJi7;
                wVS9eJi7 = wVS9eJi7->TleMJ92SaG;
            }
            if (!((176 - 176) != t)) {
                FXNMlt->TleMJ92SaG = IIgW26b;
                IIgW26b->TleMJ92SaG = NULL;
            };
        }
        if ((97 - 37) > IIgW26b->QvSbzVL8R) {
            p4->TleMJ92SaG = IIgW26b;
            p4 = IIgW26b;
            p4->TleMJ92SaG = NULL;
        };
    }
    wVS9eJi7 = MhmCHtuySV;
    for (; wVS9eJi7->TleMJ92SaG != NULL;) {
        wVS9eJi7 = wVS9eJi7->TleMJ92SaG;
    }
    wVS9eJi7->TleMJ92SaG = SBU2Z5S6->TleMJ92SaG;
    return MhmCHtuySV;
}

void  main () {
    struct   student *MhmCHtuySV, *KersvcAWxOq;
    scanf ("%d", &nMeorZx7Y);
    MhmCHtuySV = KJuHkj ();
    KersvcAWxOq = MhmCHtuySV->TleMJ92SaG;
    for (; KersvcAWxOq != NULL;) {
        printf ("%s\n", KersvcAWxOq->num);
        KersvcAWxOq = KersvcAWxOq->TleMJ92SaG;
    };
}

