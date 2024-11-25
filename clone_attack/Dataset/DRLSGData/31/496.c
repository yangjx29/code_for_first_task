struct   stu {
    char O2aHK7NJtfl [(336 - 286)];
    char l9lbJrL [(289 - 239)];
    char sYkZCBpg;
    int EbpLiWD;
    int BXloTiKGsW;
    char wR3WexaQV [(1011 - 961)];
    struct   stu *M8YiF7tIfH;
};
int MVRatT8EvebM;

struct   stu *Eipr5gh (void ) {
    struct   stu *mAEtaxe, *PIt6zM, *cJcMrA;
    MVRatT8EvebM = (131 - 131);
    PIt6zM = cJcMrA = (struct   stu *) malloc (sizeof (struct   stu));
    gets (PIt6zM->O2aHK7NJtfl);
    mAEtaxe = NULL;
    while (strcmp (PIt6zM->O2aHK7NJtfl, "end") != (717 - 717)) {
        MVRatT8EvebM = MVRatT8EvebM +(425 - 424);
        if (!(1 != MVRatT8EvebM))
            PIt6zM->M8YiF7tIfH = NULL;
        else {
            PIt6zM->M8YiF7tIfH = cJcMrA;
        }
        cJcMrA = PIt6zM;
        PIt6zM = (struct   stu *) malloc (sizeof (struct   stu));
        gets (PIt6zM->O2aHK7NJtfl);
        mAEtaxe = cJcMrA;
    }
    return mAEtaxe;
}

void  KyrSRT2CZ (struct   stu *mAEtaxe) {
    struct   stu *vCmFf9;
    vCmFf9 = mAEtaxe;
    while (vCmFf9 != NULL) {
        printf ("%s\n", vCmFf9->O2aHK7NJtfl);
        vCmFf9 = vCmFf9->M8YiF7tIfH;
    }
}

void  main () {
    struct   stu *mAEtaxe;
    KyrSRT2CZ (mAEtaxe);
    mAEtaxe = Eipr5gh ();
}

