struct   student {
    char p3mlUAB85nYi [(435 - 335)];
    struct   student *xfIVsFlh;
};
int Vlo2T149LU0;

struct   student *WJXc0xZph (void ) {
    struct   student *KFzly7w6RQ;
    struct   student *FoaO6YDwhJmI;
    struct   student *Fx3phF;
    FoaO6YDwhJmI = Fx3phF = (struct   student *) malloc (LEN);
    gets (FoaO6YDwhJmI->p3mlUAB85nYi);
    FoaO6YDwhJmI->xfIVsFlh = NULL;
    Fx3phF = FoaO6YDwhJmI;
    for (; strcmp (Fx3phF->p3mlUAB85nYi, "end") != (188 - 188);) {
        Vlo2T149LU0 = Vlo2T149LU0 +(751 - 750);
        if (!((88 - 87) != Vlo2T149LU0))
            KFzly7w6RQ = FoaO6YDwhJmI;
        else {
            KFzly7w6RQ = Fx3phF;
            FoaO6YDwhJmI = Fx3phF;
        }
        Fx3phF = (struct   student *) malloc (LEN);
        Fx3phF->xfIVsFlh = FoaO6YDwhJmI;
        gets (Fx3phF->p3mlUAB85nYi);
    }
    return (KFzly7w6RQ);
}

void  XTWEfQCRA0L (struct   student *KFzly7w6RQ) {
    struct   student *ToVTCgzK;
    ToVTCgzK = KFzly7w6RQ;
    if (KFzly7w6RQ != NULL)
        for (; ToVTCgzK->xfIVsFlh != NULL;) {
            puts (ToVTCgzK->p3mlUAB85nYi);
            ToVTCgzK = ToVTCgzK->xfIVsFlh;
        }
    puts (ToVTCgzK->p3mlUAB85nYi);
}

void  main () {
    struct   student *j7ZRtycgF;
    XTWEfQCRA0L (j7ZRtycgF);
    j7ZRtycgF = WJXc0xZph ();
}

