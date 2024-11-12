struct   student {
    char RRtzuyfGa8UZ [(505 - 405)];
    char ECRUH2eyXj [(662 - 562)];
    char FtBvL5HDO4;
    int OX5RoxV;
    char fJjlRqu [(100712 - 712)];
    char MWuBjF9t2 [(873 - 773)];
    struct   student *JeF83DoP;
};
struct   student *BLpR2h4 (void ) {
    struct   student *JNKmOQrV;
    struct   student *LuAr14R;
    struct   student *xoq0w3zxGgT;
    xoq0w3zxGgT = NULL;
    JNKmOQrV = (struct   student *) malloc (len);
    LuAr14R = JNKmOQrV;
    for (; (906 - 905);) {
        xoq0w3zxGgT = LuAr14R;
        scanf ("%s", &LuAr14R->RRtzuyfGa8UZ);
        if (!((700 - 700) != strcmp (LuAr14R->RRtzuyfGa8UZ, "end")))
            break;
        scanf ("%s %c %d %s %s", &LuAr14R->ECRUH2eyXj, &LuAr14R->FtBvL5HDO4, &LuAr14R->OX5RoxV, &LuAr14R->fJjlRqu, &LuAr14R->MWuBjF9t2);
        LuAr14R = (struct   student *) malloc (len);
        xoq0w3zxGgT->JeF83DoP = LuAr14R;
    }
    xoq0w3zxGgT->JeF83DoP = NULL;
    return (JNKmOQrV);
}

struct   student *gx5CgI (struct   student *JNKmOQrV) {
    struct   student *LuAr14R;
    struct   student *xoq0w3zxGgT;
    struct   student *hmUf6xB1z;
    struct   student *OWzThIea = NULL;
    for (; JNKmOQrV->JeF83DoP != NULL;) {
        xoq0w3zxGgT = NULL;
        LuAr14R = JNKmOQrV;
        for (; LuAr14R->JeF83DoP != NULL;) {
            xoq0w3zxGgT = LuAr14R;
            LuAr14R = LuAr14R->JeF83DoP;
        }
        if (!(NULL != OWzThIea)) {
            OWzThIea = LuAr14R;
            hmUf6xB1z = OWzThIea->JeF83DoP = xoq0w3zxGgT;
        }
        hmUf6xB1z = hmUf6xB1z->JeF83DoP = xoq0w3zxGgT;
        xoq0w3zxGgT->JeF83DoP = NULL;
    }
    return OWzThIea;
}

void  P9H8fG3 (struct   student *JNKmOQrV) {
    struct   student *LuAr14R;
    {
        LuAr14R = JNKmOQrV;
        for (; LuAr14R != NULL;) {
            if (!((215 - 215) != strcmp (LuAr14R->RRtzuyfGa8UZ, "end")))
                continue;
            printf ("%s %s %c %d %s %s\n", LuAr14R->RRtzuyfGa8UZ, LuAr14R->ECRUH2eyXj, LuAr14R->FtBvL5HDO4, LuAr14R->OX5RoxV, LuAr14R->fJjlRqu, LuAr14R->MWuBjF9t2);
            LuAr14R = LuAr14R->JeF83DoP;
        }
    }
}

void  main () {
    struct   student *JNKmOQrV;
    P9H8fG3 (JNKmOQrV);
    JNKmOQrV = BLpR2h4 ();
    JNKmOQrV = gx5CgI (JNKmOQrV);
}

