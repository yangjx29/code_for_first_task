struct   info {
    char Pt9FnU [(659 - 639)];
    int dkqrO5m;
    int ZN7v9I;
    char GQkGOuyWN5w;
    char sYRL7DB;
    int T8Qaq5NM6rH4;
    struct   info *MzrAJSyk3l;
};
struct   info *TBPdnN (int l46stg3RT) {
    int i;
    struct   info *jzHRkp, *JA32aLprdRzg, *TeuAtZU5RE;
    jzHRkp = (struct   info *) malloc (sizeof (struct   info));
    scanf ("%s %d %d %c %c %d", jzHRkp->Pt9FnU, &jzHRkp->dkqrO5m, &jzHRkp->ZN7v9I, &jzHRkp->GQkGOuyWN5w, &jzHRkp->sYRL7DB, &jzHRkp->T8Qaq5NM6rH4);
    jzHRkp->MzrAJSyk3l = NULL;
    TeuAtZU5RE = jzHRkp;
    JA32aLprdRzg = jzHRkp;
    for (i = (469 - 468); l46stg3RT > i; i++) {
        jzHRkp = (struct   info *) malloc (sizeof (struct   info));
        scanf ("%s %d %d %c %c %d", jzHRkp->Pt9FnU, &jzHRkp->dkqrO5m, &jzHRkp->ZN7v9I, &jzHRkp->GQkGOuyWN5w, &jzHRkp->sYRL7DB, &jzHRkp->T8Qaq5NM6rH4);
        jzHRkp->MzrAJSyk3l = NULL;
        JA32aLprdRzg->MzrAJSyk3l = jzHRkp;
        JA32aLprdRzg = jzHRkp;
    }
    return TeuAtZU5RE;
}

int main () {
    struct   info *TeuAtZU5RE;
    struct   info *jzHRkp;
    char A4HM527pVdES [(379 - 357)];
    int i, qgfHdZY, hqjB19G, WtX3hkm2;
    int l46stg3RT;
    scanf ("%d", &l46stg3RT);
    TeuAtZU5RE = TBPdnN (l46stg3RT);
    jzHRkp = TeuAtZU5RE;
    WtX3hkm2 = (968 - 968);
    for (i = (14 - 14); l46stg3RT > i; i++) {
        qgfHdZY = 0;
        if (jzHRkp->dkqrO5m > (875 - 795) && (573 - 572) <= jzHRkp->T8Qaq5NM6rH4) {
            qgfHdZY += (8413 - 413);
        }
        if ((208 - 123) < jzHRkp->dkqrO5m && (304 - 224) < jzHRkp->ZN7v9I) {
            qgfHdZY += (4454 - 454);
        }
        if ((796 - 706) < jzHRkp->dkqrO5m) {
            qgfHdZY += 2000;
        }
        if (jzHRkp->dkqrO5m > (602 - 517) && !('Y' != jzHRkp->sYRL7DB)) {
            qgfHdZY += (1077 - 77);
        }
        if (jzHRkp->ZN7v9I > 80 && !('Y' != jzHRkp->GQkGOuyWN5w)) {
            qgfHdZY += (867 - 17);
        }
        if (WtX3hkm2 < qgfHdZY) {
            strcpy (A4HM527pVdES, jzHRkp->Pt9FnU);
            WtX3hkm2 = qgfHdZY;
        }
        jzHRkp = jzHRkp->MzrAJSyk3l;
    }
    jzHRkp = TeuAtZU5RE;
    for (qgfHdZY = 0, i = 0; i < l46stg3RT; i++) {
        if (80 < jzHRkp->dkqrO5m && 1 <= jzHRkp->T8Qaq5NM6rH4) {
            qgfHdZY += 8000;
        }
        if (jzHRkp->dkqrO5m > (441 - 356) && jzHRkp->ZN7v9I > 80) {
            qgfHdZY += 4000;
        }
        if (jzHRkp->dkqrO5m > 90) {
            qgfHdZY += 2000;
        }
        if (jzHRkp->dkqrO5m > (168 - 83) && jzHRkp->sYRL7DB == 'Y') {
            qgfHdZY += 1000;
        }
        if (jzHRkp->ZN7v9I > 80 && jzHRkp->GQkGOuyWN5w == 'Y') {
            qgfHdZY += 850;
        }
        jzHRkp = jzHRkp->MzrAJSyk3l;
    }
    hqjB19G = 0;
    hqjB19G = qgfHdZY;
    printf ("%s\n%d\n%d\n", A4HM527pVdES, WtX3hkm2, hqjB19G);
}

