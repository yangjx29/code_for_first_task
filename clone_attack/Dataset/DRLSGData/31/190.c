struct   stu {
    char smwoZO [(889 - 869)];
    char bjnYeI [(764 - 744)];
    char bMVxBk5rTu;
    int YopwcaBQ42n;
    char point [(473 - 463)];
    char E9qBxUipPwSO [(214 - 164)];
    struct   stu *pNpXPdkYDaE3;
};
void  main () {
    struct   stu *rpxhKNB3eD = NULL;
    struct   stu *dbOqac = NULL;
    struct   stu *tWf18jn43QXJ = NULL;
    int a8AlVrJEW;
    a8AlVrJEW = sizeof (struct   stu);
    rpxhKNB3eD = (struct   stu *) malloc (a8AlVrJEW);
    rpxhKNB3eD->pNpXPdkYDaE3 = NULL;
    for (; scanf ("%s", rpxhKNB3eD->smwoZO);) {
        if (!((192 - 192) != (strcmp (rpxhKNB3eD->smwoZO, "end"))))
            break;
        scanf ("%s %c %d %s %s", rpxhKNB3eD->bjnYeI, &rpxhKNB3eD->bMVxBk5rTu, &rpxhKNB3eD->YopwcaBQ42n, &rpxhKNB3eD->point, rpxhKNB3eD->E9qBxUipPwSO);
        rpxhKNB3eD->pNpXPdkYDaE3 = tWf18jn43QXJ;
        tWf18jn43QXJ = rpxhKNB3eD;
        rpxhKNB3eD = (struct   stu *) malloc (a8AlVrJEW);
    }
    for (; tWf18jn43QXJ != NULL;) {
        free (rpxhKNB3eD);
        printf ("%s %s %c %d %s %s\n", tWf18jn43QXJ->smwoZO, tWf18jn43QXJ->bjnYeI, tWf18jn43QXJ->bMVxBk5rTu, tWf18jn43QXJ->YopwcaBQ42n, tWf18jn43QXJ->point, tWf18jn43QXJ->E9qBxUipPwSO);
        rpxhKNB3eD = tWf18jn43QXJ;
        tWf18jn43QXJ = tWf18jn43QXJ->pNpXPdkYDaE3;
    }
}

