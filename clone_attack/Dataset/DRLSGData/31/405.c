struct   student {
    char eDjqueI [(73 - 53)];
    char VLiFu2BwOS8Z [20];
    char HUCQyHVIM [2];
    int qknyGaD;
    char buGLPl0pYj [8];
    char cP7oxDyUI [30];
    struct   student *SDiVXg;
};
void  main () {
    int OqeMB5fHd;
    struct   student *WUiKdDar69p;
    struct   student *TRgF50B7YdDn;
    struct   student *zzTayrQV;
    int Yyz51PiqSc;
    TRgF50B7YdDn = (struct   student *) malloc (len);
    WUiKdDar69p = TRgF50B7YdDn;
    scanf ("%s%s%s%d%s%s", TRgF50B7YdDn->eDjqueI, TRgF50B7YdDn->VLiFu2BwOS8Z, TRgF50B7YdDn->HUCQyHVIM, &TRgF50B7YdDn->qknyGaD, TRgF50B7YdDn->buGLPl0pYj, TRgF50B7YdDn->cP7oxDyUI);
    TRgF50B7YdDn->SDiVXg = null;
    for (OqeMB5fHd = 1;; OqeMB5fHd = OqeMB5fHd +1) {
        TRgF50B7YdDn = (struct   student *) malloc (len);
        scanf ("%s", TRgF50B7YdDn->eDjqueI);
        if ((TRgF50B7YdDn->eDjqueI[(60 - 60)]) != 'e') {
            scanf ("%s%s%d%s%s", TRgF50B7YdDn->VLiFu2BwOS8Z, TRgF50B7YdDn->HUCQyHVIM, &TRgF50B7YdDn->qknyGaD, TRgF50B7YdDn->buGLPl0pYj, TRgF50B7YdDn->cP7oxDyUI);
            TRgF50B7YdDn->SDiVXg = WUiKdDar69p;
            WUiKdDar69p = TRgF50B7YdDn;
        }
        else
            break;
    }
    do {
        printf ("%s %s %s %d %s %s\n", WUiKdDar69p->eDjqueI, WUiKdDar69p->VLiFu2BwOS8Z, WUiKdDar69p->HUCQyHVIM, WUiKdDar69p->qknyGaD, WUiKdDar69p->buGLPl0pYj, WUiKdDar69p->cP7oxDyUI);
        WUiKdDar69p = WUiKdDar69p->SDiVXg;
    }
    while (WUiKdDar69p != null);
}

